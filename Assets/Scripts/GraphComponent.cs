   using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

//[ExecuteInEditMode]

public class GraphComponent : MonoBehaviour
{

    private DrawableGraph<DrawableNode, float> graph;


    // Start is called before the first frame update
    void Start()
    {
        graph = new DrawableGraph<DrawableNode, float>();
        //var zero = new Vector3(0, 0, 0);
        float ew = 0.02f; // set edge width

        //declare and initialize 5 nodes
        var node1 = graph.createDrawableNode(1, 0.5f, 0.5f, 1.5f, Color.red);
        var node2 = graph.createDrawableNode(2, 0f, 0f, 0.5f, Color.red);
        var node3 = graph.createDrawableNode(3, 0.7f, -0.7f, 1.7f, Color.red);
        var node4 = graph.createDrawableNode(4, 0.2f, 0.7f, 0.3f, Color.red);
        var node5 = graph.createDrawableNode(5, 0.7f, 0.6f, 2f, Color.red);

        //declare and initialize 5x2 edges (edge must be initialized both ways)
        var edge1 = graph.createDrawableNodeEdge(1.0f, node1, node2, Color.yellow, ew);
        var edge2 = graph.createDrawableNodeEdge(1.0f, node2, node1, Color.yellow, ew);

        var edge3 = graph.createDrawableNodeEdge(1.0f, node3, node4, Color.yellow, ew);
        var edge4 = graph.createDrawableNodeEdge(1.0f, node4, node3, Color.yellow, ew);

        var edge5 = graph.createDrawableNodeEdge(1.0f, node2, node5, Color.yellow, ew);
        var edge6 = graph.createDrawableNodeEdge(1.0f, node5, node2, Color.yellow, ew);

        var edge7 = graph.createDrawableNodeEdge(1.0f, node1, node4, Color.yellow, ew);
        var edge8 = graph.createDrawableNodeEdge(1.0f, node4, node1, Color.yellow, ew);

        var edge9 = graph.createDrawableNodeEdge(1.0f, node2, node4, Color.yellow, ew);
        var edge0 = graph.createDrawableNodeEdge(1.0f, node4, node2, Color.yellow, ew);

        
        //TODO better?
        graph.Nodes.Add(node1);
        graph.Nodes.Add(node2);
        graph.Nodes.Add(node3);
        graph.Nodes.Add(node4);
        graph.Nodes.Add(node5);

        //TODO better?
        graph.Edges.Add(edge1);
        graph.Edges.Add(edge2);
        graph.Edges.Add(edge3);
        graph.Edges.Add(edge4);
        graph.Edges.Add(edge5);
        graph.Edges.Add(edge6);
        graph.Edges.Add(edge7);
        graph.Edges.Add(edge8);
        graph.Edges.Add(edge9);
        graph.Edges.Add(edge0);
        
    }

    private void Update()
    {
        //call step in every update to update the node positions and forces
        graph.step();

        foreach (var node in graph.Nodes)
        {
            //only update the position of the node game object (representing the sphere) if the value is not a nan
            if (float.IsNaN(node.Value.coord.magnitude))
            {
                Debug.Break();
            } else
            {
                node.Value.obj.transform.position = node.Value.coord;
            }
        }

        //update the start and endpoint of the edges
        foreach (var edge in graph.Edges)
        {
            edge.LRend.SetPosition(0, edge.From.Value.coord);
            edge.LRend.SetPosition(1, edge.To.Value.coord);

        }

    }

}