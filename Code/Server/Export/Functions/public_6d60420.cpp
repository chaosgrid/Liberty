#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60431 _public_6d60431

PROC_DECLARE(0x6d60420, internal_6d60420, public_6d60420);
/* CHUNK of public_6ce5920 */
extern "C" NAKED register_t __cdecl internal_6d60420()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d60431 : nop
        mov eax, offset public_6d70c20
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60420)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60431, public_6d60431)
    }
}

#undef public_6d60431

#pragma init_seg(compiler)
extern "C" void const* const public_6d60431 = __AsmFindLabelExport(&internal_6d60420, 0x6d60431);
