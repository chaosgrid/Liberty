#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab191 _public_6fab191

PROC_DECLARE(0x6fab180, internal_6fab180, public_6fab180);
/* CHUNK of public_6ed3350 */
extern "C" NAKED register_t __cdecl internal_6fab180()
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
        public_6fab191 : nop
        mov eax, offset public_6fbf6a4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab180)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab191, public_6fab191)
    }
}

#undef public_6fab191

#pragma init_seg(compiler)
extern "C" void const* const public_6fab191 = __AsmFindLabelExport(&internal_6fab180, 0x6fab191);
