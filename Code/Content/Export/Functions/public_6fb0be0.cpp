#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0bec _public_6fb0bec

PROC_DECLARE(0x6fb0be0, internal_6fb0be0, public_6fb0be0);
/* CHUNK of public_6f86cb0 */
extern "C" NAKED register_t __cdecl internal_6fb0be0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call dword ptr ds : [public_6fb312c]
        pop ecx
        ret 
        public_6fb0bec : nop
        mov eax, offset public_6fc6044
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0be0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb0bec, public_6fb0bec)
    }
}

#undef public_6fb0bec

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0bec = __AsmFindLabelExport(&internal_6fb0be0, 0x6fb0bec);
