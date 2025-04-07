#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bdf2c _public_5bdf2c
#define public_5bdf38 _public_5bdf38
#define public_5bdf44 _public_5bdf44
#define public_5bdf50 _public_5bdf50
#define public_5bdf5b _public_5bdf5b

PROC_DECLARE(0x5bdf20, internal_5bdf20, public_5bdf20);
/* CHUNK of public_4d24b0 */
extern "C" NAKED register_t __cdecl internal_5bdf20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6D54]
        jmp dword ptr ds : [public_5c6098]
        public_5bdf2c : nop
        lea ecx, ss:[ebp-0x6D78]
        jmp dword ptr ds : [public_5c6098]
        public_5bdf38 : nop
        lea ecx, ss:[ebp-0x6D1C]
        jmp dword ptr ds : [public_5c6098]
        public_5bdf44 : nop
        lea ecx, ss:[ebp-0x6D3C]
        jmp dword ptr ds : [public_5c6098]
        public_5bdf50 : nop
        lea ecx, ss:[ebp-0x6D80]
        jmp public_444e20
        public_5bdf5b : nop
        mov eax, offset public_5f82e8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bdf20)
        ASM_EXPORT_ENTRY_FIRST(0x5bdf2c, public_5bdf2c)
        ASM_EXPORT_ENTRY(0x5bdf38, public_5bdf38)
        ASM_EXPORT_ENTRY(0x5bdf44, public_5bdf44)
        ASM_EXPORT_ENTRY(0x5bdf50, public_5bdf50)
        ASM_EXPORT_ENTRY_LAST(0x5bdf5b, public_5bdf5b)
    }
}

#undef public_5bdf2c
#undef public_5bdf38
#undef public_5bdf44
#undef public_5bdf50
#undef public_5bdf5b

#pragma init_seg(compiler)
extern "C" void const* const public_5bdf2c = __AsmFindLabelExport(&internal_5bdf20, 0x5bdf2c);
extern "C" void const* const public_5bdf38 = __AsmFindLabelExport(&internal_5bdf20, 0x5bdf38);
extern "C" void const* const public_5bdf44 = __AsmFindLabelExport(&internal_5bdf20, 0x5bdf44);
extern "C" void const* const public_5bdf50 = __AsmFindLabelExport(&internal_5bdf20, 0x5bdf50);
extern "C" void const* const public_5bdf5b = __AsmFindLabelExport(&internal_5bdf20, 0x5bdf5b);
