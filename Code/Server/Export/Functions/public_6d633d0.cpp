#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d633d9 _public_6d633d9
#define public_6d633e4 _public_6d633e4
#define public_6d633f0 _public_6d633f0
#define public_6d63407 _public_6d63407
#define public_6d63408 _public_6d63408

PROC_DECLARE(0x6d633d0, internal_6d633d0, public_6d633d0);
/* CHUNK of public_6d4ca60 */
extern "C" NAKED register_t __cdecl internal_6d633d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6d64694]
        public_6d633d9 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d633e4 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        push eax
        call dword ptr ds : [public_6d64924]
        pop ecx
        ret 
        public_6d633f0 : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        and eax, 1
        test eax, eax
        je public_6d63407
        mov ecx, dword ptr ss : [ebp+4]
        jmp dword ptr ds : [public_6d64694]
        public_6d63407 : nop
        ret 
        public_6d63408 : nop
        mov eax, offset public_6d7571c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d633d0)
        ASM_EXPORT_ENTRY_FIRST(0x6d633d9, public_6d633d9)
        ASM_EXPORT_ENTRY(0x6d633e4, public_6d633e4)
        ASM_EXPORT_ENTRY(0x6d633f0, public_6d633f0)
        ASM_EXPORT_ENTRY(0x6d63407, public_6d63407)
        ASM_EXPORT_ENTRY_LAST(0x6d63408, public_6d63408)
    }
}

#undef public_6d633d9
#undef public_6d633e4
#undef public_6d633f0
#undef public_6d63407
#undef public_6d63408

#pragma init_seg(compiler)
extern "C" void const* const public_6d633d9 = __AsmFindLabelExport(&internal_6d633d0, 0x6d633d9);
extern "C" void const* const public_6d633e4 = __AsmFindLabelExport(&internal_6d633d0, 0x6d633e4);
extern "C" void const* const public_6d633f0 = __AsmFindLabelExport(&internal_6d633d0, 0x6d633f0);
extern "C" void const* const public_6d63407 = __AsmFindLabelExport(&internal_6d633d0, 0x6d63407);
extern "C" void const* const public_6d63408 = __AsmFindLabelExport(&internal_6d633d0, 0x6d63408);
