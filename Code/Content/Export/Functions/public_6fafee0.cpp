#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafeec _public_6fafeec

PROC_DECLARE(0x6fafee0, internal_6fafee0, public_6fafee0);
/* CHUNK of public_6f71840 */
extern "C" NAKED register_t __cdecl internal_6fafee0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call dword ptr ds : [public_6fb312c]
        pop ecx
        ret 
        public_6fafeec : nop
        mov eax, offset public_6fc51c0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafee0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafeec, public_6fafeec)
    }
}

#undef public_6fafeec

#pragma init_seg(compiler)
extern "C" void const* const public_6fafeec = __AsmFindLabelExport(&internal_6fafee0, 0x6fafeec);
