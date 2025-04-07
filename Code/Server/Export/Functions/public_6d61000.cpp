#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6100c _public_6d6100c
#define public_6d6101a _public_6d6101a
#define public_6d61025 _public_6d61025
#define public_6d61031 _public_6d61031
#define public_6d6103d _public_6d6103d

PROC_DECLARE(0x6d61000, internal_6d61000, public_6d61000);
/* CHUNK of public_6d038c0 */
extern "C" NAKED register_t __cdecl internal_6d61000()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d644e0]
        public_6d6100c : nop
        mov eax, dword ptr ss : [ebp-0x17D0]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d6101a : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6cfb030
        public_6d61025 : nop
        mov ecx, dword ptr ss : [ebp-0x17D0]
        jmp dword ptr ds : [public_6d64b94]
        public_6d61031 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d64b94]
        public_6d6103d : nop
        mov eax, offset public_6d71b9c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61000)
        ASM_EXPORT_ENTRY_FIRST(0x6d6100c, public_6d6100c)
        ASM_EXPORT_ENTRY(0x6d6101a, public_6d6101a)
        ASM_EXPORT_ENTRY(0x6d61025, public_6d61025)
        ASM_EXPORT_ENTRY(0x6d61031, public_6d61031)
        ASM_EXPORT_ENTRY_LAST(0x6d6103d, public_6d6103d)
    }
}

#undef public_6d6100c
#undef public_6d6101a
#undef public_6d61025
#undef public_6d61031
#undef public_6d6103d

#pragma init_seg(compiler)
extern "C" void const* const public_6d6100c = __AsmFindLabelExport(&internal_6d61000, 0x6d6100c);
extern "C" void const* const public_6d6101a = __AsmFindLabelExport(&internal_6d61000, 0x6d6101a);
extern "C" void const* const public_6d61025 = __AsmFindLabelExport(&internal_6d61000, 0x6d61025);
extern "C" void const* const public_6d61031 = __AsmFindLabelExport(&internal_6d61000, 0x6d61031);
extern "C" void const* const public_6d6103d = __AsmFindLabelExport(&internal_6d61000, 0x6d6103d);
