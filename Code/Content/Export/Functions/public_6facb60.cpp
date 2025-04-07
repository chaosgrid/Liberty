#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f02790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facb6c _public_6facb6c
#define public_6facb77 _public_6facb77
#define public_6facb82 _public_6facb82
#define public_6facb8e _public_6facb8e
#define public_6facb9a _public_6facb9a

PROC_DECLARE(0x6facb60, internal_6facb60, public_6facb60);
/* CHUNK of public_6f01d70 */
extern "C" NAKED register_t __cdecl internal_6facb60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6facb6c : nop
        lea ecx, ss:[ebp-0x1584]
        jmp public_6f02790
        public_6facb77 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6facb82 : nop
        mov ecx, dword ptr ss : [ebp-0x158C]
        jmp dword ptr ds : [public_6fb330c]
        public_6facb8e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6facb9a : nop
        mov eax, offset public_6fc182c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facb60)
        ASM_EXPORT_ENTRY_FIRST(0x6facb6c, public_6facb6c)
        ASM_EXPORT_ENTRY(0x6facb77, public_6facb77)
        ASM_EXPORT_ENTRY(0x6facb82, public_6facb82)
        ASM_EXPORT_ENTRY(0x6facb8e, public_6facb8e)
        ASM_EXPORT_ENTRY_LAST(0x6facb9a, public_6facb9a)
    }
}

#undef public_6facb6c
#undef public_6facb77
#undef public_6facb82
#undef public_6facb8e
#undef public_6facb9a

#pragma init_seg(compiler)
extern "C" void const* const public_6facb6c = __AsmFindLabelExport(&internal_6facb60, 0x6facb6c);
extern "C" void const* const public_6facb77 = __AsmFindLabelExport(&internal_6facb60, 0x6facb77);
extern "C" void const* const public_6facb82 = __AsmFindLabelExport(&internal_6facb60, 0x6facb82);
extern "C" void const* const public_6facb8e = __AsmFindLabelExport(&internal_6facb60, 0x6facb8e);
extern "C" void const* const public_6facb9a = __AsmFindLabelExport(&internal_6facb60, 0x6facb9a);
