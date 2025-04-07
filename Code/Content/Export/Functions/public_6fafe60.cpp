#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafe71 _public_6fafe71

PROC_DECLARE(0x6fafe60, internal_6fafe60, public_6fafe60);
/* CHUNK of public_6f6f9d0 */
extern "C" NAKED register_t __cdecl internal_6fafe60()
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
        public_6fafe71 : nop
        mov eax, offset public_6fc5034
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafe60)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafe71, public_6fafe71)
    }
}

#undef public_6fafe71

#pragma init_seg(compiler)
extern "C" void const* const public_6fafe71 = __AsmFindLabelExport(&internal_6fafe60, 0x6fafe71);
