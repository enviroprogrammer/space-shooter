#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String
struct String_t;
// Readme/Section[]
struct SectionU5BU5D_t1354457079;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme
struct  Readme_t795099402  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_t3542995729 * ___icon_2;
	// System.String Readme::title
	String_t* ___title_3;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t1354457079* ___sections_4;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_5;

public:
	inline static int32_t get_offset_of_icon_2() { return static_cast<int32_t>(offsetof(Readme_t795099402, ___icon_2)); }
	inline Texture2D_t3542995729 * get_icon_2() const { return ___icon_2; }
	inline Texture2D_t3542995729 ** get_address_of_icon_2() { return &___icon_2; }
	inline void set_icon_2(Texture2D_t3542995729 * value)
	{
		___icon_2 = value;
		Il2CppCodeGenWriteBarrier(&___icon_2, value);
	}

	inline static int32_t get_offset_of_title_3() { return static_cast<int32_t>(offsetof(Readme_t795099402, ___title_3)); }
	inline String_t* get_title_3() const { return ___title_3; }
	inline String_t** get_address_of_title_3() { return &___title_3; }
	inline void set_title_3(String_t* value)
	{
		___title_3 = value;
		Il2CppCodeGenWriteBarrier(&___title_3, value);
	}

	inline static int32_t get_offset_of_sections_4() { return static_cast<int32_t>(offsetof(Readme_t795099402, ___sections_4)); }
	inline SectionU5BU5D_t1354457079* get_sections_4() const { return ___sections_4; }
	inline SectionU5BU5D_t1354457079** get_address_of_sections_4() { return &___sections_4; }
	inline void set_sections_4(SectionU5BU5D_t1354457079* value)
	{
		___sections_4 = value;
		Il2CppCodeGenWriteBarrier(&___sections_4, value);
	}

	inline static int32_t get_offset_of_loadedLayout_5() { return static_cast<int32_t>(offsetof(Readme_t795099402, ___loadedLayout_5)); }
	inline bool get_loadedLayout_5() const { return ___loadedLayout_5; }
	inline bool* get_address_of_loadedLayout_5() { return &___loadedLayout_5; }
	inline void set_loadedLayout_5(bool value)
	{
		___loadedLayout_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
