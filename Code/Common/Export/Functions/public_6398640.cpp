#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639864b _public_639864b
#define public_6398656 _public_6398656
#define public_6398661 _public_6398661
#define public_639866c _public_639866c
#define public_6398677 _public_6398677

PROC_DECLARE(0x6398640, internal_6398640, public_6398640);
/* CHUNK of public_6369e70 */
extern "C" NAKED register_t __cdecl internal_6398640()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x48]
        add ecx, 0x18
        jmp public_63449d0
        public_639864b : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        add ecx, 0x20
        jmp public_63449d0
        public_6398656 : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        add ecx, 0x28
        jmp public_63449d0
        public_6398661 : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        add ecx, 0x5C
        jmp public_63449d0
        public_639866c : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        add ecx, 0x64
        jmp public_63449d0
        public_6398677 : nop
        mov eax, offset public_63b2c60
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398640)
        ASM_EXPORT_ENTRY_FIRST(0x639864b, public_639864b)
        ASM_EXPORT_ENTRY(0x6398656, public_6398656)
        ASM_EXPORT_ENTRY(0x6398661, public_6398661)
        ASM_EXPORT_ENTRY(0x639866c, public_639866c)
        ASM_EXPORT_ENTRY_LAST(0x6398677, public_6398677)
    }
}

#undef public_639864b
#undef public_6398656
#undef public_6398661
#undef public_639866c
#undef public_6398677

#pragma init_seg(compiler)
extern "C" void const* const public_639864b = __AsmFindLabelExport(&internal_6398640, 0x639864b);
extern "C" void const* const public_6398656 = __AsmFindLabelExport(&internal_6398640, 0x6398656);
extern "C" void const* const public_6398661 = __AsmFindLabelExport(&internal_6398640, 0x6398661);
extern "C" void const* const public_639866c = __AsmFindLabelExport(&internal_6398640, 0x639866c);
extern "C" void const* const public_6398677 = __AsmFindLabelExport(&internal_6398640, 0x6398677);
