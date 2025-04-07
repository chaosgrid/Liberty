#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf0540);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a080);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6150e _public_6d6150e
#define public_6d61519 _public_6d61519
#define public_6d61524 _public_6d61524
#define public_6d61530 _public_6d61530
#define public_6d6153c _public_6d6153c
#define public_6d61548 _public_6d61548

PROC_DECLARE(0x6d61500, internal_6d61500, public_6d61500);
/* CHUNK of public_6d0a880 */
extern "C" NAKED register_t __cdecl internal_6d61500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x21C]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d6150e : nop
        lea ecx, ss:[ebp-0x208]
        jmp public_6cf0540
        public_6d61519 : nop
        lea ecx, ss:[ebp-0x128]
        jmp public_6d0a080
        public_6d61524 : nop
        lea ecx, ss:[ebp-0x8C]
        jmp dword ptr ds : [public_6d64390]
        public_6d61530 : nop
        lea ecx, ss:[ebp-0x198]
        jmp dword ptr ds : [public_6d64390]
        public_6d6153c : nop
        lea ecx, ss:[ebp-0x188]
        jmp dword ptr ds : [public_6d6438c]
        public_6d61548 : nop
        mov eax, offset public_6d72150
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61500)
        ASM_EXPORT_ENTRY_FIRST(0x6d6150e, public_6d6150e)
        ASM_EXPORT_ENTRY(0x6d61519, public_6d61519)
        ASM_EXPORT_ENTRY(0x6d61524, public_6d61524)
        ASM_EXPORT_ENTRY(0x6d61530, public_6d61530)
        ASM_EXPORT_ENTRY(0x6d6153c, public_6d6153c)
        ASM_EXPORT_ENTRY_LAST(0x6d61548, public_6d61548)
    }
}

#undef public_6d6150e
#undef public_6d61519
#undef public_6d61524
#undef public_6d61530
#undef public_6d6153c
#undef public_6d61548

#pragma init_seg(compiler)
extern "C" void const* const public_6d6150e = __AsmFindLabelExport(&internal_6d61500, 0x6d6150e);
extern "C" void const* const public_6d61519 = __AsmFindLabelExport(&internal_6d61500, 0x6d61519);
extern "C" void const* const public_6d61524 = __AsmFindLabelExport(&internal_6d61500, 0x6d61524);
extern "C" void const* const public_6d61530 = __AsmFindLabelExport(&internal_6d61500, 0x6d61530);
extern "C" void const* const public_6d6153c = __AsmFindLabelExport(&internal_6d61500, 0x6d6153c);
extern "C" void const* const public_6d61548 = __AsmFindLabelExport(&internal_6d61500, 0x6d61548);
