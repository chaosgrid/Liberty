#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc7fe _public_5bc7fe
#define public_5bc809 _public_5bc809
#define public_5bc817 _public_5bc817
#define public_5bc825 _public_5bc825
#define public_5bc830 _public_5bc830
#define public_5bc83e _public_5bc83e

PROC_DECLARE(0x5bc7f0, internal_5bc7f0, public_5bc7f0);
/* CHUNK of public_491f90 */
extern "C" NAKED register_t __cdecl internal_5bc7f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x220]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bc7fe : nop
        mov ecx, dword ptr ss : [ebp-0x218]
        jmp public_420d10
        public_5bc809 : nop
        mov ecx, dword ptr ss : [ebp-0x218]
        add ecx, 8
        jmp public_59ef20
        public_5bc817 : nop
        mov ecx, dword ptr ss : [ebp-0x218]
        add ecx, 0x5C
        jmp public_444e20
        public_5bc825 : nop
        mov ecx, dword ptr ss : [ebp-0x220]
        jmp public_444e20
        public_5bc830 : nop
        mov ecx, dword ptr ss : [ebp-0x220]
        add ecx, 0xC
        jmp public_445d70
        public_5bc83e : nop
        mov eax, offset public_5f6ab0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc7f0)
        ASM_EXPORT_ENTRY_FIRST(0x5bc7fe, public_5bc7fe)
        ASM_EXPORT_ENTRY(0x5bc809, public_5bc809)
        ASM_EXPORT_ENTRY(0x5bc817, public_5bc817)
        ASM_EXPORT_ENTRY(0x5bc825, public_5bc825)
        ASM_EXPORT_ENTRY(0x5bc830, public_5bc830)
        ASM_EXPORT_ENTRY_LAST(0x5bc83e, public_5bc83e)
    }
}

#undef public_5bc7fe
#undef public_5bc809
#undef public_5bc817
#undef public_5bc825
#undef public_5bc830
#undef public_5bc83e

#pragma init_seg(compiler)
extern "C" void const* const public_5bc7fe = __AsmFindLabelExport(&internal_5bc7f0, 0x5bc7fe);
extern "C" void const* const public_5bc809 = __AsmFindLabelExport(&internal_5bc7f0, 0x5bc809);
extern "C" void const* const public_5bc817 = __AsmFindLabelExport(&internal_5bc7f0, 0x5bc817);
extern "C" void const* const public_5bc825 = __AsmFindLabelExport(&internal_5bc7f0, 0x5bc825);
extern "C" void const* const public_5bc830 = __AsmFindLabelExport(&internal_5bc7f0, 0x5bc830);
extern "C" void const* const public_5bc83e = __AsmFindLabelExport(&internal_5bc7f0, 0x5bc83e);
