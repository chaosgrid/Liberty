#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6120c _public_6d6120c
#define public_6d61217 _public_6d61217
#define public_6d61223 _public_6d61223
#define public_6d6122f _public_6d6122f

PROC_DECLARE(0x6d61200, internal_6d61200, public_6d61200);
/* CHUNK of public_6d06ed0 */
extern "C" NAKED register_t __cdecl internal_6d61200()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d644e0]
        public_6d6120c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6cfb030
        public_6d61217 : nop
        mov ecx, dword ptr ss : [ebp-0x1680]
        jmp dword ptr ds : [public_6d64b94]
        public_6d61223 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d64b94]
        public_6d6122f : nop
        mov eax, offset public_6d71dc0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61200)
        ASM_EXPORT_ENTRY_FIRST(0x6d6120c, public_6d6120c)
        ASM_EXPORT_ENTRY(0x6d61217, public_6d61217)
        ASM_EXPORT_ENTRY(0x6d61223, public_6d61223)
        ASM_EXPORT_ENTRY_LAST(0x6d6122f, public_6d6122f)
    }
}

#undef public_6d6120c
#undef public_6d61217
#undef public_6d61223
#undef public_6d6122f

#pragma init_seg(compiler)
extern "C" void const* const public_6d6120c = __AsmFindLabelExport(&internal_6d61200, 0x6d6120c);
extern "C" void const* const public_6d61217 = __AsmFindLabelExport(&internal_6d61200, 0x6d61217);
extern "C" void const* const public_6d61223 = __AsmFindLabelExport(&internal_6d61200, 0x6d61223);
extern "C" void const* const public_6d6122f = __AsmFindLabelExport(&internal_6d61200, 0x6d6122f);
