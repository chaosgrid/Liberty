#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c55bc _public_5c55bc
#define public_5c55c8 _public_5c55c8

PROC_DECLARE(0x5c55b0, internal_5c55b0, public_5c55b0);
/* CHUNK of public_5a9990 */
extern "C" NAKED register_t __cdecl internal_5c55b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x418]
        jmp dword ptr ds : [public_5c7058]
        public_5c55bc : nop
        lea ecx, ss:[ebp-0x242C]
        jmp dword ptr ds : [public_5c7058]
        public_5c55c8 : nop
        mov eax, offset public_5ff3d0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c55b0)
        ASM_EXPORT_ENTRY_FIRST(0x5c55bc, public_5c55bc)
        ASM_EXPORT_ENTRY_LAST(0x5c55c8, public_5c55c8)
    }
}

#undef public_5c55bc
#undef public_5c55c8

#pragma init_seg(compiler)
extern "C" void const* const public_5c55bc = __AsmFindLabelExport(&internal_5c55b0, 0x5c55bc);
extern "C" void const* const public_5c55c8 = __AsmFindLabelExport(&internal_5c55b0, 0x5c55c8);
