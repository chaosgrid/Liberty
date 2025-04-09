#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_552c50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1398 _public_5c1398
#define public_5c13a0 _public_5c13a0
#define public_5c13a8 _public_5c13a8
#define public_5c13b3 _public_5c13b3
#define public_5c13bb _public_5c13bb

PROC_DECLARE(0x5c1390, internal_5c1390, public_5c1390);
/* CHUNK of public_552b80 */
extern "C" NAKED register_t __cdecl internal_5c1390()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_420d10
        public_5c1398 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_552c50
        public_5c13a0 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_420d10
        public_5c13a8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp public_552c50
        public_5c13b3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_420d10
        public_5c13bb : nop
        mov eax, offset public_5fb700
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1390)
        ASM_EXPORT_ENTRY_FIRST(0x5c1398, public_5c1398)
        ASM_EXPORT_ENTRY(0x5c13a0, public_5c13a0)
        ASM_EXPORT_ENTRY(0x5c13a8, public_5c13a8)
        ASM_EXPORT_ENTRY(0x5c13b3, public_5c13b3)
        ASM_EXPORT_ENTRY_LAST(0x5c13bb, public_5c13bb)
    }
}

#undef public_5c1398
#undef public_5c13a0
#undef public_5c13a8
#undef public_5c13b3
#undef public_5c13bb

#pragma init_seg(compiler)
extern "C" void const* const public_5c1398 = __AsmFindLabelExport(&internal_5c1390, 0x5c1398);
extern "C" void const* const public_5c13a0 = __AsmFindLabelExport(&internal_5c1390, 0x5c13a0);
extern "C" void const* const public_5c13a8 = __AsmFindLabelExport(&internal_5c1390, 0x5c13a8);
extern "C" void const* const public_5c13b3 = __AsmFindLabelExport(&internal_5c1390, 0x5c13b3);
extern "C" void const* const public_5c13bb = __AsmFindLabelExport(&internal_5c1390, 0x5c13bb);
