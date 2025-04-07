#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a8e9 _public_6c0a8e9

PROC_DECLARE(0x6c0a8e0, internal_6c0a8e0, public_6c0a8e0);
/* CHUNK of public_6bed6f0 */
extern "C" NAKED register_t __cdecl internal_6c0a8e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6c0b1c8]
        public_6c0a8e9 : nop
        mov eax, offset public_6c0efc4
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a8e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a8e9, public_6c0a8e9)
    }
}

#undef public_6c0a8e9

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a8e9 = __AsmFindLabelExport(&internal_6c0a8e0, 0x6c0a8e9);
