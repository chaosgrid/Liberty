#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6ab48 _public_6b6ab48

PROC_DECLARE(0x6b6ab40, internal_6b6ab40, public_6b6ab40);
/* CHUNK of public_6b4ca90 */
extern "C" NAKED register_t __cdecl internal_6b6ab40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6b4e730
        public_6b6ab48 : nop
        mov eax, offset public_6b6f1e0
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6ab40)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6ab48, public_6b6ab48)
    }
}

#undef public_6b6ab48

#pragma init_seg(compiler)
extern "C" void const* const public_6b6ab48 = __AsmFindLabelExport(&internal_6b6ab40, 0x6b6ab48);
