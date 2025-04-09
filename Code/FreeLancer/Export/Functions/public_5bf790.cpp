#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf79c _public_5bf79c
#define public_5bf7b3 _public_5bf7b3
#define public_5bf7c1 _public_5bf7c1
#define public_5bf7cc _public_5bf7cc
#define public_5bf7d8 _public_5bf7d8
#define public_5bf7e4 _public_5bf7e4

PROC_DECLARE(0x5bf790, internal_5bf790, public_5bf790);
/* CHUNK of public_5020a0 */
extern "C" NAKED register_t __cdecl internal_5bf790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c6048]
        public_5bf79c : nop
        mov eax, dword ptr ss : [ebp-0x16E4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x16EC]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5bf7b3 : nop
        mov eax, dword ptr ss : [ebp-0x16EC]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bf7c1 : nop
        lea ecx, ss:[ebp-0x1678]
        jmp public_40edf0
        public_5bf7cc : nop
        mov ecx, dword ptr ss : [ebp-0x16EC]
        jmp dword ptr ds : [public_5c7090]
        public_5bf7d8 : nop
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c7090]
        public_5bf7e4 : nop
        mov eax, offset public_5f9744
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf790)
        ASM_EXPORT_ENTRY_FIRST(0x5bf79c, public_5bf79c)
        ASM_EXPORT_ENTRY(0x5bf7b3, public_5bf7b3)
        ASM_EXPORT_ENTRY(0x5bf7c1, public_5bf7c1)
        ASM_EXPORT_ENTRY(0x5bf7cc, public_5bf7cc)
        ASM_EXPORT_ENTRY(0x5bf7d8, public_5bf7d8)
        ASM_EXPORT_ENTRY_LAST(0x5bf7e4, public_5bf7e4)
    }
}

#undef public_5bf79c
#undef public_5bf7b3
#undef public_5bf7c1
#undef public_5bf7cc
#undef public_5bf7d8
#undef public_5bf7e4

#pragma init_seg(compiler)
extern "C" void const* const public_5bf79c = __AsmFindLabelExport(&internal_5bf790, 0x5bf79c);
extern "C" void const* const public_5bf7b3 = __AsmFindLabelExport(&internal_5bf790, 0x5bf7b3);
extern "C" void const* const public_5bf7c1 = __AsmFindLabelExport(&internal_5bf790, 0x5bf7c1);
extern "C" void const* const public_5bf7cc = __AsmFindLabelExport(&internal_5bf790, 0x5bf7cc);
extern "C" void const* const public_5bf7d8 = __AsmFindLabelExport(&internal_5bf790, 0x5bf7d8);
extern "C" void const* const public_5bf7e4 = __AsmFindLabelExport(&internal_5bf790, 0x5bf7e4);
