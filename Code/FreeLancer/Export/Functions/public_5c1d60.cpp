#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1d6c _public_5c1d6c
#define public_5c1d78 _public_5c1d78
#define public_5c1d84 _public_5c1d84
#define public_5c1d8f _public_5c1d8f
#define public_5c1d9b _public_5c1d9b
#define public_5c1da6 _public_5c1da6
#define public_5c1db2 _public_5c1db2
#define public_5c1dbd _public_5c1dbd
#define public_5c1dd4 _public_5c1dd4

PROC_DECLARE(0x5c1d60, internal_5c1d60, public_5c1d60);
/* CHUNK of public_562a60 */
extern "C" NAKED register_t __cdecl internal_5c1d60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2040]
        jmp dword ptr ds : [public_5c62c4]
        public_5c1d6c : nop
        lea ecx, ss:[ebp-0x2030]
        jmp dword ptr ds : [public_5c62b4]
        public_5c1d78 : nop
        lea ecx, ss:[ebp-0x2030]
        jmp dword ptr ds : [public_5c62b4]
        public_5c1d84 : nop
        lea ecx, ss:[ebp-0x2044]
        jmp public_45eeb0
        public_5c1d8f : nop
        lea ecx, ss:[ebp-0x2030]
        jmp dword ptr ds : [public_5c62bc]
        public_5c1d9b : nop
        lea ecx, ss:[ebp-0x2044]
        jmp public_45eeb0
        public_5c1da6 : nop
        lea ecx, ss:[ebp-0x2020]
        jmp dword ptr ds : [public_5c62ac]
        public_5c1db2 : nop
        lea ecx, ss:[ebp-0x2044]
        jmp public_45eeb0
        public_5c1dbd : nop
        mov eax, dword ptr ss : [ebp-0x2024]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2030]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c1dd4 : nop
        mov eax, offset public_5fc01c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1d60)
        ASM_EXPORT_ENTRY_FIRST(0x5c1d6c, public_5c1d6c)
        ASM_EXPORT_ENTRY(0x5c1d78, public_5c1d78)
        ASM_EXPORT_ENTRY(0x5c1d84, public_5c1d84)
        ASM_EXPORT_ENTRY(0x5c1d8f, public_5c1d8f)
        ASM_EXPORT_ENTRY(0x5c1d9b, public_5c1d9b)
        ASM_EXPORT_ENTRY(0x5c1da6, public_5c1da6)
        ASM_EXPORT_ENTRY(0x5c1db2, public_5c1db2)
        ASM_EXPORT_ENTRY(0x5c1dbd, public_5c1dbd)
        ASM_EXPORT_ENTRY_LAST(0x5c1dd4, public_5c1dd4)
    }
}

#undef public_5c1d6c
#undef public_5c1d78
#undef public_5c1d84
#undef public_5c1d8f
#undef public_5c1d9b
#undef public_5c1da6
#undef public_5c1db2
#undef public_5c1dbd
#undef public_5c1dd4

#pragma init_seg(compiler)
extern "C" void const* const public_5c1d6c = __AsmFindLabelExport(&internal_5c1d60, 0x5c1d6c);
extern "C" void const* const public_5c1d78 = __AsmFindLabelExport(&internal_5c1d60, 0x5c1d78);
extern "C" void const* const public_5c1d84 = __AsmFindLabelExport(&internal_5c1d60, 0x5c1d84);
extern "C" void const* const public_5c1d8f = __AsmFindLabelExport(&internal_5c1d60, 0x5c1d8f);
extern "C" void const* const public_5c1d9b = __AsmFindLabelExport(&internal_5c1d60, 0x5c1d9b);
extern "C" void const* const public_5c1da6 = __AsmFindLabelExport(&internal_5c1d60, 0x5c1da6);
extern "C" void const* const public_5c1db2 = __AsmFindLabelExport(&internal_5c1d60, 0x5c1db2);
extern "C" void const* const public_5c1dbd = __AsmFindLabelExport(&internal_5c1d60, 0x5c1dbd);
extern "C" void const* const public_5c1dd4 = __AsmFindLabelExport(&internal_5c1d60, 0x5c1dd4);
