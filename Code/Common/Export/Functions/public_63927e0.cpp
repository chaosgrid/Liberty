#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6264890);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63927e8 _public_63927e8
#define public_63927f3 _public_63927f3

PROC_DECLARE(0x63927e0, internal_63927e0, public_63927e0);
/* CHUNK of public_6270250 */
extern "C" NAKED register_t __cdecl internal_63927e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62a68e0
        public_63927e8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_6264890
        public_63927f3 : nop
        mov eax, offset public_63ab5a8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63927e0)
        ASM_EXPORT_ENTRY_FIRST(0x63927e8, public_63927e8)
        ASM_EXPORT_ENTRY_LAST(0x63927f3, public_63927f3)
    }
}

#undef public_63927e8
#undef public_63927f3

#pragma init_seg(compiler)
extern "C" void const* const public_63927e8 = __AsmFindLabelExport(&internal_63927e0, 0x63927e8);
extern "C" void const* const public_63927f3 = __AsmFindLabelExport(&internal_63927e0, 0x63927f3);
