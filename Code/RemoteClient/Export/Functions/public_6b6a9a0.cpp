#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a9a8 _public_6b6a9a8

PROC_DECLARE(0x6b6a9a0, internal_6b6a9a0, public_6b6a9a0);
/* CHUNK of public_6b49f60 */
extern "C" NAKED register_t __cdecl internal_6b6a9a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6b4e730
        public_6b6a9a8 : nop
        mov eax, offset public_6b6f034
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a9a0)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6a9a8, public_6b6a9a8)
    }
}

#undef public_6b6a9a8

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a9a8 = __AsmFindLabelExport(&internal_6b6a9a0, 0x6b6a9a8);
