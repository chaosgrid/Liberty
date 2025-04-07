#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f4e4c5 _public_6f4e4c5
#define public_6f4e4cd _public_6f4e4cd
#define public_6f4e4d8 _public_6f4e4d8
#define public_6f4e4d9 _public_6f4e4d9
#define public_6f4e4de _public_6f4e4de

PROC_DECLARE(0x6f4e4b0, internal_6f4e4b0, public_6f4e4b0);
extern "C" NAKED register_t __cdecl internal_6f4e4b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        add ecx, 7
        cmp ecx, 7
        ja public_6f4e4de
/*FIXUP jmp dword ptr ds : [ecx*4+public_6f4e4f0] @0x6f4e4be*/
  JMPTB cmp ecx, 0
  JMPTB je public_6f4e4d9
  JMPTB cmp ecx, 1
  JMPTB je public_6f4e4de
  JMPTB cmp ecx, 2
  JMPTB je public_6f4e4d9
  JMPTB cmp ecx, 3
  JMPTB je public_6f4e4d9
  JMPTB cmp ecx, 4
  JMPTB je public_6f4e4d9
  JMPTB cmp ecx, 5
  JMPTB je public_6f4e4d9
  JMPTB cmp ecx, 6
  JMPTB je public_6f4e4c5
  JMPTB cmp ecx, 7
  JMPTB je public_6f4e4d9
  JMPTB int 3
        public_6f4e4c5 : nop
        fld qword ptr ds : [eax+8]
        call public_6f57f16
        public_6f4e4cd : nop
        test eax, eax
        jge public_6f4e4d8
        or ecx, 0xFFFFFFFF
        sub ecx, eax
        mov eax, ecx
        public_6f4e4d8 : nop
        ret 
        public_6f4e4d9 : nop
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f4e4cd
/*FIXUP public_6f4e4de : nop
        push offset public_6f60860 @0x6f4e4de*/
  FIXUP public_6f4e4de : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60860
        call public_6f4c7f0
        add esp, 4
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4e4b0)
        ASM_EXPORT_ENTRY_FIRST(0x6f4e4c5, public_6f4e4c5)
        ASM_EXPORT_ENTRY(0x6f4e4d9, public_6f4e4d9)
        ASM_EXPORT_ENTRY_LAST(0x6f4e4de, public_6f4e4de)
    }
}

#undef public_6f4e4c5
#undef public_6f4e4cd
#undef public_6f4e4d8
#undef public_6f4e4d9
#undef public_6f4e4de

#pragma init_seg(compiler)
extern "C" void const* const public_6f4e4c5 = __AsmFindLabelExport(&internal_6f4e4b0, 0x6f4e4c5);
extern "C" void const* const public_6f4e4d9 = __AsmFindLabelExport(&internal_6f4e4b0, 0x6f4e4d9);
extern "C" void const* const public_6f4e4de = __AsmFindLabelExport(&internal_6f4e4b0, 0x6f4e4de);
