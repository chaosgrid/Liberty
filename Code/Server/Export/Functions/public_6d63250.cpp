#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d48c20);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6325c _public_6d6325c
#define public_6d63268 _public_6d63268
#define public_6d63273 _public_6d63273
#define public_6d6327f _public_6d6327f
#define public_6d6328b _public_6d6328b
#define public_6d63296 _public_6d63296
#define public_6d632a2 _public_6d632a2
#define public_6d632ae _public_6d632ae

PROC_DECLARE(0x6d63250, internal_6d63250, public_6d63250);
/* CHUNK of public_6d4a5d0 */
extern "C" NAKED register_t __cdecl internal_6d63250()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1898]
        jmp dword ptr ds : [public_6d64694]
        public_6d6325c : nop
        lea ecx, ss:[ebp-0x18B0]
        jmp dword ptr ds : [public_6d64694]
        public_6d63268 : nop
        lea ecx, ss:[ebp-0x18D0]
        jmp public_6d48c20
        public_6d63273 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d644e0]
        public_6d6327f : nop
        lea ecx, ss:[ebp-0x18E8]
        jmp dword ptr ds : [public_6d64694]
        public_6d6328b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6cfb030
        public_6d63296 : nop
        mov ecx, dword ptr ss : [ebp-0x190C]
        jmp dword ptr ds : [public_6d64b94]
        public_6d632a2 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d64b94]
        public_6d632ae : nop
        mov eax, offset public_6d75624
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63250)
        ASM_EXPORT_ENTRY_FIRST(0x6d6325c, public_6d6325c)
        ASM_EXPORT_ENTRY(0x6d63268, public_6d63268)
        ASM_EXPORT_ENTRY(0x6d63273, public_6d63273)
        ASM_EXPORT_ENTRY(0x6d6327f, public_6d6327f)
        ASM_EXPORT_ENTRY(0x6d6328b, public_6d6328b)
        ASM_EXPORT_ENTRY(0x6d63296, public_6d63296)
        ASM_EXPORT_ENTRY(0x6d632a2, public_6d632a2)
        ASM_EXPORT_ENTRY_LAST(0x6d632ae, public_6d632ae)
    }
}

#undef public_6d6325c
#undef public_6d63268
#undef public_6d63273
#undef public_6d6327f
#undef public_6d6328b
#undef public_6d63296
#undef public_6d632a2
#undef public_6d632ae

#pragma init_seg(compiler)
extern "C" void const* const public_6d6325c = __AsmFindLabelExport(&internal_6d63250, 0x6d6325c);
extern "C" void const* const public_6d63268 = __AsmFindLabelExport(&internal_6d63250, 0x6d63268);
extern "C" void const* const public_6d63273 = __AsmFindLabelExport(&internal_6d63250, 0x6d63273);
extern "C" void const* const public_6d6327f = __AsmFindLabelExport(&internal_6d63250, 0x6d6327f);
extern "C" void const* const public_6d6328b = __AsmFindLabelExport(&internal_6d63250, 0x6d6328b);
extern "C" void const* const public_6d63296 = __AsmFindLabelExport(&internal_6d63250, 0x6d63296);
extern "C" void const* const public_6d632a2 = __AsmFindLabelExport(&internal_6d63250, 0x6d632a2);
extern "C" void const* const public_6d632ae = __AsmFindLabelExport(&internal_6d63250, 0x6d632ae);
