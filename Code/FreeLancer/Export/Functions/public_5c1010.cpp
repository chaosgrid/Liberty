#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f4a10);
CLANG_FORWARD_PROC_SYMBOL(public_4f4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_532d40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c101c _public_5c101c
#define public_5c1027 _public_5c1027
#define public_5c1032 _public_5c1032
#define public_5c1040 _public_5c1040
#define public_5c104e _public_5c104e
#define public_5c1059 _public_5c1059
#define public_5c1065 _public_5c1065
#define public_5c1070 _public_5c1070

PROC_DECLARE(0x5c1010, internal_5c1010, public_5c1010);
/* CHUNK of public_548a20 */
extern "C" NAKED register_t __cdecl internal_5c1010()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xC68]
        jmp dword ptr ds : [public_5c658c]
        public_5c101c : nop
        lea ecx, ss:[ebp-0xD04]
        jmp public_4f4a10
        public_5c1027 : nop
        lea ecx, ss:[ebp-0xD04]
        jmp public_4f4ab0
        public_5c1032 : nop
        mov eax, dword ptr ss : [ebp-0xD0C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c1040 : nop
        mov ecx, dword ptr ss : [ebp-0xD0C]
        add ecx, 0xC
        jmp public_532d40
        public_5c104e : nop
        lea ecx, ss:[ebp-0xD04]
        jmp public_4f4a10
        public_5c1059 : nop
        lea ecx, ss:[ebp-0xC68]
        jmp dword ptr ds : [public_5c658c]
        public_5c1065 : nop
        lea ecx, ss:[ebp-0xD04]
        jmp public_4f4a10
        public_5c1070 : nop
        mov eax, offset public_5fb348
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1010)
        ASM_EXPORT_ENTRY_FIRST(0x5c101c, public_5c101c)
        ASM_EXPORT_ENTRY(0x5c1027, public_5c1027)
        ASM_EXPORT_ENTRY(0x5c1032, public_5c1032)
        ASM_EXPORT_ENTRY(0x5c1040, public_5c1040)
        ASM_EXPORT_ENTRY(0x5c104e, public_5c104e)
        ASM_EXPORT_ENTRY(0x5c1059, public_5c1059)
        ASM_EXPORT_ENTRY(0x5c1065, public_5c1065)
        ASM_EXPORT_ENTRY_LAST(0x5c1070, public_5c1070)
    }
}

#undef public_5c101c
#undef public_5c1027
#undef public_5c1032
#undef public_5c1040
#undef public_5c104e
#undef public_5c1059
#undef public_5c1065
#undef public_5c1070

#pragma init_seg(compiler)
extern "C" void const* const public_5c101c = __AsmFindLabelExport(&internal_5c1010, 0x5c101c);
extern "C" void const* const public_5c1027 = __AsmFindLabelExport(&internal_5c1010, 0x5c1027);
extern "C" void const* const public_5c1032 = __AsmFindLabelExport(&internal_5c1010, 0x5c1032);
extern "C" void const* const public_5c1040 = __AsmFindLabelExport(&internal_5c1010, 0x5c1040);
extern "C" void const* const public_5c104e = __AsmFindLabelExport(&internal_5c1010, 0x5c104e);
extern "C" void const* const public_5c1059 = __AsmFindLabelExport(&internal_5c1010, 0x5c1059);
extern "C" void const* const public_5c1065 = __AsmFindLabelExport(&internal_5c1010, 0x5c1065);
extern "C" void const* const public_5c1070 = __AsmFindLabelExport(&internal_5c1010, 0x5c1070);
