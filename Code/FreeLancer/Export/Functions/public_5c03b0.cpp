#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c03bc _public_5c03bc
#define public_5c03ca _public_5c03ca
#define public_5c03d5 _public_5c03d5
#define public_5c03e1 _public_5c03e1
#define public_5c03ed _public_5c03ed

PROC_DECLARE(0x5c03b0, internal_5c03b0, public_5c03b0);
/* CHUNK of public_52a7d0 */
extern "C" NAKED register_t __cdecl internal_5c03b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5c03bc : nop
        mov eax, dword ptr ss : [ebp-0x1590]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c03ca : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c03d5 : nop
        mov ecx, dword ptr ss : [ebp-0x1590]
        jmp dword ptr ds : [public_5c7090]
        public_5c03e1 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c03ed : nop
        mov eax, offset public_5fa474
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c03b0)
        ASM_EXPORT_ENTRY_FIRST(0x5c03bc, public_5c03bc)
        ASM_EXPORT_ENTRY(0x5c03ca, public_5c03ca)
        ASM_EXPORT_ENTRY(0x5c03d5, public_5c03d5)
        ASM_EXPORT_ENTRY(0x5c03e1, public_5c03e1)
        ASM_EXPORT_ENTRY_LAST(0x5c03ed, public_5c03ed)
    }
}

#undef public_5c03bc
#undef public_5c03ca
#undef public_5c03d5
#undef public_5c03e1
#undef public_5c03ed

#pragma init_seg(compiler)
extern "C" void const* const public_5c03bc = __AsmFindLabelExport(&internal_5c03b0, 0x5c03bc);
extern "C" void const* const public_5c03ca = __AsmFindLabelExport(&internal_5c03b0, 0x5c03ca);
extern "C" void const* const public_5c03d5 = __AsmFindLabelExport(&internal_5c03b0, 0x5c03d5);
extern "C" void const* const public_5c03e1 = __AsmFindLabelExport(&internal_5c03b0, 0x5c03e1);
extern "C" void const* const public_5c03ed = __AsmFindLabelExport(&internal_5c03b0, 0x5c03ed);
