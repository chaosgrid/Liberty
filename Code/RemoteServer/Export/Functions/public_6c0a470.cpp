#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a47b _public_6c0a47b

PROC_DECLARE(0x6c0a470, internal_6c0a470, public_6c0a470);
/* CHUNK of public_6bdc9e0 */
extern "C" NAKED register_t __cdecl internal_6c0a470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_6c09aaa
        pop ecx
        ret 
        public_6c0a47b : nop
        mov eax, offset public_6c0eb54
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a470)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a47b, public_6c0a47b)
    }
}

#undef public_6c0a47b

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a47b = __AsmFindLabelExport(&internal_6c0a470, 0x6c0a47b);
