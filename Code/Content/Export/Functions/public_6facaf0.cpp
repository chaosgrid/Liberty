#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facafb _public_6facafb

PROC_DECLARE(0x6facaf0, internal_6facaf0, public_6facaf0);
/* CHUNK of public_6f002e0 */
extern "C" NAKED register_t __cdecl internal_6facaf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6facafb : nop
        mov eax, offset public_6fc1790
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facaf0)
        ASM_EXPORT_ENTRY_SINGLE(0x6facafb, public_6facafb)
    }
}

#undef public_6facafb

#pragma init_seg(compiler)
extern "C" void const* const public_6facafb = __AsmFindLabelExport(&internal_6facaf0, 0x6facafb);
