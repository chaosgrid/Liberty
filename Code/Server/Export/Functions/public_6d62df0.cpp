#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62dfc _public_6d62dfc
#define public_6d62e07 _public_6d62e07
#define public_6d62e13 _public_6d62e13
#define public_6d62e1f _public_6d62e1f

PROC_DECLARE(0x6d62df0, internal_6d62df0, public_6d62df0);
/* CHUNK of public_6d44ca0 */
extern "C" NAKED register_t __cdecl internal_6d62df0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x217C]
        jmp dword ptr ds : [public_6d644e0]
        public_6d62dfc : nop
        lea ecx, ss:[ebp-0x217C]
        jmp public_6cfb030
        public_6d62e07 : nop
        mov ecx, dword ptr ss : [ebp-0x2288]
        jmp dword ptr ds : [public_6d64b94]
        public_6d62e13 : nop
        lea ecx, ss:[ebp-0x217C]
        jmp dword ptr ds : [public_6d64b94]
        public_6d62e1f : nop
        mov eax, offset public_6d75214
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62df0)
        ASM_EXPORT_ENTRY_FIRST(0x6d62dfc, public_6d62dfc)
        ASM_EXPORT_ENTRY(0x6d62e07, public_6d62e07)
        ASM_EXPORT_ENTRY(0x6d62e13, public_6d62e13)
        ASM_EXPORT_ENTRY_LAST(0x6d62e1f, public_6d62e1f)
    }
}

#undef public_6d62dfc
#undef public_6d62e07
#undef public_6d62e13
#undef public_6d62e1f

#pragma init_seg(compiler)
extern "C" void const* const public_6d62dfc = __AsmFindLabelExport(&internal_6d62df0, 0x6d62dfc);
extern "C" void const* const public_6d62e07 = __AsmFindLabelExport(&internal_6d62df0, 0x6d62e07);
extern "C" void const* const public_6d62e13 = __AsmFindLabelExport(&internal_6d62df0, 0x6d62e13);
extern "C" void const* const public_6d62e1f = __AsmFindLabelExport(&internal_6d62df0, 0x6d62e1f);
