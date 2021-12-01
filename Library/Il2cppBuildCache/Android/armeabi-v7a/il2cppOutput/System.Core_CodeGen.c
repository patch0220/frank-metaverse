#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000011 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000014 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000016 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000017 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000018 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000019 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001A System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001C System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000020 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000021 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000022 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000024 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000025 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000026 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000027 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000043 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000044 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000045 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000046 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000047 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000048 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000049 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000004A System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004C System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000004D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000004E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000004F System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000050 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000051 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000052 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000053 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000054 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000055 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000056 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000057 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000058 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000059 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000005A System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000005B System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000005C System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000005D System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000005E TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000005F System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000060 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000061 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000062 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000064 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000065 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000066 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000067 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000068 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000069 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000006A System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006D System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000006E System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000070 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000071 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000072 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000073 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000074 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000075 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000076 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000077 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000078 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000079 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000007A System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[123] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
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
};
static const int32_t s_InvokerIndices[123] = 
{
	4087,
	4258,
	4258,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[44] = 
{
	{ 0x02000004, { 70, 4 } },
	{ 0x02000005, { 74, 9 } },
	{ 0x02000006, { 85, 7 } },
	{ 0x02000007, { 94, 10 } },
	{ 0x02000008, { 106, 11 } },
	{ 0x02000009, { 120, 9 } },
	{ 0x0200000A, { 132, 12 } },
	{ 0x0200000B, { 147, 1 } },
	{ 0x0200000C, { 148, 2 } },
	{ 0x0200000D, { 150, 2 } },
	{ 0x0200000F, { 152, 3 } },
	{ 0x02000010, { 157, 5 } },
	{ 0x02000011, { 162, 7 } },
	{ 0x02000012, { 169, 3 } },
	{ 0x02000013, { 172, 7 } },
	{ 0x02000014, { 179, 4 } },
	{ 0x02000015, { 183, 21 } },
	{ 0x02000017, { 204, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 2 } },
	{ 0x06000009, { 32, 1 } },
	{ 0x0600000A, { 33, 3 } },
	{ 0x0600000B, { 36, 2 } },
	{ 0x0600000C, { 38, 4 } },
	{ 0x0600000D, { 42, 4 } },
	{ 0x0600000E, { 46, 4 } },
	{ 0x0600000F, { 50, 3 } },
	{ 0x06000010, { 53, 1 } },
	{ 0x06000011, { 54, 1 } },
	{ 0x06000012, { 55, 3 } },
	{ 0x06000013, { 58, 3 } },
	{ 0x06000014, { 61, 2 } },
	{ 0x06000015, { 63, 2 } },
	{ 0x06000016, { 65, 5 } },
	{ 0x06000026, { 83, 2 } },
	{ 0x0600002B, { 92, 2 } },
	{ 0x06000030, { 104, 2 } },
	{ 0x06000036, { 117, 3 } },
	{ 0x0600003B, { 129, 3 } },
	{ 0x06000040, { 144, 3 } },
	{ 0x0600004B, { 155, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[206] = 
{
	{ (Il2CppRGCTXDataType)2, 2239 },
	{ (Il2CppRGCTXDataType)3, 8403 },
	{ (Il2CppRGCTXDataType)2, 3571 },
	{ (Il2CppRGCTXDataType)2, 3063 },
	{ (Il2CppRGCTXDataType)3, 14421 },
	{ (Il2CppRGCTXDataType)2, 2334 },
	{ (Il2CppRGCTXDataType)2, 3070 },
	{ (Il2CppRGCTXDataType)3, 14456 },
	{ (Il2CppRGCTXDataType)2, 3065 },
	{ (Il2CppRGCTXDataType)3, 14433 },
	{ (Il2CppRGCTXDataType)2, 2240 },
	{ (Il2CppRGCTXDataType)3, 8404 },
	{ (Il2CppRGCTXDataType)2, 3603 },
	{ (Il2CppRGCTXDataType)2, 3075 },
	{ (Il2CppRGCTXDataType)3, 14471 },
	{ (Il2CppRGCTXDataType)2, 2363 },
	{ (Il2CppRGCTXDataType)2, 3083 },
	{ (Il2CppRGCTXDataType)3, 14657 },
	{ (Il2CppRGCTXDataType)2, 3079 },
	{ (Il2CppRGCTXDataType)3, 14556 },
	{ (Il2CppRGCTXDataType)2, 798 },
	{ (Il2CppRGCTXDataType)3, 36 },
	{ (Il2CppRGCTXDataType)3, 37 },
	{ (Il2CppRGCTXDataType)2, 1379 },
	{ (Il2CppRGCTXDataType)3, 5727 },
	{ (Il2CppRGCTXDataType)2, 800 },
	{ (Il2CppRGCTXDataType)3, 48 },
	{ (Il2CppRGCTXDataType)3, 49 },
	{ (Il2CppRGCTXDataType)2, 1391 },
	{ (Il2CppRGCTXDataType)3, 5732 },
	{ (Il2CppRGCTXDataType)2, 2771 },
	{ (Il2CppRGCTXDataType)3, 12862 },
	{ (Il2CppRGCTXDataType)3, 6348 },
	{ (Il2CppRGCTXDataType)2, 950 },
	{ (Il2CppRGCTXDataType)3, 929 },
	{ (Il2CppRGCTXDataType)3, 930 },
	{ (Il2CppRGCTXDataType)2, 2335 },
	{ (Il2CppRGCTXDataType)3, 9030 },
	{ (Il2CppRGCTXDataType)2, 2000 },
	{ (Il2CppRGCTXDataType)2, 1563 },
	{ (Il2CppRGCTXDataType)2, 1674 },
	{ (Il2CppRGCTXDataType)2, 1780 },
	{ (Il2CppRGCTXDataType)2, 2001 },
	{ (Il2CppRGCTXDataType)2, 1564 },
	{ (Il2CppRGCTXDataType)2, 1675 },
	{ (Il2CppRGCTXDataType)2, 1781 },
	{ (Il2CppRGCTXDataType)2, 2002 },
	{ (Il2CppRGCTXDataType)2, 1565 },
	{ (Il2CppRGCTXDataType)2, 1676 },
	{ (Il2CppRGCTXDataType)2, 1782 },
	{ (Il2CppRGCTXDataType)2, 1677 },
	{ (Il2CppRGCTXDataType)2, 1783 },
	{ (Il2CppRGCTXDataType)3, 5728 },
	{ (Il2CppRGCTXDataType)2, 1204 },
	{ (Il2CppRGCTXDataType)2, 1666 },
	{ (Il2CppRGCTXDataType)2, 1667 },
	{ (Il2CppRGCTXDataType)2, 1778 },
	{ (Il2CppRGCTXDataType)3, 5726 },
	{ (Il2CppRGCTXDataType)2, 1665 },
	{ (Il2CppRGCTXDataType)2, 1777 },
	{ (Il2CppRGCTXDataType)3, 5725 },
	{ (Il2CppRGCTXDataType)2, 1562 },
	{ (Il2CppRGCTXDataType)2, 1673 },
	{ (Il2CppRGCTXDataType)2, 1561 },
	{ (Il2CppRGCTXDataType)3, 17541 },
	{ (Il2CppRGCTXDataType)3, 5113 },
	{ (Il2CppRGCTXDataType)2, 1281 },
	{ (Il2CppRGCTXDataType)2, 1669 },
	{ (Il2CppRGCTXDataType)2, 1779 },
	{ (Il2CppRGCTXDataType)2, 1872 },
	{ (Il2CppRGCTXDataType)3, 8405 },
	{ (Il2CppRGCTXDataType)3, 8407 },
	{ (Il2CppRGCTXDataType)2, 597 },
	{ (Il2CppRGCTXDataType)3, 8406 },
	{ (Il2CppRGCTXDataType)3, 8415 },
	{ (Il2CppRGCTXDataType)2, 2243 },
	{ (Il2CppRGCTXDataType)2, 3066 },
	{ (Il2CppRGCTXDataType)3, 14434 },
	{ (Il2CppRGCTXDataType)3, 8416 },
	{ (Il2CppRGCTXDataType)2, 1719 },
	{ (Il2CppRGCTXDataType)2, 1810 },
	{ (Il2CppRGCTXDataType)3, 5739 },
	{ (Il2CppRGCTXDataType)3, 17501 },
	{ (Il2CppRGCTXDataType)2, 3080 },
	{ (Il2CppRGCTXDataType)3, 14557 },
	{ (Il2CppRGCTXDataType)3, 8408 },
	{ (Il2CppRGCTXDataType)2, 2242 },
	{ (Il2CppRGCTXDataType)2, 3064 },
	{ (Il2CppRGCTXDataType)3, 14422 },
	{ (Il2CppRGCTXDataType)3, 5738 },
	{ (Il2CppRGCTXDataType)3, 8409 },
	{ (Il2CppRGCTXDataType)3, 17500 },
	{ (Il2CppRGCTXDataType)2, 3076 },
	{ (Il2CppRGCTXDataType)3, 14472 },
	{ (Il2CppRGCTXDataType)3, 8422 },
	{ (Il2CppRGCTXDataType)2, 2244 },
	{ (Il2CppRGCTXDataType)2, 3071 },
	{ (Il2CppRGCTXDataType)3, 14457 },
	{ (Il2CppRGCTXDataType)3, 9096 },
	{ (Il2CppRGCTXDataType)3, 3980 },
	{ (Il2CppRGCTXDataType)3, 5740 },
	{ (Il2CppRGCTXDataType)3, 3979 },
	{ (Il2CppRGCTXDataType)3, 8423 },
	{ (Il2CppRGCTXDataType)3, 17502 },
	{ (Il2CppRGCTXDataType)2, 3084 },
	{ (Il2CppRGCTXDataType)3, 14658 },
	{ (Il2CppRGCTXDataType)3, 8436 },
	{ (Il2CppRGCTXDataType)2, 2246 },
	{ (Il2CppRGCTXDataType)2, 3082 },
	{ (Il2CppRGCTXDataType)3, 14559 },
	{ (Il2CppRGCTXDataType)3, 8437 },
	{ (Il2CppRGCTXDataType)2, 1722 },
	{ (Il2CppRGCTXDataType)2, 1813 },
	{ (Il2CppRGCTXDataType)3, 5744 },
	{ (Il2CppRGCTXDataType)3, 5743 },
	{ (Il2CppRGCTXDataType)2, 3068 },
	{ (Il2CppRGCTXDataType)3, 14436 },
	{ (Il2CppRGCTXDataType)3, 17507 },
	{ (Il2CppRGCTXDataType)2, 3081 },
	{ (Il2CppRGCTXDataType)3, 14558 },
	{ (Il2CppRGCTXDataType)3, 8429 },
	{ (Il2CppRGCTXDataType)2, 2245 },
	{ (Il2CppRGCTXDataType)2, 3078 },
	{ (Il2CppRGCTXDataType)3, 14474 },
	{ (Il2CppRGCTXDataType)3, 5742 },
	{ (Il2CppRGCTXDataType)3, 5741 },
	{ (Il2CppRGCTXDataType)3, 8430 },
	{ (Il2CppRGCTXDataType)2, 3067 },
	{ (Il2CppRGCTXDataType)3, 14435 },
	{ (Il2CppRGCTXDataType)3, 17506 },
	{ (Il2CppRGCTXDataType)2, 3077 },
	{ (Il2CppRGCTXDataType)3, 14473 },
	{ (Il2CppRGCTXDataType)3, 8443 },
	{ (Il2CppRGCTXDataType)2, 2247 },
	{ (Il2CppRGCTXDataType)2, 3086 },
	{ (Il2CppRGCTXDataType)3, 14660 },
	{ (Il2CppRGCTXDataType)3, 9097 },
	{ (Il2CppRGCTXDataType)3, 3982 },
	{ (Il2CppRGCTXDataType)3, 5746 },
	{ (Il2CppRGCTXDataType)3, 5745 },
	{ (Il2CppRGCTXDataType)3, 3981 },
	{ (Il2CppRGCTXDataType)3, 8444 },
	{ (Il2CppRGCTXDataType)2, 3069 },
	{ (Il2CppRGCTXDataType)3, 14437 },
	{ (Il2CppRGCTXDataType)3, 17508 },
	{ (Il2CppRGCTXDataType)2, 3085 },
	{ (Il2CppRGCTXDataType)3, 14659 },
	{ (Il2CppRGCTXDataType)3, 5736 },
	{ (Il2CppRGCTXDataType)3, 5737 },
	{ (Il2CppRGCTXDataType)3, 5750 },
	{ (Il2CppRGCTXDataType)2, 3611 },
	{ (Il2CppRGCTXDataType)2, 1205 },
	{ (Il2CppRGCTXDataType)2, 803 },
	{ (Il2CppRGCTXDataType)3, 112 },
	{ (Il2CppRGCTXDataType)3, 12849 },
	{ (Il2CppRGCTXDataType)2, 2772 },
	{ (Il2CppRGCTXDataType)3, 12863 },
	{ (Il2CppRGCTXDataType)2, 951 },
	{ (Il2CppRGCTXDataType)3, 931 },
	{ (Il2CppRGCTXDataType)3, 12855 },
	{ (Il2CppRGCTXDataType)3, 3936 },
	{ (Il2CppRGCTXDataType)2, 625 },
	{ (Il2CppRGCTXDataType)3, 12850 },
	{ (Il2CppRGCTXDataType)2, 2768 },
	{ (Il2CppRGCTXDataType)3, 1065 },
	{ (Il2CppRGCTXDataType)2, 991 },
	{ (Il2CppRGCTXDataType)2, 1237 },
	{ (Il2CppRGCTXDataType)3, 3942 },
	{ (Il2CppRGCTXDataType)3, 12851 },
	{ (Il2CppRGCTXDataType)3, 3931 },
	{ (Il2CppRGCTXDataType)3, 3932 },
	{ (Il2CppRGCTXDataType)3, 3930 },
	{ (Il2CppRGCTXDataType)3, 3933 },
	{ (Il2CppRGCTXDataType)2, 1233 },
	{ (Il2CppRGCTXDataType)2, 3661 },
	{ (Il2CppRGCTXDataType)3, 5734 },
	{ (Il2CppRGCTXDataType)3, 3935 },
	{ (Il2CppRGCTXDataType)2, 1644 },
	{ (Il2CppRGCTXDataType)3, 3934 },
	{ (Il2CppRGCTXDataType)2, 1568 },
	{ (Il2CppRGCTXDataType)2, 3606 },
	{ (Il2CppRGCTXDataType)2, 1693 },
	{ (Il2CppRGCTXDataType)2, 1788 },
	{ (Il2CppRGCTXDataType)3, 5131 },
	{ (Il2CppRGCTXDataType)2, 1290 },
	{ (Il2CppRGCTXDataType)3, 6164 },
	{ (Il2CppRGCTXDataType)3, 6165 },
	{ (Il2CppRGCTXDataType)3, 6170 },
	{ (Il2CppRGCTXDataType)2, 1880 },
	{ (Il2CppRGCTXDataType)3, 6167 },
	{ (Il2CppRGCTXDataType)3, 18223 },
	{ (Il2CppRGCTXDataType)2, 1247 },
	{ (Il2CppRGCTXDataType)3, 3970 },
	{ (Il2CppRGCTXDataType)1, 1639 },
	{ (Il2CppRGCTXDataType)2, 3619 },
	{ (Il2CppRGCTXDataType)3, 6166 },
	{ (Il2CppRGCTXDataType)1, 3619 },
	{ (Il2CppRGCTXDataType)1, 1880 },
	{ (Il2CppRGCTXDataType)2, 3679 },
	{ (Il2CppRGCTXDataType)2, 3619 },
	{ (Il2CppRGCTXDataType)3, 6171 },
	{ (Il2CppRGCTXDataType)3, 6169 },
	{ (Il2CppRGCTXDataType)3, 6168 },
	{ (Il2CppRGCTXDataType)2, 470 },
	{ (Il2CppRGCTXDataType)3, 3983 },
	{ (Il2CppRGCTXDataType)2, 606 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	123,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	44,
	s_rgctxIndices,
	206,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
