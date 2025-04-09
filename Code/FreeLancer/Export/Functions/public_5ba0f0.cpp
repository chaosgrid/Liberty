#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5581b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba0fb _public_5ba0fb
#define public_5ba106 _public_5ba106

PROC_DECLARE(0x5ba0f0, internal_5ba0f0, public_5ba0f0);
/* CHUNK of public_457dc0 */
extern "C" NAKED register_t __cdecl internal_5ba0f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_4de730
        public_5ba0fb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_5581b0
        public_5ba106 : nop
        mov eax, offset public_5f44a0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba0f0)
        ASM_EXPORT_ENTRY_FIRST(0x5ba0fb, public_5ba0fb)
        ASM_EXPORT_ENTRY_LAST(0x5ba106, public_5ba106)
    }
}

#undef public_5ba0fb
#undef public_5ba106

#pragma init_seg(compiler)
extern "C" void const* const public_5ba0fb = __AsmFindLabelExport(&internal_5ba0f0, 0x5ba0fb);
extern "C" void const* const public_5ba106 = __AsmFindLabelExport(&internal_5ba0f0, 0x5ba106);
