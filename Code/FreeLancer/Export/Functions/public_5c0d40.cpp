#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_532d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0d48 _public_5c0d48
#define public_5c0d56 _public_5c0d56

PROC_DECLARE(0x5c0d40, internal_5c0d40, public_5c0d40);
/* CHUNK of public_5425f0 */
extern "C" NAKED register_t __cdecl internal_5c0d40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_532d30
        public_5c0d48 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA4
        jmp public_502d90
        public_5c0d56 : nop
        mov eax, offset public_5fafa8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0d40)
        ASM_EXPORT_ENTRY_FIRST(0x5c0d48, public_5c0d48)
        ASM_EXPORT_ENTRY_LAST(0x5c0d56, public_5c0d56)
    }
}

#undef public_5c0d48
#undef public_5c0d56

#pragma init_seg(compiler)
extern "C" void const* const public_5c0d48 = __AsmFindLabelExport(&internal_5c0d40, 0x5c0d48);
extern "C" void const* const public_5c0d56 = __AsmFindLabelExport(&internal_5c0d40, 0x5c0d56);
