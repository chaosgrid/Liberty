#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_532d30);
CLANG_FORWARD_PROC_SYMBOL(public_532fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5359c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0808 _public_5c0808
#define public_5c0816 _public_5c0816
#define public_5c0824 _public_5c0824
#define public_5c0832 _public_5c0832

PROC_DECLARE(0x5c0800, internal_5c0800, public_5c0800);
/* CHUNK of public_532d40 */
extern "C" NAKED register_t __cdecl internal_5c0800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_532d30
        public_5c0808 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xA8
        jmp public_4a2d30
        public_5c0816 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xB4
        jmp public_5359c0
        public_5c0824 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xC0
        jmp public_532fc0
        public_5c0832 : nop
        mov eax, offset public_5faa04
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0800)
        ASM_EXPORT_ENTRY_FIRST(0x5c0808, public_5c0808)
        ASM_EXPORT_ENTRY(0x5c0816, public_5c0816)
        ASM_EXPORT_ENTRY(0x5c0824, public_5c0824)
        ASM_EXPORT_ENTRY_LAST(0x5c0832, public_5c0832)
    }
}

#undef public_5c0808
#undef public_5c0816
#undef public_5c0824
#undef public_5c0832

#pragma init_seg(compiler)
extern "C" void const* const public_5c0808 = __AsmFindLabelExport(&internal_5c0800, 0x5c0808);
extern "C" void const* const public_5c0816 = __AsmFindLabelExport(&internal_5c0800, 0x5c0816);
extern "C" void const* const public_5c0824 = __AsmFindLabelExport(&internal_5c0800, 0x5c0824);
extern "C" void const* const public_5c0832 = __AsmFindLabelExport(&internal_5c0800, 0x5c0832);
