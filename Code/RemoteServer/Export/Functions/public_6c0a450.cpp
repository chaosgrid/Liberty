#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a45b _public_6c0a45b

PROC_DECLARE(0x6c0a450, internal_6c0a450, public_6c0a450);
/* CHUNK of public_6bdc850 */
extern "C" NAKED register_t __cdecl internal_6c0a450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a45b : nop
        mov eax, offset public_6c0eb30
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a450)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a45b, public_6c0a45b)
    }
}

#undef public_6c0a45b

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a45b = __AsmFindLabelExport(&internal_6c0a450, 0x6c0a45b);
