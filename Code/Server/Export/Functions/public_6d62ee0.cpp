#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45c60);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62ee8 _public_6d62ee8
#define public_6d62ef7 _public_6d62ef7
#define public_6d62f06 _public_6d62f06
#define public_6d62f15 _public_6d62f15

PROC_DECLARE(0x6d62ee0, internal_6d62ee0, public_6d62ee0);
/* CHUNK of public_6d45cc0 */
extern "C" NAKED register_t __cdecl internal_6d62ee0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d45c60
        public_6d62ee8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x204
        jmp dword ptr ds : [public_6d64b68]
        public_6d62ef7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x214
        jmp dword ptr ds : [public_6d64b68]
        public_6d62f06 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x248
        jmp dword ptr ds : [public_6d643f0]
        public_6d62f15 : nop
        mov eax, offset public_6d7534c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62ee0)
        ASM_EXPORT_ENTRY_FIRST(0x6d62ee8, public_6d62ee8)
        ASM_EXPORT_ENTRY(0x6d62ef7, public_6d62ef7)
        ASM_EXPORT_ENTRY(0x6d62f06, public_6d62f06)
        ASM_EXPORT_ENTRY_LAST(0x6d62f15, public_6d62f15)
    }
}

#undef public_6d62ee8
#undef public_6d62ef7
#undef public_6d62f06
#undef public_6d62f15

#pragma init_seg(compiler)
extern "C" void const* const public_6d62ee8 = __AsmFindLabelExport(&internal_6d62ee0, 0x6d62ee8);
extern "C" void const* const public_6d62ef7 = __AsmFindLabelExport(&internal_6d62ee0, 0x6d62ef7);
extern "C" void const* const public_6d62f06 = __AsmFindLabelExport(&internal_6d62ee0, 0x6d62f06);
extern "C" void const* const public_6d62f15 = __AsmFindLabelExport(&internal_6d62ee0, 0x6d62f15);
