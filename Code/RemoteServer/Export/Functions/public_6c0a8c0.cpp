#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bed880);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a8c9 _public_6c0a8c9
#define public_6c0a8d1 _public_6c0a8d1

PROC_DECLARE(0x6c0a8c0, internal_6c0a8c0, public_6c0a8c0);
/* CHUNK of public_6bed590 */
extern "C" NAKED register_t __cdecl internal_6c0a8c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_6c0b1c8]
        public_6c0a8c9 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6bed880
        public_6c0a8d1 : nop
        mov eax, offset public_6c0efa0
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a8c0)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a8c9, public_6c0a8c9)
        ASM_EXPORT_ENTRY_LAST(0x6c0a8d1, public_6c0a8d1)
    }
}

#undef public_6c0a8c9
#undef public_6c0a8d1

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a8c9 = __AsmFindLabelExport(&internal_6c0a8c0, 0x6c0a8c9);
extern "C" void const* const public_6c0a8d1 = __AsmFindLabelExport(&internal_6c0a8c0, 0x6c0a8d1);
