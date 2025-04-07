#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa93b9 _public_6fa93b9

PROC_DECLARE(0x6fa93b0, internal_6fa93b0, public_6fa93b0);
/* CHUNK of public_6ea1220 */
extern "C" NAKED register_t __cdecl internal_6fa93b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa93b9 : nop
        mov eax, offset public_6fbd77c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa93b0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa93b9, public_6fa93b9)
    }
}

#undef public_6fa93b9

#pragma init_seg(compiler)
extern "C" void const* const public_6fa93b9 = __AsmFindLabelExport(&internal_6fa93b0, 0x6fa93b9);
