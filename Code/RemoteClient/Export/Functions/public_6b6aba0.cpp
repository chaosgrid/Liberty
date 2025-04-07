#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6aba8 _public_6b6aba8

PROC_DECLARE(0x6b6aba0, internal_6b6aba0, public_6b6aba0);
/* CHUNK of public_6b4f860 */
extern "C" NAKED register_t __cdecl internal_6b6aba0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6b4e730
        public_6b6aba8 : nop
        mov eax, offset public_6b6f254
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6aba0)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6aba8, public_6b6aba8)
    }
}

#undef public_6b6aba8

#pragma init_seg(compiler)
extern "C" void const* const public_6b6aba8 = __AsmFindLabelExport(&internal_6b6aba0, 0x6b6aba8);
