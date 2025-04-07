#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb2161 _public_6fb2161

PROC_DECLARE(0x6fb2150, internal_6fb2150, public_6fb2150);
/* CHUNK of public_6fa3df0 */
extern "C" NAKED register_t __cdecl internal_6fb2150()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb2161 : nop
        mov eax, offset public_6fc774c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb2150)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb2161, public_6fb2161)
    }
}

#undef public_6fb2161

#pragma init_seg(compiler)
extern "C" void const* const public_6fb2161 = __AsmFindLabelExport(&internal_6fb2150, 0x6fb2161);
