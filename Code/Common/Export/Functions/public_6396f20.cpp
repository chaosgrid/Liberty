#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396f28 _public_6396f28
#define public_6396f33 _public_6396f33

PROC_DECLARE(0x6396f20, internal_6396f20, public_6396f20);
/* CHUNK of public_6324830 */
extern "C" NAKED register_t __cdecl internal_6396f20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_63221f0
        public_6396f28 : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0x10
        jmp public_630e210
        public_6396f33 : nop
        mov eax, offset public_63b0f48
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396f20)
        ASM_EXPORT_ENTRY_FIRST(0x6396f28, public_6396f28)
        ASM_EXPORT_ENTRY_LAST(0x6396f33, public_6396f33)
    }
}

#undef public_6396f28
#undef public_6396f33

#pragma init_seg(compiler)
extern "C" void const* const public_6396f28 = __AsmFindLabelExport(&internal_6396f20, 0x6396f28);
extern "C" void const* const public_6396f33 = __AsmFindLabelExport(&internal_6396f20, 0x6396f33);
