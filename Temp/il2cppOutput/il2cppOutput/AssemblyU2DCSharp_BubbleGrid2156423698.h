#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// Bubble[]
struct BubbleU5BU5D_t1547193125;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BubbleGrid
struct  BubbleGrid_t2156423698  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject BubbleGrid::bubbleA
	GameObject_t4012695102 * ___bubbleA_2;
	// UnityEngine.RectTransform BubbleGrid::bubblesVisibleArea
	RectTransform_t3317474837 * ___bubblesVisibleArea_3;
	// UnityEngine.GameObject BubbleGrid::grid
	GameObject_t4012695102 * ___grid_4;
	// System.Int32 BubbleGrid::maxInLine
	int32_t ___maxInLine_5;
	// System.Int32 BubbleGrid::rowsToRender
	int32_t ___rowsToRender_6;
	// UnityEngine.Rect BubbleGrid::gridRect
	Rect_t1525428817  ___gridRect_7;
	// UnityEngine.Rect BubbleGrid::visibleAreaRect
	Rect_t1525428817  ___visibleAreaRect_8;
	// UnityEngine.GameObject BubbleGrid::lastItem
	GameObject_t4012695102 * ___lastItem_9;
	// Bubble[] BubbleGrid::bubbles
	BubbleU5BU5D_t1547193125* ___bubbles_10;
	// UnityEngine.RectTransform BubbleGrid::gridRectTransform
	RectTransform_t3317474837 * ___gridRectTransform_11;
	// System.Single BubbleGrid::bubbleSize
	float ___bubbleSize_12;
	// System.Boolean BubbleGrid::isOdd
	bool ___isOdd_13;
	// UnityEngine.Vector2 BubbleGrid::startOfGrid
	Vector2_t3525329788  ___startOfGrid_14;
	// System.Int32 BubbleGrid::currentRow
	int32_t ___currentRow_15;
	// System.Int32 BubbleGrid::firstRow
	int32_t ___firstRow_16;
	// System.Int32 BubbleGrid::itemIndex
	int32_t ___itemIndex_17;
	// System.Single BubbleGrid::rowItemOffset
	float ___rowItemOffset_18;
	// UnityEngine.Vector3 BubbleGrid::gridNewPosition
	Vector3_t3525329789  ___gridNewPosition_19;
	// UnityEngine.Vector3 BubbleGrid::vel
	Vector3_t3525329789  ___vel_20;
	// System.Single BubbleGrid::scrollTime
	float ___scrollTime_21;
	// System.Boolean BubbleGrid::isInitialized
	bool ___isInitialized_22;
	// System.Single BubbleGrid::fadeOutTime
	float ___fadeOutTime_23;

