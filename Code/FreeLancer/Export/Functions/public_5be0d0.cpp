#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be0d9 _public_5be0d9
#define public_5be0e4 _public_5be0e4
#define public_5be0ec _public_5be0ec
#define public_5be0f7 _public_5be0f7

PROC_DECLARE(0x5be0d0, internal_5be0d0, public_5be0d0);
/* CHUNK of public_4d5bd0 */
extern "C" NAKED register_t __cdecl internal_5be0d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0xC]
        jmp dword ptr ds : [public_5c62a4]
        public_5be0d9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_5154f0
        public_5be0e4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4c8630
        public_5be0ec : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x38
        jmp public_59fa50
        public_5be0f7 : nop
        mov eax, offset public_5f847c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be0d0)
        ASM_EXPORT_ENTRY_FIRST(0x5be0d9, public_5be0d9)
        ASM_EXPORT_ENTRY(0x5be0e4, public_5be0e4)
        ASM_EXPORT_ENTRY(0x5be0ec, public_5be0ec)
        ASM_EXPORT_ENTRY_LAST(0x5be0f7, public_5be0f7)
    }
}

#undef public_5be0d9
#undef public_5be0e4
#undef public_5be0ec
#undef public_5be0f7

#pragma init_seg(compiler)
extern "C" void const* const public_5be0d9 = __AsmFindLabelExport(&internal_5be0d0, 0x5be0d9);
extern "C" void const* const public_5be0e4 = __AsmFindLabelExport(&internal_5be0d0, 0x5be0e4);
extern "C" void const* const public_5be0ec = __AsmFindLabelExport(&internal_5be0d0, 0x5be0ec);
extern "C" void const* const public_5be0f7 = __AsmFindLabelExport(&internal_5be0d0, 0x5be0f7);
