#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a49b _public_6c0a49b

PROC_DECLARE(0x6c0a490, internal_6c0a490, public_6c0a490);
/* CHUNK of public_6bdcb60 */
extern "C" NAKED register_t __cdecl internal_6c0a490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a49b : nop
        mov eax, offset public_6c0eb78
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a490)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a49b, public_6c0a49b)
    }
}

#undef public_6c0a49b

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a49b = __AsmFindLabelExport(&internal_6c0a490, 0x6c0a49b);
