#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3069 _public_5c3069
#define public_5c3072 _public_5c3072
#define public_5c307b _public_5c307b
#define public_5c3084 _public_5c3084

PROC_DECLARE(0x5c3060, internal_5c3060, public_5c3060);
/* CHUNK of public_56fc90 */
extern "C" NAKED register_t __cdecl internal_5c3060()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp dword ptr ds : [public_5c62bc]
        public_5c3069 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c62c8]
        public_5c3072 : nop
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c62c8]
        public_5c307b : nop
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c62c8]
        public_5c3084 : nop
        mov eax, offset public_5fcf98
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3060)
        ASM_EXPORT_ENTRY_FIRST(0x5c3069, public_5c3069)
        ASM_EXPORT_ENTRY(0x5c3072, public_5c3072)
        ASM_EXPORT_ENTRY(0x5c307b, public_5c307b)
        ASM_EXPORT_ENTRY_LAST(0x5c3084, public_5c3084)
    }
}

#undef public_5c3069
#undef public_5c3072
#undef public_5c307b
#undef public_5c3084

#pragma init_seg(compiler)
extern "C" void const* const public_5c3069 = __AsmFindLabelExport(&internal_5c3060, 0x5c3069);
extern "C" void const* const public_5c3072 = __AsmFindLabelExport(&internal_5c3060, 0x5c3072);
extern "C" void const* const public_5c307b = __AsmFindLabelExport(&internal_5c3060, 0x5c307b);
extern "C" void const* const public_5c3084 = __AsmFindLabelExport(&internal_5c3060, 0x5c3084);
