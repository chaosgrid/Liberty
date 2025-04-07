#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a988 _public_6b6a988

PROC_DECLARE(0x6b6a980, internal_6b6a980, public_6b6a980);
/* CHUNK of public_6b49360 */
extern "C" NAKED register_t __cdecl internal_6b6a980()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6b4e730
        public_6b6a988 : nop
        mov eax, offset public_6b6f010
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a980)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6a988, public_6b6a988)
    }
}

#undef public_6b6a988

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a988 = __AsmFindLabelExport(&internal_6b6a980, 0x6b6a988);
