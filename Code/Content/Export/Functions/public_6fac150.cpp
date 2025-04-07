#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3e30);
CLANG_FORWARD_PROC_SYMBOL(public_6ef65a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac15b _public_6fac15b
#define public_6fac164 _public_6fac164
#define public_6fac16c _public_6fac16c
#define public_6fac174 _public_6fac174
#define public_6fac17f _public_6fac17f
#define public_6fac18a _public_6fac18a

PROC_DECLARE(0x6fac150, internal_6fac150, public_6fac150);
/* CHUNK of public_6ef3ab0 */
extern "C" NAKED register_t __cdecl internal_6fac150()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x8C]
        jmp public_6ef3e30
        public_6fac15b : nop
        lea ecx, ss:[ebp-0x78]
        jmp dword ptr ds : [public_6fb3138]
        public_6fac164 : nop
        lea ecx, ss:[ebp-0x64]
        jmp public_6ef65a0
        public_6fac16c : nop
        lea ecx, ss:[ebp-0x48]
        jmp public_6eec8d0
        public_6fac174 : nop
        lea ecx, ss:[ebp-0xB8]
        jmp public_6eec8d0
        public_6fac17f : nop
        lea ecx, ss:[ebp-0xA0]
        jmp public_6eec8d0
        public_6fac18a : nop
        mov eax, offset public_6fc0dd4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac150)
        ASM_EXPORT_ENTRY_FIRST(0x6fac15b, public_6fac15b)
        ASM_EXPORT_ENTRY(0x6fac164, public_6fac164)
        ASM_EXPORT_ENTRY(0x6fac16c, public_6fac16c)
        ASM_EXPORT_ENTRY(0x6fac174, public_6fac174)
        ASM_EXPORT_ENTRY(0x6fac17f, public_6fac17f)
        ASM_EXPORT_ENTRY_LAST(0x6fac18a, public_6fac18a)
    }
}

#undef public_6fac15b
#undef public_6fac164
#undef public_6fac16c
#undef public_6fac174
#undef public_6fac17f
#undef public_6fac18a

#pragma init_seg(compiler)
extern "C" void const* const public_6fac15b = __AsmFindLabelExport(&internal_6fac150, 0x6fac15b);
extern "C" void const* const public_6fac164 = __AsmFindLabelExport(&internal_6fac150, 0x6fac164);
extern "C" void const* const public_6fac16c = __AsmFindLabelExport(&internal_6fac150, 0x6fac16c);
extern "C" void const* const public_6fac174 = __AsmFindLabelExport(&internal_6fac150, 0x6fac174);
extern "C" void const* const public_6fac17f = __AsmFindLabelExport(&internal_6fac150, 0x6fac17f);
extern "C" void const* const public_6fac18a = __AsmFindLabelExport(&internal_6fac150, 0x6fac18a);
