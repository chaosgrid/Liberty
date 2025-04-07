#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_62257d0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248e0b _public_6248e0b
#define public_6248e16 _public_6248e16
#define public_6248e2d _public_6248e2d

PROC_DECLARE(0x6248e00, internal_6248e00, public_6248e00);
/* CHUNK of public_6224c20 */
extern "C" NAKED register_t __cdecl internal_6248e00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x15C]
        jmp public_62257d0
        public_6248e0b : nop
        lea ecx, ss:[ebp-0x154]
        jmp public_62257d0
        public_6248e16 : nop
        mov eax, dword ptr ss : [ebp-0x104]
        push eax
        mov ecx, dword ptr ss : [ebp-0x100]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_6248e2d : nop
        mov eax, offset public_6251d38
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248e00)
        ASM_EXPORT_ENTRY_FIRST(0x6248e0b, public_6248e0b)
        ASM_EXPORT_ENTRY(0x6248e16, public_6248e16)
        ASM_EXPORT_ENTRY_LAST(0x6248e2d, public_6248e2d)
    }
}

#undef public_6248e0b
#undef public_6248e16
#undef public_6248e2d

#pragma init_seg(compiler)
extern "C" void const* const public_6248e0b = __AsmFindLabelExport(&internal_6248e00, 0x6248e0b);
extern "C" void const* const public_6248e16 = __AsmFindLabelExport(&internal_6248e00, 0x6248e16);
extern "C" void const* const public_6248e2d = __AsmFindLabelExport(&internal_6248e00, 0x6248e2d);
