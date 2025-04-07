#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d48c20);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6308b _public_6d6308b
#define public_6d63097 _public_6d63097
#define public_6d630a3 _public_6d630a3
#define public_6d630ba _public_6d630ba
#define public_6d630c5 _public_6d630c5
#define public_6d630d1 _public_6d630d1
#define public_6d630dd _public_6d630dd

PROC_DECLARE(0x6d63080, internal_6d63080, public_6d63080);
/* CHUNK of public_6d47120 */
extern "C" NAKED register_t __cdecl internal_6d63080()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x26F0]
        jmp public_6d48c20
        public_6d6308b : nop
        lea ecx, ss:[ebp-0x2598]
        jmp dword ptr ds : [public_6d644e0]
        public_6d63097 : nop
        lea ecx, ss:[ebp-0x2630]
        jmp dword ptr ds : [public_6d64694]
        public_6d630a3 : nop
        mov eax, dword ptr ss : [ebp-0x2714]
        push eax
        mov ecx, dword ptr ss : [ebp-0x26D0]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d630ba : nop
        lea ecx, ss:[ebp-0x2598]
        jmp public_6cfb030
        public_6d630c5 : nop
        mov ecx, dword ptr ss : [ebp-0x26D0]
        jmp dword ptr ds : [public_6d64b94]
        public_6d630d1 : nop
        lea ecx, ss:[ebp-0x2598]
        jmp dword ptr ds : [public_6d64b94]
        public_6d630dd : nop
        mov eax, offset public_6d7549c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63080)
        ASM_EXPORT_ENTRY_FIRST(0x6d6308b, public_6d6308b)
        ASM_EXPORT_ENTRY(0x6d63097, public_6d63097)
        ASM_EXPORT_ENTRY(0x6d630a3, public_6d630a3)
        ASM_EXPORT_ENTRY(0x6d630ba, public_6d630ba)
        ASM_EXPORT_ENTRY(0x6d630c5, public_6d630c5)
        ASM_EXPORT_ENTRY(0x6d630d1, public_6d630d1)
        ASM_EXPORT_ENTRY_LAST(0x6d630dd, public_6d630dd)
    }
}

#undef public_6d6308b
#undef public_6d63097
#undef public_6d630a3
#undef public_6d630ba
#undef public_6d630c5
#undef public_6d630d1
#undef public_6d630dd

#pragma init_seg(compiler)
extern "C" void const* const public_6d6308b = __AsmFindLabelExport(&internal_6d63080, 0x6d6308b);
extern "C" void const* const public_6d63097 = __AsmFindLabelExport(&internal_6d63080, 0x6d63097);
extern "C" void const* const public_6d630a3 = __AsmFindLabelExport(&internal_6d63080, 0x6d630a3);
extern "C" void const* const public_6d630ba = __AsmFindLabelExport(&internal_6d63080, 0x6d630ba);
extern "C" void const* const public_6d630c5 = __AsmFindLabelExport(&internal_6d63080, 0x6d630c5);
extern "C" void const* const public_6d630d1 = __AsmFindLabelExport(&internal_6d63080, 0x6d630d1);
extern "C" void const* const public_6d630dd = __AsmFindLabelExport(&internal_6d63080, 0x6d630dd);
