#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f08390);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad128 _public_6fad128

PROC_DECLARE(0x6fad120, internal_6fad120, public_6fad120);
/* CHUNK of public_6f0a270 */
extern "C" NAKED register_t __cdecl internal_6fad120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x40]
        jmp public_6f08390
        public_6fad128 : nop
        mov eax, offset public_6fc1f5c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad120)
        ASM_EXPORT_ENTRY_SINGLE(0x6fad128, public_6fad128)
    }
}

#undef public_6fad128

#pragma init_seg(compiler)
extern "C" void const* const public_6fad128 = __AsmFindLabelExport(&internal_6fad120, 0x6fad128);
