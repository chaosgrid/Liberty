#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3cd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63388 _public_6d63388
#define public_6d6338f _public_6d6338f
#define public_6d63397 _public_6d63397
#define public_6d633a3 _public_6d633a3

PROC_DECLARE(0x6d63370, internal_6d63370, public_6d63370);
/* CHUNK of public_6d4c310 */
extern "C" NAKED register_t __cdecl internal_6d63370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6d63388
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 4
        mov dword ptr ss : [ebp-0x2C], eax
        jmp public_6d6338f
        public_6d63388 : nop
        mov dword ptr ss : [ebp-0x2C], 0
        public_6d6338f : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        jmp public_6d3cd20
        public_6d63397 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp dword ptr ds : [public_6d64b94]
        public_6d633a3 : nop
        mov eax, offset public_6d756bc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63370)
        ASM_EXPORT_ENTRY_FIRST(0x6d63388, public_6d63388)
        ASM_EXPORT_ENTRY(0x6d6338f, public_6d6338f)
        ASM_EXPORT_ENTRY(0x6d63397, public_6d63397)
        ASM_EXPORT_ENTRY_LAST(0x6d633a3, public_6d633a3)
    }
}

#undef public_6d63388
#undef public_6d6338f
#undef public_6d63397
#undef public_6d633a3

#pragma init_seg(compiler)
extern "C" void const* const public_6d63388 = __AsmFindLabelExport(&internal_6d63370, 0x6d63388);
extern "C" void const* const public_6d6338f = __AsmFindLabelExport(&internal_6d63370, 0x6d6338f);
extern "C" void const* const public_6d63397 = __AsmFindLabelExport(&internal_6d63370, 0x6d63397);
extern "C" void const* const public_6d633a3 = __AsmFindLabelExport(&internal_6d63370, 0x6d633a3);
