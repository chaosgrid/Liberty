#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a86b _public_41a86b
#define public_41a876 _public_41a876
#define public_41a881 _public_41a881
#define public_41a88c _public_41a88c
#define public_41a897 _public_41a897
#define public_41a8a2 _public_41a8a2
#define public_41a8ad _public_41a8ad

PROC_DECLARE(0x41a860, internal_41a860, public_41a860);
/* CHUNK of public_4136a0 */
extern "C" NAKED register_t __cdecl internal_41a860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x11C]
        jmp public_418aa4
        public_41a86b : nop
        lea ecx, ss:[ebp-0x11C]
        jmp public_418aa4
        public_41a876 : nop
        lea ecx, ss:[ebp-0x11C]
        jmp public_418aa4
        public_41a881 : nop
        lea ecx, ss:[ebp-0x11C]
        jmp public_418aa4
        public_41a88c : nop
        lea ecx, ss:[ebp-0x11C]
        jmp public_418aa4
        public_41a897 : nop
        lea ecx, ss:[ebp-0x11C]
        jmp public_418aa4
        public_41a8a2 : nop
        lea ecx, ss:[ebp-0x118]
        jmp public_418aa4
        public_41a8ad : nop
        mov eax, offset public_41f9dc
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a860)
        ASM_EXPORT_ENTRY_FIRST(0x41a86b, public_41a86b)
        ASM_EXPORT_ENTRY(0x41a876, public_41a876)
        ASM_EXPORT_ENTRY(0x41a881, public_41a881)
        ASM_EXPORT_ENTRY(0x41a88c, public_41a88c)
        ASM_EXPORT_ENTRY(0x41a897, public_41a897)
        ASM_EXPORT_ENTRY(0x41a8a2, public_41a8a2)
        ASM_EXPORT_ENTRY_LAST(0x41a8ad, public_41a8ad)
    }
}

#undef public_41a86b
#undef public_41a876
#undef public_41a881
#undef public_41a88c
#undef public_41a897
#undef public_41a8a2
#undef public_41a8ad

#pragma init_seg(compiler)
extern "C" void const* const public_41a86b = __AsmFindLabelExport(&internal_41a860, 0x41a86b);
extern "C" void const* const public_41a876 = __AsmFindLabelExport(&internal_41a860, 0x41a876);
extern "C" void const* const public_41a881 = __AsmFindLabelExport(&internal_41a860, 0x41a881);
extern "C" void const* const public_41a88c = __AsmFindLabelExport(&internal_41a860, 0x41a88c);
extern "C" void const* const public_41a897 = __AsmFindLabelExport(&internal_41a860, 0x41a897);
extern "C" void const* const public_41a8a2 = __AsmFindLabelExport(&internal_41a860, 0x41a8a2);
extern "C" void const* const public_41a8ad = __AsmFindLabelExport(&internal_41a860, 0x41a8ad);
