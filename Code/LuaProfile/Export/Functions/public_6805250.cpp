#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_6805250);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

#define public_6805265 _public_6805265
#define public_680526d _public_680526d
#define public_6805278 _public_6805278
#define public_6805279 _public_6805279
#define public_680527e _public_680527e

PROC_DECLARE(0x6805250, internal_6805250, public_6805250);
extern "C" NAKED register_t __cdecl internal_6805250()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        add ecx, 7
        cmp ecx, 7
        ja public_680527e
/*FIXUP jmp dword ptr ds : [ecx*4+public_6805290] @0x680525e*/
  JMPTB cmp ecx, 0
  JMPTB je public_6805279
  JMPTB cmp ecx, 1
  JMPTB je public_680527e
  JMPTB cmp ecx, 2
  JMPTB je public_6805279
  JMPTB cmp ecx, 3
  JMPTB je public_6805279
  JMPTB cmp ecx, 4
  JMPTB je public_6805279
  JMPTB cmp ecx, 5
  JMPTB je public_6805279
  JMPTB cmp ecx, 6
  JMPTB je public_6805265
  JMPTB cmp ecx, 7
  JMPTB je public_6805279
  JMPTB int 3
        public_6805265 : nop
        fld qword ptr ds : [eax+8]
        call public_680bdaa
        public_680526d : nop
        test eax, eax
        jge public_6805278
        or ecx, 0xFFFFFFFF
        sub ecx, eax
        mov eax, ecx
        public_6805278 : nop
        ret 
        public_6805279 : nop
        mov eax, dword ptr ds : [eax+8]
        jmp public_680526d
/*FIXUP public_680527e : nop
        push offset public_680d7dc @0x680527e*/
  FIXUP public_680527e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d7dc
        call public_6802e00
        UNREACHABLE_TRAP(0x6805250)
        ASM_EXPORT_ENTRY_FIRST(0x6805265, public_6805265)
        ASM_EXPORT_ENTRY(0x6805279, public_6805279)
        ASM_EXPORT_ENTRY_LAST(0x680527e, public_680527e)
    }
}

#undef public_6805265
#undef public_680526d
#undef public_6805278
#undef public_6805279
#undef public_680527e

#pragma init_seg(compiler)
extern "C" void const* const public_6805265 = __AsmFindLabelExport(&internal_6805250, 0x6805265);
extern "C" void const* const public_6805279 = __AsmFindLabelExport(&internal_6805250, 0x6805279);
extern "C" void const* const public_680527e = __AsmFindLabelExport(&internal_6805250, 0x680527e);
