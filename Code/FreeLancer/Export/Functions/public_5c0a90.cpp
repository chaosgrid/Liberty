#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5393e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0a9c _public_5c0a9c
#define public_5c0aa8 _public_5c0aa8
#define public_5c0ab3 _public_5c0ab3

PROC_DECLARE(0x5c0a90, internal_5c0a90, public_5c0a90);
/* CHUNK of public_5392d0 */
extern "C" NAKED register_t __cdecl internal_5c0a90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp dword ptr ds : [public_5c69ec]
        public_5c0a9c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp dword ptr ds : [public_5c69e8]
        public_5c0aa8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_5393e0
        public_5c0ab3 : nop
        mov eax, offset public_5facc8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0a90)
        ASM_EXPORT_ENTRY_FIRST(0x5c0a9c, public_5c0a9c)
        ASM_EXPORT_ENTRY(0x5c0aa8, public_5c0aa8)
        ASM_EXPORT_ENTRY_LAST(0x5c0ab3, public_5c0ab3)
    }
}

#undef public_5c0a9c
#undef public_5c0aa8
#undef public_5c0ab3

#pragma init_seg(compiler)
extern "C" void const* const public_5c0a9c = __AsmFindLabelExport(&internal_5c0a90, 0x5c0a9c);
extern "C" void const* const public_5c0aa8 = __AsmFindLabelExport(&internal_5c0a90, 0x5c0aa8);
extern "C" void const* const public_5c0ab3 = __AsmFindLabelExport(&internal_5c0a90, 0x5c0ab3);
