#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9721 _public_5b9721

PROC_DECLARE(0x5b9710, internal_5b9710, public_5b9710);
/* CHUNK of public_443430 */
extern "C" NAKED register_t __cdecl internal_5b9710()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5b9721 : nop
        mov eax, offset public_5f36f8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9710)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9721, public_5b9721)
    }
}

#undef public_5b9721

#pragma init_seg(compiler)
extern "C" void const* const public_5b9721 = __AsmFindLabelExport(&internal_5b9710, 0x5b9721);
