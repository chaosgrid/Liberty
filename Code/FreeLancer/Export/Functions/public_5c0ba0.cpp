#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53b870);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0bae _public_5c0bae
#define public_5c0bba _public_5c0bba
#define public_5c0bc6 _public_5c0bc6
#define public_5c0bd1 _public_5c0bd1
#define public_5c0bdd _public_5c0bdd
#define public_5c0be9 _public_5c0be9
#define public_5c0bf5 _public_5c0bf5

PROC_DECLARE(0x5c0ba0, internal_5c0ba0, public_5c0ba0);
/* CHUNK of public_53b220 */
extern "C" NAKED register_t __cdecl internal_5c0ba0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c0bae : nop
        lea ecx, ss:[ebp-0x184]
        jmp dword ptr ds : [public_5c658c]
        public_5c0bba : nop
        lea ecx, ss:[ebp-0x98]
        jmp dword ptr ds : [public_5c658c]
        public_5c0bc6 : nop
        lea ecx, ss:[ebp-0x134]
        jmp public_53b870
        public_5c0bd1 : nop
        lea ecx, ss:[ebp-0x98]
        jmp dword ptr ds : [public_5c658c]
        public_5c0bdd : nop
        lea ecx, ss:[ebp-0x15C]
        jmp dword ptr ds : [public_5c6098]
        public_5c0be9 : nop
        lea ecx, ss:[ebp-0x174]
        jmp dword ptr ds : [public_5c6098]
        public_5c0bf5 : nop
        mov eax, offset public_5fade8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0ba0)
        ASM_EXPORT_ENTRY_FIRST(0x5c0bae, public_5c0bae)
        ASM_EXPORT_ENTRY(0x5c0bba, public_5c0bba)
        ASM_EXPORT_ENTRY(0x5c0bc6, public_5c0bc6)
        ASM_EXPORT_ENTRY(0x5c0bd1, public_5c0bd1)
        ASM_EXPORT_ENTRY(0x5c0bdd, public_5c0bdd)
        ASM_EXPORT_ENTRY(0x5c0be9, public_5c0be9)
        ASM_EXPORT_ENTRY_LAST(0x5c0bf5, public_5c0bf5)
    }
}

#undef public_5c0bae
#undef public_5c0bba
#undef public_5c0bc6
#undef public_5c0bd1
#undef public_5c0bdd
#undef public_5c0be9
#undef public_5c0bf5

#pragma init_seg(compiler)
extern "C" void const* const public_5c0bae = __AsmFindLabelExport(&internal_5c0ba0, 0x5c0bae);
extern "C" void const* const public_5c0bba = __AsmFindLabelExport(&internal_5c0ba0, 0x5c0bba);
extern "C" void const* const public_5c0bc6 = __AsmFindLabelExport(&internal_5c0ba0, 0x5c0bc6);
extern "C" void const* const public_5c0bd1 = __AsmFindLabelExport(&internal_5c0ba0, 0x5c0bd1);
extern "C" void const* const public_5c0bdd = __AsmFindLabelExport(&internal_5c0ba0, 0x5c0bdd);
extern "C" void const* const public_5c0be9 = __AsmFindLabelExport(&internal_5c0ba0, 0x5c0be9);
extern "C" void const* const public_5c0bf5 = __AsmFindLabelExport(&internal_5c0ba0, 0x5c0bf5);
