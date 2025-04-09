#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_599a60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c48e1 _public_5c48e1
#define public_5c48ec _public_5c48ec

PROC_DECLARE(0x5c48d0, internal_5c48d0, public_5c48d0);
/* CHUNK of public_590ab0 */
extern "C" NAKED register_t __cdecl internal_5c48d0()
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
        public_5c48e1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_599a60
        public_5c48ec : nop
        mov eax, offset public_5fe5c0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c48d0)
        ASM_EXPORT_ENTRY_FIRST(0x5c48e1, public_5c48e1)
        ASM_EXPORT_ENTRY_LAST(0x5c48ec, public_5c48ec)
    }
}

#undef public_5c48e1
#undef public_5c48ec

#pragma init_seg(compiler)
extern "C" void const* const public_5c48e1 = __AsmFindLabelExport(&internal_5c48d0, 0x5c48e1);
extern "C" void const* const public_5c48ec = __AsmFindLabelExport(&internal_5c48d0, 0x5c48ec);
