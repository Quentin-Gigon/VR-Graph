#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Graph`2::.ctor()
// 0x00000002 System.Collections.Generic.List`1<Node`1<TNodeType>> Graph`2::get_Nodes()
// 0x00000003 System.Void Graph`2::set_Nodes(System.Collections.Generic.List`1<Node`1<TNodeType>>)
// 0x00000004 System.Collections.Generic.List`1<Edge`2<TEdgeType,TNodeType>> Graph`2::get_Edges()
// 0x00000005 System.Void Graph`2::set_Edges(System.Collections.Generic.List`1<Edge`2<TEdgeType,TNodeType>>)
// 0x00000006 System.Void DrawableGraph`2::step()
// 0x00000007 Node`1<DrawableNode> DrawableGraph`2::createDrawableNode(System.Int32,System.Single,System.Single,System.Single,UnityEngine.Color)
// 0x00000008 Edge`2<System.Single,DrawableNode> DrawableGraph`2::createDrawableNodeEdge(System.Single,Node`1<DrawableNode>,Node`1<DrawableNode>,UnityEngine.Color,System.Single)
// 0x00000009 System.Void DrawableGraph`2::.ctor()
// 0x0000000A System.Void DrawableGraph`2::.cctor()
// 0x0000000B UnityEngine.Vector3 Coordinate::get_coord()
extern void Coordinate_get_coord_m2C927B16458757D1CE47FBF7F248B9324BD85287 (void);
// 0x0000000C System.Void Coordinate::set_coord(UnityEngine.Vector3)
extern void Coordinate_set_coord_mC9160571CC0358171717E593B8EC1B22E8394383 (void);
// 0x0000000D System.Void Coordinate::.ctor()
extern void Coordinate__ctor_m764275A3A5887566E02B9BF7578A4BAB62E06BFB (void);
// 0x0000000E UnityEngine.Color Node`1::get_NodeColor()
// 0x0000000F System.Void Node`1::set_NodeColor(UnityEngine.Color)
// 0x00000010 TNodeType Node`1::get_Value()
// 0x00000011 System.Void Node`1::set_Value(TNodeType)
// 0x00000012 System.Int32 Node`1::get_Id()
// 0x00000013 System.Void Node`1::set_Id(System.Int32)
// 0x00000014 System.Void Node`1::.ctor()
// 0x00000015 UnityEngine.Color Edge`2::get_EdgeColor()
// 0x00000016 System.Void Edge`2::set_EdgeColor(UnityEngine.Color)
// 0x00000017 TEdgeType Edge`2::get_Value()
// 0x00000018 System.Void Edge`2::set_Value(TEdgeType)
// 0x00000019 Node`1<TNodeType> Edge`2::get_From()
// 0x0000001A System.Void Edge`2::set_From(Node`1<TNodeType>)
// 0x0000001B Node`1<TNodeType> Edge`2::get_To()
// 0x0000001C System.Void Edge`2::set_To(Node`1<TNodeType>)
// 0x0000001D UnityEngine.LineRenderer Edge`2::get_LRend()
// 0x0000001E System.Void Edge`2::set_LRend(UnityEngine.LineRenderer)
// 0x0000001F System.Void Edge`2::.ctor()
// 0x00000020 System.Void DrawableNode::.ctor(UnityEngine.Vector3)
extern void DrawableNode__ctor_mFE95BD7C53ED00116D9D30F8931AB87AB800A409 (void);
// 0x00000021 UnityEngine.GameObject DrawableNode::get_obj()
extern void DrawableNode_get_obj_m8DE7B21578571A3FB28C597E6DBC062D8D9E76DC (void);
// 0x00000022 System.Void DrawableNode::set_obj(UnityEngine.GameObject)
extern void DrawableNode_set_obj_m7E21237B3B3402CDDB4D7F538DE06EAB2650C3A5 (void);
// 0x00000023 System.Void GraphComponent::Start()
extern void GraphComponent_Start_m2C586042A5D8D0360B2749E961043314B5BF9139 (void);
// 0x00000024 System.Void GraphComponent::Update()
extern void GraphComponent_Update_m973932EB4CE8378211F9AAD11D3730BE437FA397 (void);
// 0x00000025 System.Void GraphComponent::.ctor()
extern void GraphComponent__ctor_mBE807CB42924770FCA73487147A53E5D1CAA13CE (void);
// 0x00000026 System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
extern void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (void);
// 0x00000027 System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
extern void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (void);
static Il2CppMethodPointer s_methodPointers[39] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Coordinate_get_coord_m2C927B16458757D1CE47FBF7F248B9324BD85287,
	Coordinate_set_coord_mC9160571CC0358171717E593B8EC1B22E8394383,
	Coordinate__ctor_m764275A3A5887566E02B9BF7578A4BAB62E06BFB,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	DrawableNode__ctor_mFE95BD7C53ED00116D9D30F8931AB87AB800A409,
	DrawableNode_get_obj_m8DE7B21578571A3FB28C597E6DBC062D8D9E76DC,
	DrawableNode_set_obj_m7E21237B3B3402CDDB4D7F538DE06EAB2650C3A5,
	GraphComponent_Start_m2C586042A5D8D0360B2749E961043314B5BF9139,
	GraphComponent_Update_m973932EB4CE8378211F9AAD11D3730BE437FA397,
	GraphComponent__ctor_mBE807CB42924770FCA73487147A53E5D1CAA13CE,
	XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF,
	XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E,
};
static const int32_t s_InvokerIndices[39] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6529,
	5250,
	6538,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5250,
	6418,
	5149,
	6538,
	6538,
	6538,
	6538,
	6538,
};
static const Il2CppTokenRangePair s_rgctxIndices[2] = 
{
	{ 0x02000002, { 0, 6 } },
	{ 0x02000003, { 6, 26 } },
};
extern const uint32_t g_rgctx_List_1_t06930115F15C9E1E051E7A15216E5C6FF8E7CAE4;
extern const uint32_t g_rgctx_List_1__ctor_m42BC10CD01EED64316C69CF67E7B725FD54EB54C;
extern const uint32_t g_rgctx_Graph_2_set_Nodes_mD4378BC1E8704401461ADAA8E11FDD1E88F9006E;
extern const uint32_t g_rgctx_List_1_tF1F2166212A6EC0A1721B2D078E0B42596C97259;
extern const uint32_t g_rgctx_List_1__ctor_mE0E046A1C6B9E9DA9D317CC1370AB3769222CB5E;
extern const uint32_t g_rgctx_Graph_2_set_Edges_mD71D96D54673B6D722E13227168BF9EF26F8CF98;
extern const uint32_t g_rgctx_Graph_2_get_Nodes_m5ED38888B9FDAE31D059ECD59DAA99937C975081;
extern const uint32_t g_rgctx_List_1_tB4075B4B1F23CAB58148A375EF3B7AD8C10BAC65;
extern const uint32_t g_rgctx_List_1_GetEnumerator_m3A33E80756CD918A169F70229C8B5D78BABD5756;
extern const uint32_t g_rgctx_Enumerator_get_Current_m08A5BBE21811C295CE34BBB71D45B16FBA67A04A;
extern const uint32_t g_rgctx_Node_1_t8E7CA6C0D3A506312E147BC4CA08787D658714DB;
extern const uint32_t g_rgctx_Node_1_get_Value_m1F04AEA6F8FC69FFA4C0AF5E8BA7089835FEA3FE;
extern const uint32_t g_rgctx_N_tA894F5A8E9C053478078AFCE14D0B795984C19B8;
extern const uint32_t g_rgctx_DrawableGraph_2_t47C48E5EC9B41BFBD017139BD99F92DB18998F23;
extern const uint32_t g_rgctx_Graph_2_t0CEC6260A42D369AFEA9D4AB832EB5D083868AC9;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m769EC37FD10FA577FE3274A98B29D1A8BE197AC6;
extern const uint32_t g_rgctx_Enumerator_t86234CF31244E1DCE6ACB846741E90AD357110E7;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t86234CF31244E1DCE6ACB846741E90AD357110E7_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Node_1_get_Id_m51A1501FA800D6AA84B1466C4422F01219F8011A;
extern const uint32_t g_rgctx_Graph_2_get_Edges_mF015849C5B8FCFE304FEFB0FC7705B9E4853F555;
extern const uint32_t g_rgctx_List_1_tBB867EDF317F032E8B64E10980C221A2DC504325;
extern const uint32_t g_rgctx_List_1_GetEnumerator_m35B8C22FE0F7C3F89A0350307A2FA8823674218F;
extern const uint32_t g_rgctx_Enumerator_get_Current_mAB9DE835C171E6F771CC7C5C3CEE89E12FE8D3FE;
extern const uint32_t g_rgctx_Edge_2_tF1E62D9CA0C42DD7A9161EF6B29F20292C697169;
extern const uint32_t g_rgctx_Edge_2_get_From_mD8B154C79CF6AF8787032F020600664E90E1A4EA;
extern const uint32_t g_rgctx_Edge_2_get_To_mAD1141A76E9DA3373A3F19AAFFC2B83E3F8442BC;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m43B45208E5B832D53198F923E58B818A773C4CC5;
extern const uint32_t g_rgctx_Enumerator_tF653933769FDD04661FC7B46EC9F76C7225AB804;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_tF653933769FDD04661FC7B46EC9F76C7225AB804_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const Il2CppRGCTXConstrainedData g_rgctx_N_tA894F5A8E9C053478078AFCE14D0B795984C19B8_Coordinate_get_coord_m2C927B16458757D1CE47FBF7F248B9324BD85287;
extern const Il2CppRGCTXConstrainedData g_rgctx_N_tA894F5A8E9C053478078AFCE14D0B795984C19B8_Coordinate_set_coord_mC9160571CC0358171717E593B8EC1B22E8394383;
extern const uint32_t g_rgctx_Graph_2__ctor_mEBA8167018A7849F3CE2B1DA882394213179AD5B;
static const Il2CppRGCTXDefinition s_rgctxValues[32] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t06930115F15C9E1E051E7A15216E5C6FF8E7CAE4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_m42BC10CD01EED64316C69CF67E7B725FD54EB54C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Graph_2_set_Nodes_mD4378BC1E8704401461ADAA8E11FDD1E88F9006E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_tF1F2166212A6EC0A1721B2D078E0B42596C97259 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_mE0E046A1C6B9E9DA9D317CC1370AB3769222CB5E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Graph_2_set_Edges_mD71D96D54673B6D722E13227168BF9EF26F8CF98 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Graph_2_get_Nodes_m5ED38888B9FDAE31D059ECD59DAA99937C975081 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_tB4075B4B1F23CAB58148A375EF3B7AD8C10BAC65 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_m3A33E80756CD918A169F70229C8B5D78BABD5756 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m08A5BBE21811C295CE34BBB71D45B16FBA67A04A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Node_1_t8E7CA6C0D3A506312E147BC4CA08787D658714DB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Node_1_get_Value_m1F04AEA6F8FC69FFA4C0AF5E8BA7089835FEA3FE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_N_tA894F5A8E9C053478078AFCE14D0B795984C19B8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_DrawableGraph_2_t47C48E5EC9B41BFBD017139BD99F92DB18998F23 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Graph_2_t0CEC6260A42D369AFEA9D4AB832EB5D083868AC9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m769EC37FD10FA577FE3274A98B29D1A8BE197AC6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t86234CF31244E1DCE6ACB846741E90AD357110E7 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t86234CF31244E1DCE6ACB846741E90AD357110E7_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Node_1_get_Id_m51A1501FA800D6AA84B1466C4422F01219F8011A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Graph_2_get_Edges_mF015849C5B8FCFE304FEFB0FC7705B9E4853F555 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_tBB867EDF317F032E8B64E10980C221A2DC504325 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_m35B8C22FE0F7C3F89A0350307A2FA8823674218F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_mAB9DE835C171E6F771CC7C5C3CEE89E12FE8D3FE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Edge_2_tF1E62D9CA0C42DD7A9161EF6B29F20292C697169 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Edge_2_get_From_mD8B154C79CF6AF8787032F020600664E90E1A4EA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Edge_2_get_To_mAD1141A76E9DA3373A3F19AAFFC2B83E3F8442BC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m43B45208E5B832D53198F923E58B818A773C4CC5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_tF653933769FDD04661FC7B46EC9F76C7225AB804 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_tF653933769FDD04661FC7B46EC9F76C7225AB804_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_N_tA894F5A8E9C053478078AFCE14D0B795984C19B8_Coordinate_get_coord_m2C927B16458757D1CE47FBF7F248B9324BD85287 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_N_tA894F5A8E9C053478078AFCE14D0B795984C19B8_Coordinate_set_coord_mC9160571CC0358171717E593B8EC1B22E8394383 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Graph_2__ctor_mEBA8167018A7849F3CE2B1DA882394213179AD5B },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_AssemblyU2DCSharp_CodeGenModule;
const Il2CppCodeGenModule g_AssemblyU2DCSharp_CodeGenModule = 
{
	"Assembly-CSharp.dll",
	39,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	2,
	s_rgctxIndices,
	32,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
