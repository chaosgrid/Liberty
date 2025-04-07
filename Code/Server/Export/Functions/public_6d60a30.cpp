#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6cf0540);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60a3b _public_6d60a3b
#define public_6d60a46 _public_6d60a46
#define public_6d60a51 _public_6d60a51
#define public_6d60a5c _public_6d60a5c
#define public_6d60a67 _public_6d60a67
#define public_6d60a73 _public_6d60a73

PROC_DECLARE(0x6d60a30, internal_6d60a30, public_6d60a30);
/* CHUNK of public_6cf53e0 */
extern "C" NAKED register_t __cdecl internal_6d60a30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x288]
        jmp public_6cecb50
        public_6d60a3b : nop
        lea ecx, ss:[ebp-0x2A0]
        jmp public_6cecb50
        public_6d60a46 : nop
        lea ecx, ss:[ebp-0x294]
        jmp public_6cecb50
        public_6d60a51 : nop
        lea ecx, ss:[ebp-0x124]
        jmp public_6cf0540
        public_6d60a5c : nop
        lea ecx, ss:[ebp-0x278]
        jmp public_6cecb50
        public_6d60a67 : nop
        lea ecx, ss:[ebp-0x258]
        jmp dword ptr ds : [public_6d641e4]
        public_6d60a73 : nop
        mov eax, offset public_6d713b0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60a30)
        ASM_EXPORT_ENTRY_FIRST(0x6d60a3b, public_6d60a3b)
        ASM_EXPORT_ENTRY(0x6d60a46, public_6d60a46)
        ASM_EXPORT_ENTRY(0x6d60a51, public_6d60a51)
        ASM_EXPORT_ENTRY(0x6d60a5c, public_6d60a5c)
        ASM_EXPORT_ENTRY(0x6d60a67, public_6d60a67)
        ASM_EXPORT_ENTRY_LAST(0x6d60a73, public_6d60a73)
    }
}

#undef public_6d60a3b
#undef public_6d60a46
#undef public_6d60a51
#undef public_6d60a5c
#undef public_6d60a67
#undef public_6d60a73

#pragma init_seg(compiler)
extern "C" void const* const public_6d60a3b = __AsmFindLabelExport(&internal_6d60a30, 0x6d60a3b);
extern "C" void const* const public_6d60a46 = __AsmFindLabelExport(&internal_6d60a30, 0x6d60a46);
extern "C" void const* const public_6d60a51 = __AsmFindLabelExport(&internal_6d60a30, 0x6d60a51);
extern "C" void const* const public_6d60a5c = __AsmFindLabelExport(&internal_6d60a30, 0x6d60a5c);
extern "C" void const* const public_6d60a67 = __AsmFindLabelExport(&internal_6d60a30, 0x6d60a67);
extern "C" void const* const public_6d60a73 = __AsmFindLabelExport(&internal_6d60a30, 0x6d60a73);
