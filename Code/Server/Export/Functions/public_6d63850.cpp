#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6385e _public_6d6385e
#define public_6d6386c _public_6d6386c
#define public_6d6387b _public_6d6387b
#define public_6d63886 _public_6d63886

PROC_DECLARE(0x6d63850, internal_6d63850, public_6d63850);
/* CHUNK of public_6d523e0 */
extern "C" NAKED register_t __cdecl internal_6d63850()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0xB3C]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d6385e : nop
        mov ecx, dword ptr ss : [ebp-0xB3C]
        add ecx, 4
        jmp public_6ce36f0
        public_6d6386c : nop
        mov ecx, dword ptr ss : [ebp-0xB3C]
        add ecx, 0x14
        jmp dword ptr ds : [public_6d64b94]
        public_6d6387b : nop
        lea ecx, ss:[ebp-0xB2C]
        jmp public_6ce36f0
        public_6d63886 : nop
        mov eax, offset public_6d75a84
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63850)
        ASM_EXPORT_ENTRY_FIRST(0x6d6385e, public_6d6385e)
        ASM_EXPORT_ENTRY(0x6d6386c, public_6d6386c)
        ASM_EXPORT_ENTRY(0x6d6387b, public_6d6387b)
        ASM_EXPORT_ENTRY_LAST(0x6d63886, public_6d63886)
    }
}

#undef public_6d6385e
#undef public_6d6386c
#undef public_6d6387b
#undef public_6d63886

#pragma init_seg(compiler)
extern "C" void const* const public_6d6385e = __AsmFindLabelExport(&internal_6d63850, 0x6d6385e);
extern "C" void const* const public_6d6386c = __AsmFindLabelExport(&internal_6d63850, 0x6d6386c);
extern "C" void const* const public_6d6387b = __AsmFindLabelExport(&internal_6d63850, 0x6d6387b);
extern "C" void const* const public_6d63886 = __AsmFindLabelExport(&internal_6d63850, 0x6d63886);
