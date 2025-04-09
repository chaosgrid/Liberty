#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5a1af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd4d8 _public_5bd4d8
#define public_5bd4e3 _public_5bd4e3
#define public_5bd4eb _public_5bd4eb
#define public_5bd4f6 _public_5bd4f6

PROC_DECLARE(0x5bd4d0, internal_5bd4d0, public_5bd4d0);
/* CHUNK of public_4bd690 */
extern "C" NAKED register_t __cdecl internal_5bd4d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_5a1af0
        public_5bd4d8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_444e20
        public_5bd4e3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_444e20
        public_5bd4eb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_445d70
        public_5bd4f6 : nop
        mov eax, offset public_5f7894
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd4d0)
        ASM_EXPORT_ENTRY_FIRST(0x5bd4d8, public_5bd4d8)
        ASM_EXPORT_ENTRY(0x5bd4e3, public_5bd4e3)
        ASM_EXPORT_ENTRY(0x5bd4eb, public_5bd4eb)
        ASM_EXPORT_ENTRY_LAST(0x5bd4f6, public_5bd4f6)
    }
}

#undef public_5bd4d8
#undef public_5bd4e3
#undef public_5bd4eb
#undef public_5bd4f6

#pragma init_seg(compiler)
extern "C" void const* const public_5bd4d8 = __AsmFindLabelExport(&internal_5bd4d0, 0x5bd4d8);
extern "C" void const* const public_5bd4e3 = __AsmFindLabelExport(&internal_5bd4d0, 0x5bd4e3);
extern "C" void const* const public_5bd4eb = __AsmFindLabelExport(&internal_5bd4d0, 0x5bd4eb);
extern "C" void const* const public_5bd4f6 = __AsmFindLabelExport(&internal_5bd4d0, 0x5bd4f6);
