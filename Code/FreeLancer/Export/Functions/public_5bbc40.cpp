#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbc4c _public_5bbc4c
#define public_5bbc58 _public_5bbc58
#define public_5bbc63 _public_5bbc63
#define public_5bbc6e _public_5bbc6e

PROC_DECLARE(0x5bbc40, internal_5bbc40, public_5bbc40);
/* CHUNK of public_4754a0 */
extern "C" NAKED register_t __cdecl internal_5bbc40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x22C]
        jmp dword ptr ds : [public_5c62c4]
        public_5bbc4c : nop
        lea ecx, ss:[ebp-0x21C]
        jmp dword ptr ds : [public_5c62b4]
        public_5bbc58 : nop
        lea ecx, ss:[ebp-0x244]
        jmp public_45eeb0
        public_5bbc63 : nop
        lea ecx, ss:[ebp-0x21C]
        jmp public_444e20
        public_5bbc6e : nop
        mov eax, offset public_5f5ff8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbc40)
        ASM_EXPORT_ENTRY_FIRST(0x5bbc4c, public_5bbc4c)
        ASM_EXPORT_ENTRY(0x5bbc58, public_5bbc58)
        ASM_EXPORT_ENTRY(0x5bbc63, public_5bbc63)
        ASM_EXPORT_ENTRY_LAST(0x5bbc6e, public_5bbc6e)
    }
}

#undef public_5bbc4c
#undef public_5bbc58
#undef public_5bbc63
#undef public_5bbc6e

#pragma init_seg(compiler)
extern "C" void const* const public_5bbc4c = __AsmFindLabelExport(&internal_5bbc40, 0x5bbc4c);
extern "C" void const* const public_5bbc58 = __AsmFindLabelExport(&internal_5bbc40, 0x5bbc58);
extern "C" void const* const public_5bbc63 = __AsmFindLabelExport(&internal_5bbc40, 0x5bbc63);
extern "C" void const* const public_5bbc6e = __AsmFindLabelExport(&internal_5bbc40, 0x5bbc6e);
