#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bce18 _public_5bce18
#define public_5bce26 _public_5bce26
#define public_5bce34 _public_5bce34
#define public_5bce42 _public_5bce42

PROC_DECLARE(0x5bce10, internal_5bce10, public_5bce10);
/* CHUNK of public_4a9600 */
extern "C" NAKED register_t __cdecl internal_5bce10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bce18 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x504
        jmp public_4de730
        public_5bce26 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x514
        jmp public_4de730
        public_5bce34 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x524
        jmp public_4de730
        public_5bce42 : nop
        mov eax, offset public_5f70b8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bce10)
        ASM_EXPORT_ENTRY_FIRST(0x5bce18, public_5bce18)
        ASM_EXPORT_ENTRY(0x5bce26, public_5bce26)
        ASM_EXPORT_ENTRY(0x5bce34, public_5bce34)
        ASM_EXPORT_ENTRY_LAST(0x5bce42, public_5bce42)
    }
}

#undef public_5bce18
#undef public_5bce26
#undef public_5bce34
#undef public_5bce42

#pragma init_seg(compiler)
extern "C" void const* const public_5bce18 = __AsmFindLabelExport(&internal_5bce10, 0x5bce18);
extern "C" void const* const public_5bce26 = __AsmFindLabelExport(&internal_5bce10, 0x5bce26);
extern "C" void const* const public_5bce34 = __AsmFindLabelExport(&internal_5bce10, 0x5bce34);
extern "C" void const* const public_5bce42 = __AsmFindLabelExport(&internal_5bce10, 0x5bce42);