public:
	inline static int32_t get_offset_of_bubbleA_2() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___bubbleA_2)); }
	inline GameObject_t4012695102 * get_bubbleA_2() const { return ___bubbleA_2; }
	inline GameObject_t4012695102 ** get_address_of_bubbleA_2() { return &___bubbleA_2; }
	inline void set_bubbleA_2(GameObject_t4012695102 * value)
	{
		___bubbleA_2 = value;
		Il2CppCodeGenWriteBarrier(&___bubbleA_2, value);
	}

	inline static int32_t get_offset_of_bubblesVisibleArea_3() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___bubblesVisibleArea_3)); }
	inline RectTransform_t3317474837 * get_bubblesVisibleArea_3() const { return ___bubblesVisibleArea_3; }
	inline RectTransform_t3317474837 ** get_address_of_bubblesVisibleArea_3() { return &___bubblesVisibleArea_3; }
	inline void set_bubblesVisibleArea_3(RectTransform_t3317474837 * value)
	{
		___bubblesVisibleArea_3 = value;
		Il2CppCodeGenWriteBarrier(&___bubblesVisibleArea_3, value);
	}

	inline static int32_t get_offset_of_grid_4() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___grid_4)); }
	inline GameObject_t4012695102 * get_grid_4() const { return ___grid_4; }
	inline GameObject_t4012695102 ** get_address_of_grid_4() { return &___grid_4; }
	inline void set_grid_4(GameObject_t4012695102 * value)
	{
		___grid_4 = value;
		Il2CppCodeGenWriteBarrier(&___grid_4, value);
	}

	inline static int32_t get_offset_of_maxInLine_5() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___maxInLine_5)); }
	inline int32_t get_maxInLine_5() const { return ___maxInLine_5; }
	inline int32_t* get_address_of_maxInLine_5() { return &___maxInLine_5; }
	inline void set_maxInLine_5(int32_t value)
	{
		___maxInLine_5 = value;
	}

	inline static int32_t get_offset_of_rowsToRender_6() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___rowsToRender_6)); }
	inline int32_t get_rowsToRender_6() const { return ___rowsToRender_6; }
	inline int32_t* get_address_of_rowsToRender_6() { return &___rowsToRender_6; }
	inline void set_rowsToRender_6(int32_t value)
	{
		___rowsToRender_6 = value;
	}

	inline static int32_t get_offset_of_gridRect_7() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___gridRect_7)); }
	inline Rect_t1525428817  get_gridRect_7() const { return ___gridRect_7; }
	inline Rect_t1525428817 * get_address_of_gridRect_7() { return &___gridRect_7; }
	inline void set_gridRect_7(Rect_t1525428817  value)
	{
		___gridRect_7 = value;
	}

	inline static int32_t get_offset_of_visibleAreaRect_8() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___visibleAreaRect_8)); }
	inline Rect_t1525428817  get_visibleAreaRect_8() const { return ___visibleAreaRect_8; }
	inline Rect_t1525428817 * get_address_of_visibleAreaRect_8() { return &___visibleAreaRect_8; }
	inline void set_visibleAreaRect_8(Rect_t1525428817  value)
	{
		___visibleAreaRect_8 = value;
	}

	inline static int32_t get_offset_of_lastItem_9() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___lastItem_9)); }
	inline GameObject_t4012695102 * get_lastItem_9() const { return ___lastItem_9; }
	inline GameObject_t4012695102 ** get_address_of_lastItem_9() { return &___lastItem_9; }
	inline void set_lastItem_9(GameObject_t4012695102 * value)
	{
		___lastItem_9 = value;
		Il2CppCodeGenWriteBarrier(&___lastItem_9, value);
	}

	inline static int32_t get_offset_of_bubbles_10() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___bubbles_10)); }
	inline BubbleU5BU5D_t1547193125* get_bubbles_10() const { return ___bubbles_10; }
	inline BubbleU5BU5D_t1547193125** get_address_of_bubbles_10() { return &___bubbles_10; }
	inline void set_bubbles_10(BubbleU5BU5D_t1547193125* value)
	{
		___bubbles_10 = value;
		Il2CppCodeGenWriteBarrier(&___bubbles_10, value);
	}

	inline static int32_t get_offset_of_gridRectTransform_11() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___gridRectTransform_11)); }
	inline RectTransform_t3317474837 * get_gridRectTransform_11() const { return ___gridRectTransform_11; }
	inline RectTransform_t3317474837 ** get_address_of_gridRectTransform_11() { return &___gridRectTransform_11; }
	inline void set_gridRectTransform_11(RectTransform_t3317474837 * value)
	{
		___gridRectTransform_11 = value;
		Il2CppCodeGenWriteBarrier(&___gridRectTransform_11, value);
	}

	inline static int32_t get_offset_of_bubbleSize_12() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___bubbleSize_12)); }
	inline float get_bubbleSize_12() const { return ___bubbleSize_12; }
	inline float* get_address_of_bubbleSize_12() { return &___bubbleSize_12; }
	inline void set_bubbleSize_12(float value)
	{
		___bubbleSize_12 = value;
	}

	inline static int32_t get_offset_of_isOdd_13() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___isOdd_13)); }
	inline bool get_isOdd_13() const { return ___isOdd_13; }
	inline bool* get_address_of_isOdd_13() { return &___isOdd_13; }
	inline void set_isOdd_13(bool value)
	{
		___isOdd_13 = value;
	}

	inline static int32_t get_offset_of_startOfGrid_14() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___startOfGrid_14)); }
	inline Vector2_t3525329788  get_startOfGrid_14() const { return ___startOfGrid_14; }
	inline Vector2_t3525329788 * get_address_of_startOfGrid_14() { return &___startOfGrid_14; }
	inline void set_startOfGrid_14(Vector2_t3525329788  value)
	{
		___startOfGrid_14 = value;
	}

	inline static int32_t get_offset_of_currentRow_15() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___currentRow_15)); }
	inline int32_t get_currentRow_15() const { return ___currentRow_15; }
	inline int32_t* get_address_of_currentRow_15() { return &___currentRow_15; }
	inline void set_currentRow_15(int32_t value)
	{
		___currentRow_15 = value;
	}

	inline static int32_t get_offset_of_firstRow_16() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___firstRow_16)); }
	inline int32_t get_firstRow_16() const { return ___firstRow_16; }
	inline int32_t* get_address_of_firstRow_16() { return &___firstRow_16; }
	inline void set_firstRow_16(int32_t value)
	{
		___firstRow_16 = value;
	}

	inline static int32_t get_offset_of_itemIndex_17() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___itemIndex_17)); }
	inline int32_t get_itemIndex_17() const { return ___itemIndex_17; }
	inline int32_t* get_address_of_itemIndex_17() { return &___itemIndex_17; }
	inline void set_itemIndex_17(int32_t value)
	{
		___itemIndex_17 = value;
	}

	inline static int32_t get_offset_of_rowItemOffset_18() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___rowItemOffset_18)); }
	inline float get_rowItemOffset_18() const { return ___rowItemOffset_18; }
	inline float* get_address_of_rowItemOffset_18() { return &___rowItemOffset_18; }
	inline void set_rowItemOffset_18(float value)
	{
		___rowItemOffset_18 = value;
	}

	inline static int32_t get_offset_of_gridNewPosition_19() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___gridNewPosition_19)); }
	inline Vector3_t3525329789  get_gridNewPosition_19() const { return ___gridNewPosition_19; }
	inline Vector3_t3525329789 * get_address_of_gridNewPosition_19() { return &___gridNewPosition_19; }
	inline void set_gridNewPosition_19(Vector3_t3525329789  value)
	{
		___gridNewPosition_19 = value;
	}

	inline static int32_t get_offset_of_vel_20() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___vel_20)); }
	inline Vector3_t3525329789  get_vel_20() const { return ___vel_20; }
	inline Vector3_t3525329789 * get_address_of_vel_20() { return &___vel_20; }
	inline void set_vel_20(Vector3_t3525329789  value)
	{
		___vel_20 = value;
	}

	inline static int32_t get_offset_of_scrollTime_21() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___scrollTime_21)); }
	inline float get_scrollTime_21() const { return ___scrollTime_21; }
	inline float* get_address_of_scrollTime_21() { return &___scrollTime_21; }
	inline void set_scrollTime_21(float value)
	{
		___scrollTime_21 = value;
	}

	inline static int32_t get_offset_of_isInitialized_22() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___isInitialized_22)); }
	inline bool get_isInitialized_22() const { return ___isInitialized_22; }
	inline bool* get_address_of_isInitialized_22() { return &___isInitialized_22; }
	inline void set_isInitialized_22(bool value)
	{
		___isInitialized_22 = value;
	}

	inline static int32_t get_offset_of_fadeOutTime_23() { return static_cast<int32_t>(offsetof(BubbleGrid_t2156423698, ___fadeOutTime_23)); }
	inline float get_fadeOutTime_23() const { return ___fadeOutTime_23; }
	inline float* get_address_of_fadeOutTime_23() { return &___fadeOutTime_23; }
	inline void set_fadeOutTime_23(float value)
	{
		___fadeOutTime_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
