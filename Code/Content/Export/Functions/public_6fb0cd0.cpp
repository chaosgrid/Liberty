#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0cd9 _public_6fb0cd9

PROC_DECLARE(0x6fb0cd0, internal_6fb0cd0, public_6fb0cd0);
/* CHUNK of public_6f87dc0 */
extern "C" NAKED register_t __cdecl internal_6fb0cd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_6fb3110]
        public_6fb0cd9 : nop
        mov eax, offset public_6fc621c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0cd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb0cd9, public_6fb0cd9)
    }
}

#undef public_6fb0cd9

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0cd9 = __AsmFindLabelExport(&internal_6fb0cd0, 0x6fb0cd9);
