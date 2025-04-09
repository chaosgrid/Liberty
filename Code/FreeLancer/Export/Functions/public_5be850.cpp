#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be859 _public_5be859
#define public_5be862 _public_5be862

PROC_DECLARE(0x5be850, internal_5be850, public_5be850);
/* CHUNK of public_4e54c0 */
extern "C" NAKED register_t __cdecl internal_5be850()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c658c]
        public_5be859 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_5c60fc]
        public_5be862 : nop
        mov eax, offset public_5f8a30
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be850)
        ASM_EXPORT_ENTRY_FIRST(0x5be859, public_5be859)
        ASM_EXPORT_ENTRY_LAST(0x5be862, public_5be862)
    }
}

#undef public_5be859
#undef public_5be862

#pragma init_seg(compiler)
extern "C" void const* const public_5be859 = __AsmFindLabelExport(&internal_5be850, 0x5be859);
extern "C" void const* const public_5be862 = __AsmFindLabelExport(&internal_5be850, 0x5be862);
