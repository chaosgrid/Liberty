#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecabb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faaf28 _public_6faaf28

PROC_DECLARE(0x6faaf20, internal_6faaf20, public_6faaf20);
/* CHUNK of public_6ec8120 */
extern "C" NAKED register_t __cdecl internal_6faaf20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6ecabb0
        public_6faaf28 : nop
        mov eax, offset public_6fbf214
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faaf20)
        ASM_EXPORT_ENTRY_SINGLE(0x6faaf28, public_6faaf28)
    }
}

#undef public_6faaf28

#pragma init_seg(compiler)
extern "C" void const* const public_6faaf28 = __AsmFindLabelExport(&internal_6faaf20, 0x6faaf28);
