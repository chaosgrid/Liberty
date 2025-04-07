#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403af0);
CLANG_FORWARD_PROC_SYMBOL(public_403bd0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419be8 _public_419be8
#define public_419bf2 _public_419bf2

PROC_DECLARE(0x419be0, internal_419be0, public_419be0);
/* CHUNK of public_4039a0 */
extern "C" NAKED register_t __cdecl internal_419be0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_403bd0
        public_419be8 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        push eax
        call public_403af0
        ret 
        public_419bf2 : nop
        mov eax, offset public_41ec60
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419be0)
        ASM_EXPORT_ENTRY_FIRST(0x419be8, public_419be8)
        ASM_EXPORT_ENTRY_LAST(0x419bf2, public_419bf2)
    }
}

#undef public_419be8
#undef public_419bf2

#pragma init_seg(compiler)
extern "C" void const* const public_419be8 = __AsmFindLabelExport(&internal_419be0, 0x419be8);
extern "C" void const* const public_419bf2 = __AsmFindLabelExport(&internal_419be0, 0x419bf2);
