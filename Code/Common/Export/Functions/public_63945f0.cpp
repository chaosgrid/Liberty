#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63945fb _public_63945fb

PROC_DECLARE(0x63945f0, internal_63945f0, public_63945f0);
/* CHUNK of public_62b1960 */
extern "C" NAKED register_t __cdecl internal_63945f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62fd570
        pop ecx
        ret 
        public_63945fb : nop
        mov eax, offset public_63adb0c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63945f0)
        ASM_EXPORT_ENTRY_SINGLE(0x63945fb, public_63945fb)
    }
}

#undef public_63945fb

#pragma init_seg(compiler)
extern "C" void const* const public_63945fb = __AsmFindLabelExport(&internal_63945f0, 0x63945fb);
