#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecabb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faaf68 _public_6faaf68

PROC_DECLARE(0x6faaf60, internal_6faaf60, public_6faaf60);
/* CHUNK of public_6ecb4a0 */
extern "C" NAKED register_t __cdecl internal_6faaf60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6ecabb0
        public_6faaf68 : nop
        mov eax, offset public_6fbf3a0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faaf60)
        ASM_EXPORT_ENTRY_SINGLE(0x6faaf68, public_6faaf68)
    }
}

#undef public_6faaf68

#pragma init_seg(compiler)
extern "C" void const* const public_6faaf68 = __AsmFindLabelExport(&internal_6faaf60, 0x6faaf68);
