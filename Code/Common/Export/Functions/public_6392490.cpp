#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6264890);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392498 _public_6392498
#define public_63924a3 _public_63924a3

PROC_DECLARE(0x6392490, internal_6392490, public_6392490);
/* CHUNK of public_62645e0 */
extern "C" NAKED register_t __cdecl internal_6392490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62a68e0
        public_6392498 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_6264890
        public_63924a3 : nop
        mov eax, offset public_63aafdc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392490)
        ASM_EXPORT_ENTRY_FIRST(0x6392498, public_6392498)
        ASM_EXPORT_ENTRY_LAST(0x63924a3, public_63924a3)
    }
}

#undef public_6392498
#undef public_63924a3

#pragma init_seg(compiler)
extern "C" void const* const public_6392498 = __AsmFindLabelExport(&internal_6392490, 0x6392498);
extern "C" void const* const public_63924a3 = __AsmFindLabelExport(&internal_6392490, 0x63924a3);
