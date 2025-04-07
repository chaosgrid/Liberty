#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438f10);
CLANG_FORWARD_PROC_SYMBOL(public_439140);
CLANG_FORWARD_PROC_SYMBOL(public_43bcd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b92d8 _public_5b92d8
#define public_5b92e3 _public_5b92e3
#define public_5b92ee _public_5b92ee

PROC_DECLARE(0x5b92d0, internal_5b92d0, public_5b92d0);
/* CHUNK of public_438de0 */
extern "C" NAKED register_t __cdecl internal_5b92d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_43bcd0
        public_5b92d8 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xC
        jmp public_438f10
        public_5b92e3 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x20
        jmp public_439140
        public_5b92ee : nop
        mov eax, offset public_5f3264
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b92d0)
        ASM_EXPORT_ENTRY_FIRST(0x5b92d8, public_5b92d8)
        ASM_EXPORT_ENTRY(0x5b92e3, public_5b92e3)
        ASM_EXPORT_ENTRY_LAST(0x5b92ee, public_5b92ee)
    }
}

#undef public_5b92d8
#undef public_5b92e3
#undef public_5b92ee

#pragma init_seg(compiler)
extern "C" void const* const public_5b92d8 = __AsmFindLabelExport(&internal_5b92d0, 0x5b92d8);
extern "C" void const* const public_5b92e3 = __AsmFindLabelExport(&internal_5b92d0, 0x5b92e3);
extern "C" void const* const public_5b92ee = __AsmFindLabelExport(&internal_5b92d0, 0x5b92ee);
