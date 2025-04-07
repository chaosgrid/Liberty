#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bba88 _public_5bba88
#define public_5bbaa2 _public_5bbaa2
#define public_5bbaa9 _public_5bbaa9
#define public_5bbab1 _public_5bbab1

PROC_DECLARE(0x5bba80, internal_5bba80, public_5bba80);
/* CHUNK of public_4721a0 */
extern "C" NAKED register_t __cdecl internal_5bba80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bba88 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5bbaa2
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x32C
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_5bbaa9
        public_5bbaa2 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5bbaa9 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_576010
        public_5bbab1 : nop
        mov eax, offset public_5f5dcc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bba80)
        ASM_EXPORT_ENTRY_FIRST(0x5bba88, public_5bba88)
        ASM_EXPORT_ENTRY(0x5bbaa2, public_5bbaa2)
        ASM_EXPORT_ENTRY(0x5bbaa9, public_5bbaa9)
        ASM_EXPORT_ENTRY_LAST(0x5bbab1, public_5bbab1)
    }
}

#undef public_5bba88
#undef public_5bbaa2
#undef public_5bbaa9
#undef public_5bbab1

#pragma init_seg(compiler)
extern "C" void const* const public_5bba88 = __AsmFindLabelExport(&internal_5bba80, 0x5bba88);
extern "C" void const* const public_5bbaa2 = __AsmFindLabelExport(&internal_5bba80, 0x5bbaa2);
extern "C" void const* const public_5bbaa9 = __AsmFindLabelExport(&internal_5bba80, 0x5bbaa9);
extern "C" void const* const public_5bbab1 = __AsmFindLabelExport(&internal_5bba80, 0x5bbab1);
