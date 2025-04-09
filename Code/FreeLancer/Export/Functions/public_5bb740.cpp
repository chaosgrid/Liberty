#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb749 _public_5bb749
#define public_5bb751 _public_5bb751
#define public_5bb75a _public_5bb75a
#define public_5bb762 _public_5bb762
#define public_5bb76b _public_5bb76b
#define public_5bb773 _public_5bb773
#define public_5bb77c _public_5bb77c
#define public_5bb784 _public_5bb784

PROC_DECLARE(0x5bb740, internal_5bb740, public_5bb740);
/* CHUNK of public_46a4d0 */
extern "C" NAKED register_t __cdecl internal_5bb740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_5c62c8]
        public_5bb749 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_45eeb0
        public_5bb751 : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c62ac]
        public_5bb75a : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_45eeb0
        public_5bb762 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_5c62c8]
        public_5bb76b : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_45eeb0
        public_5bb773 : nop
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c62d4]
        public_5bb77c : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_45eeb0
        public_5bb784 : nop
        mov eax, offset public_5f59ec
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb740)
        ASM_EXPORT_ENTRY_FIRST(0x5bb749, public_5bb749)
        ASM_EXPORT_ENTRY(0x5bb751, public_5bb751)
        ASM_EXPORT_ENTRY(0x5bb75a, public_5bb75a)
        ASM_EXPORT_ENTRY(0x5bb762, public_5bb762)
        ASM_EXPORT_ENTRY(0x5bb76b, public_5bb76b)
        ASM_EXPORT_ENTRY(0x5bb773, public_5bb773)
        ASM_EXPORT_ENTRY(0x5bb77c, public_5bb77c)
        ASM_EXPORT_ENTRY_LAST(0x5bb784, public_5bb784)
    }
}

#undef public_5bb749
#undef public_5bb751
#undef public_5bb75a
#undef public_5bb762
#undef public_5bb76b
#undef public_5bb773
#undef public_5bb77c
#undef public_5bb784

#pragma init_seg(compiler)
extern "C" void const* const public_5bb749 = __AsmFindLabelExport(&internal_5bb740, 0x5bb749);
extern "C" void const* const public_5bb751 = __AsmFindLabelExport(&internal_5bb740, 0x5bb751);
extern "C" void const* const public_5bb75a = __AsmFindLabelExport(&internal_5bb740, 0x5bb75a);
extern "C" void const* const public_5bb762 = __AsmFindLabelExport(&internal_5bb740, 0x5bb762);
extern "C" void const* const public_5bb76b = __AsmFindLabelExport(&internal_5bb740, 0x5bb76b);
extern "C" void const* const public_5bb773 = __AsmFindLabelExport(&internal_5bb740, 0x5bb773);
extern "C" void const* const public_5bb77c = __AsmFindLabelExport(&internal_5bb740, 0x5bb77c);
extern "C" void const* const public_5bb784 = __AsmFindLabelExport(&internal_5bb740, 0x5bb784);
