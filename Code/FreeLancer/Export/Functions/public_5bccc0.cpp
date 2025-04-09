#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bccc8 _public_5bccc8
#define public_5bcce2 _public_5bcce2
#define public_5bcce9 _public_5bcce9
#define public_5bccf1 _public_5bccf1

PROC_DECLARE(0x5bccc0, internal_5bccc0, public_5bccc0);
/* CHUNK of public_4a6b20 */
extern "C" NAKED register_t __cdecl internal_5bccc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bccc8 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5bcce2
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x32C
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_5bcce9
        public_5bcce2 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5bcce9 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_576010
        public_5bccf1 : nop
        mov eax, offset public_5f6f84
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bccc0)
        ASM_EXPORT_ENTRY_FIRST(0x5bccc8, public_5bccc8)
        ASM_EXPORT_ENTRY(0x5bcce2, public_5bcce2)
        ASM_EXPORT_ENTRY(0x5bcce9, public_5bcce9)
        ASM_EXPORT_ENTRY_LAST(0x5bccf1, public_5bccf1)
    }
}

#undef public_5bccc8
#undef public_5bcce2
#undef public_5bcce9
#undef public_5bccf1

#pragma init_seg(compiler)
extern "C" void const* const public_5bccc8 = __AsmFindLabelExport(&internal_5bccc0, 0x5bccc8);
extern "C" void const* const public_5bcce2 = __AsmFindLabelExport(&internal_5bccc0, 0x5bcce2);
extern "C" void const* const public_5bcce9 = __AsmFindLabelExport(&internal_5bccc0, 0x5bcce9);
extern "C" void const* const public_5bccf1 = __AsmFindLabelExport(&internal_5bccc0, 0x5bccf1);
