#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a911 _public_6c0a911

PROC_DECLARE(0x6c0a900, internal_6c0a900, public_6c0a900);
/* CHUNK of public_6bee370 */
extern "C" NAKED register_t __cdecl internal_6c0a900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6bda0f0
        add esp, 8
        ret 
        public_6c0a911 : nop
        mov eax, offset public_6c0efe8
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a900)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a911, public_6c0a911)
    }
}

#undef public_6c0a911

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a911 = __AsmFindLabelExport(&internal_6c0a900, 0x6c0a911);
