#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5301 _public_5c5301

PROC_DECLARE(0x5c52f0, internal_5c52f0, public_5c52f0);
/* CHUNK of public_5a7c80 */
extern "C" NAKED register_t __cdecl internal_5c52f0()
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
        public_5c5301 : nop
        mov eax, offset public_5ff198
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c52f0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c5301, public_5c5301)
    }
}

#undef public_5c5301

#pragma init_seg(compiler)
extern "C" void const* const public_5c5301 = __AsmFindLabelExport(&internal_5c52f0, 0x5c5301);
