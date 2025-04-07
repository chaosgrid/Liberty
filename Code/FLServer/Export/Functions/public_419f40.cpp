#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401730);
CLANG_FORWARD_PROC_SYMBOL(public_418d0e);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419f48 _public_419f48
#define public_419f56 _public_419f56

PROC_DECLARE(0x419f40, internal_419f40, public_419f40);
/* CHUNK of public_40b270 */
extern "C" NAKED register_t __cdecl internal_419f40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418d0e
        public_419f48 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xCC
        jmp public_401730
        public_419f56 : nop
        mov eax, offset public_41f090
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419f40)
        ASM_EXPORT_ENTRY_FIRST(0x419f48, public_419f48)
        ASM_EXPORT_ENTRY_LAST(0x419f56, public_419f56)
    }
}

#undef public_419f48
#undef public_419f56

#pragma init_seg(compiler)
extern "C" void const* const public_419f48 = __AsmFindLabelExport(&internal_419f40, 0x419f48);
extern "C" void const* const public_419f56 = __AsmFindLabelExport(&internal_419f40, 0x419f56);
