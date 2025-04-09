#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c47dc _public_5c47dc
#define public_5c47e4 _public_5c47e4
#define public_5c47f0 _public_5c47f0
#define public_5c47f8 _public_5c47f8
#define public_5c4801 _public_5c4801
#define public_5c4809 _public_5c4809
#define public_5c481a _public_5c481a

PROC_DECLARE(0x5c47d0, internal_5c47d0, public_5c47d0);
/* CHUNK of public_58d9d0 */
extern "C" NAKED register_t __cdecl internal_5c47d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xEC]
        jmp dword ptr ds : [public_5c6c60]
        public_5c47dc : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_45eeb0
        public_5c47e4 : nop
        lea ecx, ss:[ebp-0xD8]
        jmp dword ptr ds : [public_5c6c60]
        public_5c47f0 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_45eeb0
        public_5c47f8 : nop
        lea ecx, ss:[ebp-0x78]
        jmp dword ptr ds : [public_5c62c8]
        public_5c4801 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_45eeb0
        public_5c4809 : nop
        mov eax, dword ptr ss : [ebp-0x54]
        push eax
        mov ecx, dword ptr ss : [ebp-0x60]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c481a : nop
        mov eax, offset public_5fe47c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c47d0)
        ASM_EXPORT_ENTRY_FIRST(0x5c47dc, public_5c47dc)
        ASM_EXPORT_ENTRY(0x5c47e4, public_5c47e4)
        ASM_EXPORT_ENTRY(0x5c47f0, public_5c47f0)
        ASM_EXPORT_ENTRY(0x5c47f8, public_5c47f8)
        ASM_EXPORT_ENTRY(0x5c4801, public_5c4801)
        ASM_EXPORT_ENTRY(0x5c4809, public_5c4809)
        ASM_EXPORT_ENTRY_LAST(0x5c481a, public_5c481a)
    }
}

#undef public_5c47dc
#undef public_5c47e4
#undef public_5c47f0
#undef public_5c47f8
#undef public_5c4801
#undef public_5c4809
#undef public_5c481a

#pragma init_seg(compiler)
extern "C" void const* const public_5c47dc = __AsmFindLabelExport(&internal_5c47d0, 0x5c47dc);
extern "C" void const* const public_5c47e4 = __AsmFindLabelExport(&internal_5c47d0, 0x5c47e4);
extern "C" void const* const public_5c47f0 = __AsmFindLabelExport(&internal_5c47d0, 0x5c47f0);
extern "C" void const* const public_5c47f8 = __AsmFindLabelExport(&internal_5c47d0, 0x5c47f8);
extern "C" void const* const public_5c4801 = __AsmFindLabelExport(&internal_5c47d0, 0x5c4801);
extern "C" void const* const public_5c4809 = __AsmFindLabelExport(&internal_5c47d0, 0x5c4809);
extern "C" void const* const public_5c481a = __AsmFindLabelExport(&internal_5c47d0, 0x5c481a);
