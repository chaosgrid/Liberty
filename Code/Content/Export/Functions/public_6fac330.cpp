#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4e60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac339 _public_6fac339
#define public_6fac341 _public_6fac341
#define public_6fac34a _public_6fac34a

PROC_DECLARE(0x6fac330, internal_6fac330, public_6fac330);
/* CHUNK of public_6ef4cf0 */
extern "C" NAKED register_t __cdecl internal_6fac330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp dword ptr ds : [public_6fb3034]
        public_6fac339 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_6ef4e60
        public_6fac341 : nop
        lea ecx, ss:[ebp-0x44]
        jmp dword ptr ds : [public_6fb3034]
        public_6fac34a : nop
        mov eax, offset public_6fc0fb4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac330)
        ASM_EXPORT_ENTRY_FIRST(0x6fac339, public_6fac339)
        ASM_EXPORT_ENTRY(0x6fac341, public_6fac341)
        ASM_EXPORT_ENTRY_LAST(0x6fac34a, public_6fac34a)
    }
}

#undef public_6fac339
#undef public_6fac341
#undef public_6fac34a

#pragma init_seg(compiler)
extern "C" void const* const public_6fac339 = __AsmFindLabelExport(&internal_6fac330, 0x6fac339);
extern "C" void const* const public_6fac341 = __AsmFindLabelExport(&internal_6fac330, 0x6fac341);
extern "C" void const* const public_6fac34a = __AsmFindLabelExport(&internal_6fac330, 0x6fac34a);
