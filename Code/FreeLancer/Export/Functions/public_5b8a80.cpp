#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8a8c _public_5b8a8c
#define public_5b8a9a _public_5b8a9a
#define public_5b8aa5 _public_5b8aa5
#define public_5b8ab1 _public_5b8ab1
#define public_5b8abd _public_5b8abd

PROC_DECLARE(0x5b8a80, internal_5b8a80, public_5b8a80);
/* CHUNK of public_41df30 */
extern "C" NAKED register_t __cdecl internal_5b8a80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5b8a8c : nop
        mov eax, dword ptr ss : [ebp-0x1784]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b8a9a : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5b8aa5 : nop
        mov ecx, dword ptr ss : [ebp-0x1784]
        jmp dword ptr ds : [public_5c7090]
        public_5b8ab1 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5b8abd : nop
        mov eax, offset public_5f2950
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8a80)
        ASM_EXPORT_ENTRY_FIRST(0x5b8a8c, public_5b8a8c)
        ASM_EXPORT_ENTRY(0x5b8a9a, public_5b8a9a)
        ASM_EXPORT_ENTRY(0x5b8aa5, public_5b8aa5)
        ASM_EXPORT_ENTRY(0x5b8ab1, public_5b8ab1)
        ASM_EXPORT_ENTRY_LAST(0x5b8abd, public_5b8abd)
    }
}

#undef public_5b8a8c
#undef public_5b8a9a
#undef public_5b8aa5
#undef public_5b8ab1
#undef public_5b8abd

#pragma init_seg(compiler)
extern "C" void const* const public_5b8a8c = __AsmFindLabelExport(&internal_5b8a80, 0x5b8a8c);
extern "C" void const* const public_5b8a9a = __AsmFindLabelExport(&internal_5b8a80, 0x5b8a9a);
extern "C" void const* const public_5b8aa5 = __AsmFindLabelExport(&internal_5b8a80, 0x5b8aa5);
extern "C" void const* const public_5b8ab1 = __AsmFindLabelExport(&internal_5b8a80, 0x5b8ab1);
extern "C" void const* const public_5b8abd = __AsmFindLabelExport(&internal_5b8a80, 0x5b8abd);
