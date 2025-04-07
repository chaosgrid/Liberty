#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63977fb _public_63977fb
#define public_6397809 _public_6397809

PROC_DECLARE(0x63977f0, internal_63977f0, public_63977f0);
/* CHUNK of public_633aee0 */
extern "C" NAKED register_t __cdecl internal_63977f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x54
        jmp public_6269110
        public_63977fb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp public_62a68e0
        public_6397809 : nop
        mov eax, offset public_63b19c8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63977f0)
        ASM_EXPORT_ENTRY_FIRST(0x63977fb, public_63977fb)
        ASM_EXPORT_ENTRY_LAST(0x6397809, public_6397809)
    }
}

#undef public_63977fb
#undef public_6397809

#pragma init_seg(compiler)
extern "C" void const* const public_63977fb = __AsmFindLabelExport(&internal_63977f0, 0x63977fb);
extern "C" void const* const public_6397809 = __AsmFindLabelExport(&internal_63977f0, 0x6397809);
