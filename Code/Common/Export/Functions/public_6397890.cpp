#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63978a1 _public_63978a1

PROC_DECLARE(0x6397890, internal_6397890, public_6397890);
/* CHUNK of public_6341200 */
extern "C" NAKED register_t __cdecl internal_6397890()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_63978a1 : nop
        mov eax, offset public_63b1a8c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397890)
        ASM_EXPORT_ENTRY_SINGLE(0x63978a1, public_63978a1)
    }
}

#undef public_63978a1

#pragma init_seg(compiler)
extern "C" void const* const public_63978a1 = __AsmFindLabelExport(&internal_6397890, 0x63978a1);
