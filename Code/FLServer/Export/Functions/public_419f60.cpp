#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401730);
CLANG_FORWARD_PROC_SYMBOL(public_418d0e);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419f68 _public_419f68
#define public_419f76 _public_419f76

PROC_DECLARE(0x419f60, internal_419f60, public_419f60);
/* CHUNK of public_40b320 */
extern "C" NAKED register_t __cdecl internal_419f60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418d0e
        public_419f68 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xCC
        jmp public_401730
        public_419f76 : nop
        mov eax, offset public_41f0bc
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419f60)
        ASM_EXPORT_ENTRY_FIRST(0x419f68, public_419f68)
        ASM_EXPORT_ENTRY_LAST(0x419f76, public_419f76)
    }
}

#undef public_419f68
#undef public_419f76

#pragma init_seg(compiler)
extern "C" void const* const public_419f68 = __AsmFindLabelExport(&internal_419f60, 0x419f68);
extern "C" void const* const public_419f76 = __AsmFindLabelExport(&internal_419f60, 0x419f76);
