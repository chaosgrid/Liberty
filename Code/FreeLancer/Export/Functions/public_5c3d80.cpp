#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3d89 _public_5c3d89
#define public_5c3d91 _public_5c3d91

PROC_DECLARE(0x5c3d80, internal_5c3d80, public_5c3d80);
/* CHUNK of public_57b7b0 */
extern "C" NAKED register_t __cdecl internal_5c3d80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c62ac]
        public_5c3d89 : nop
        lea ecx, ss:[ebp+4]
        jmp public_45eeb0
        public_5c3d91 : nop
        mov eax, offset public_5fda64
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3d80)
        ASM_EXPORT_ENTRY_FIRST(0x5c3d89, public_5c3d89)
        ASM_EXPORT_ENTRY_LAST(0x5c3d91, public_5c3d91)
    }
}

#undef public_5c3d89
#undef public_5c3d91

#pragma init_seg(compiler)
extern "C" void const* const public_5c3d89 = __AsmFindLabelExport(&internal_5c3d80, 0x5c3d89);
extern "C" void const* const public_5c3d91 = __AsmFindLabelExport(&internal_5c3d80, 0x5c3d91);
