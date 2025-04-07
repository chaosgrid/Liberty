#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419f1e _public_419f1e
#define public_419f29 _public_419f29

PROC_DECLARE(0x419f10, internal_419f10, public_419f10);
/* CHUNK of public_40af20 */
extern "C" NAKED register_t __cdecl internal_419f10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x810]
        push eax
        call public_418978
        pop ecx
        ret 
        public_419f1e : nop
        lea ecx, ss:[ebp-0x818]
        jmp public_418aa4
        public_419f29 : nop
        mov eax, offset public_41f064
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419f10)
        ASM_EXPORT_ENTRY_FIRST(0x419f1e, public_419f1e)
        ASM_EXPORT_ENTRY_LAST(0x419f29, public_419f29)
    }
}

#undef public_419f1e
#undef public_419f29

#pragma init_seg(compiler)
extern "C" void const* const public_419f1e = __AsmFindLabelExport(&internal_419f10, 0x419f1e);
extern "C" void const* const public_419f29 = __AsmFindLabelExport(&internal_419f10, 0x419f29);
