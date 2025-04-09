#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_53d470);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0ce8 _public_5c0ce8
#define public_5c0cf6 _public_5c0cf6

PROC_DECLARE(0x5c0ce0, internal_5c0ce0, public_5c0ce0);
/* CHUNK of public_53f1e0 */
extern "C" NAKED register_t __cdecl internal_5c0ce0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_53d470
        public_5c0ce8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xB4
        jmp public_502d90
        public_5c0cf6 : nop
        mov eax, offset public_5faf34
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0ce0)
        ASM_EXPORT_ENTRY_FIRST(0x5c0ce8, public_5c0ce8)
        ASM_EXPORT_ENTRY_LAST(0x5c0cf6, public_5c0cf6)
    }
}

#undef public_5c0ce8
#undef public_5c0cf6

#pragma init_seg(compiler)
extern "C" void const* const public_5c0ce8 = __AsmFindLabelExport(&internal_5c0ce0, 0x5c0ce8);
extern "C" void const* const public_5c0cf6 = __AsmFindLabelExport(&internal_5c0ce0, 0x5c0cf6);
