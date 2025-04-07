#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62101 _public_6d62101

PROC_DECLARE(0x6d620f0, internal_6d620f0, public_6d620f0);
/* CHUNK of public_6d1b4a0 */
extern "C" NAKED register_t __cdecl internal_6d620f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d62101 : nop
        mov eax, offset public_6d72eb4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d620f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d62101, public_6d62101)
    }
}

#undef public_6d62101

#pragma init_seg(compiler)
extern "C" void const* const public_6d62101 = __AsmFindLabelExport(&internal_6d620f0, 0x6d62101);
