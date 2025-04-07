#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_458fa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba1fb _public_5ba1fb
#define public_5ba203 _public_5ba203

PROC_DECLARE(0x5ba1f0, internal_5ba1f0, public_5ba1f0);
/* CHUNK of public_459830 */
extern "C" NAKED register_t __cdecl internal_5ba1f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5ba1fb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_458fa0
        public_5ba203 : nop
        mov eax, offset public_5f45b8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba1f0)
        ASM_EXPORT_ENTRY_FIRST(0x5ba1fb, public_5ba1fb)
        ASM_EXPORT_ENTRY_LAST(0x5ba203, public_5ba203)
    }
}

#undef public_5ba1fb
#undef public_5ba203

#pragma init_seg(compiler)
extern "C" void const* const public_5ba1fb = __AsmFindLabelExport(&internal_5ba1f0, 0x5ba1fb);
extern "C" void const* const public_5ba203 = __AsmFindLabelExport(&internal_5ba1f0, 0x5ba203);
