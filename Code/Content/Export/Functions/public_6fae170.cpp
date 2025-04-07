#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae178 _public_6fae178
#define public_6fae180 _public_6fae180
#define public_6fae188 _public_6fae188
#define public_6fae190 _public_6fae190
#define public_6fae19b _public_6fae19b

PROC_DECLARE(0x6fae170, internal_6fae170, public_6fae170);
/* CHUNK of public_6f23db0 */
extern "C" NAKED register_t __cdecl internal_6fae170()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x64]
        jmp public_6f15350
        public_6fae178 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6fae180 : nop
        lea ecx, ss:[ebp-0x48]
        jmp public_6ecfa90
        public_6fae188 : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_6f28e10
        public_6fae190 : nop
        lea ecx, ss:[ebp-0xA0]
        jmp public_6ed2c20
        public_6fae19b : nop
        mov eax, offset public_6fc30f4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae170)
        ASM_EXPORT_ENTRY_FIRST(0x6fae178, public_6fae178)
        ASM_EXPORT_ENTRY(0x6fae180, public_6fae180)
        ASM_EXPORT_ENTRY(0x6fae188, public_6fae188)
        ASM_EXPORT_ENTRY(0x6fae190, public_6fae190)
        ASM_EXPORT_ENTRY_LAST(0x6fae19b, public_6fae19b)
    }
}

#undef public_6fae178
#undef public_6fae180
#undef public_6fae188
#undef public_6fae190
#undef public_6fae19b

#pragma init_seg(compiler)
extern "C" void const* const public_6fae178 = __AsmFindLabelExport(&internal_6fae170, 0x6fae178);
extern "C" void const* const public_6fae180 = __AsmFindLabelExport(&internal_6fae170, 0x6fae180);
extern "C" void const* const public_6fae188 = __AsmFindLabelExport(&internal_6fae170, 0x6fae188);
extern "C" void const* const public_6fae190 = __AsmFindLabelExport(&internal_6fae170, 0x6fae190);
extern "C" void const* const public_6fae19b = __AsmFindLabelExport(&internal_6fae170, 0x6fae19b);
