#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfb6c _public_5bfb6c
#define public_5bfb7a _public_5bfb7a
#define public_5bfb85 _public_5bfb85
#define public_5bfb91 _public_5bfb91
#define public_5bfb9d _public_5bfb9d
#define public_5bfba8 _public_5bfba8
#define public_5bfbb4 _public_5bfbb4
#define public_5bfbc0 _public_5bfbc0

PROC_DECLARE(0x5bfb60, internal_5bfb60, public_5bfb60);
/* CHUNK of public_50a240 */
extern "C" NAKED register_t __cdecl internal_5bfb60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c6048]
        public_5bfb6c : nop
        mov eax, dword ptr ss : [ebp-0x1748]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bfb7a : nop
        lea ecx, ss:[ebp-0x1678]
        jmp public_40edf0
        public_5bfb85 : nop
        mov ecx, dword ptr ss : [ebp-0x1718]
        jmp dword ptr ds : [public_5c7090]
        public_5bfb91 : nop
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c7090]
        public_5bfb9d : nop
        lea ecx, ss:[ebp-0x1678]
        jmp public_40edf0
        public_5bfba8 : nop
        mov ecx, dword ptr ss : [ebp-0x1718]
        jmp dword ptr ds : [public_5c7090]
        public_5bfbb4 : nop
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c7090]
        public_5bfbc0 : nop
        mov eax, offset public_5f9ad4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfb60)
        ASM_EXPORT_ENTRY_FIRST(0x5bfb6c, public_5bfb6c)
        ASM_EXPORT_ENTRY(0x5bfb7a, public_5bfb7a)
        ASM_EXPORT_ENTRY(0x5bfb85, public_5bfb85)
        ASM_EXPORT_ENTRY(0x5bfb91, public_5bfb91)
        ASM_EXPORT_ENTRY(0x5bfb9d, public_5bfb9d)
        ASM_EXPORT_ENTRY(0x5bfba8, public_5bfba8)
        ASM_EXPORT_ENTRY(0x5bfbb4, public_5bfbb4)
        ASM_EXPORT_ENTRY_LAST(0x5bfbc0, public_5bfbc0)
    }
}

#undef public_5bfb6c
#undef public_5bfb7a
#undef public_5bfb85
#undef public_5bfb91
#undef public_5bfb9d
#undef public_5bfba8
#undef public_5bfbb4
#undef public_5bfbc0

#pragma init_seg(compiler)
extern "C" void const* const public_5bfb6c = __AsmFindLabelExport(&internal_5bfb60, 0x5bfb6c);
extern "C" void const* const public_5bfb7a = __AsmFindLabelExport(&internal_5bfb60, 0x5bfb7a);
extern "C" void const* const public_5bfb85 = __AsmFindLabelExport(&internal_5bfb60, 0x5bfb85);
extern "C" void const* const public_5bfb91 = __AsmFindLabelExport(&internal_5bfb60, 0x5bfb91);
extern "C" void const* const public_5bfb9d = __AsmFindLabelExport(&internal_5bfb60, 0x5bfb9d);
extern "C" void const* const public_5bfba8 = __AsmFindLabelExport(&internal_5bfb60, 0x5bfba8);
extern "C" void const* const public_5bfbb4 = __AsmFindLabelExport(&internal_5bfb60, 0x5bfbb4);
extern "C" void const* const public_5bfbc0 = __AsmFindLabelExport(&internal_5bfb60, 0x5bfbc0);
