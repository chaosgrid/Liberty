#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d615ab _public_6d615ab
#define public_6d615b6 _public_6d615b6
#define public_6d615c2 _public_6d615c2
#define public_6d615cd _public_6d615cd

PROC_DECLARE(0x6d615a0, internal_6d615a0, public_6d615a0);
/* CHUNK of public_6d0b260 */
extern "C" NAKED register_t __cdecl internal_6d615a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x15C]
        jmp public_6d0b7e0
        public_6d615ab : nop
        lea ecx, ss:[ebp-0x13C]
        jmp public_6d0b7e0
        public_6d615b6 : nop
        lea ecx, ss:[ebp-0x12C]
        jmp dword ptr ds : [public_6d641e4]
        public_6d615c2 : nop
        lea ecx, ss:[ebp-0x12C]
        jmp public_6d0b7e0
        public_6d615cd : nop
        mov eax, offset public_6d721e4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d615a0)
        ASM_EXPORT_ENTRY_FIRST(0x6d615ab, public_6d615ab)
        ASM_EXPORT_ENTRY(0x6d615b6, public_6d615b6)
        ASM_EXPORT_ENTRY(0x6d615c2, public_6d615c2)
        ASM_EXPORT_ENTRY_LAST(0x6d615cd, public_6d615cd)
    }
}

#undef public_6d615ab
#undef public_6d615b6
#undef public_6d615c2
#undef public_6d615cd

#pragma init_seg(compiler)
extern "C" void const* const public_6d615ab = __AsmFindLabelExport(&internal_6d615a0, 0x6d615ab);
extern "C" void const* const public_6d615b6 = __AsmFindLabelExport(&internal_6d615a0, 0x6d615b6);
extern "C" void const* const public_6d615c2 = __AsmFindLabelExport(&internal_6d615a0, 0x6d615c2);
extern "C" void const* const public_6d615cd = __AsmFindLabelExport(&internal_6d615a0, 0x6d615cd);
