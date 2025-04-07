#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_532d40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0ddb _public_5c0ddb
#define public_5c0de9 _public_5c0de9
#define public_5c0df7 _public_5c0df7
#define public_5c0e02 _public_5c0e02

PROC_DECLARE(0x5c0dd0, internal_5c0dd0, public_5c0dd0);
/* CHUNK of public_543380 */
extern "C" NAKED register_t __cdecl internal_5c0dd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_532d40
        public_5c0ddb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xF4
        jmp public_502d90
        public_5c0de9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x108
        jmp public_420d10
        public_5c0df7 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp public_502d90
        public_5c0e02 : nop
        mov eax, offset public_5fb084
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0dd0)
        ASM_EXPORT_ENTRY_FIRST(0x5c0ddb, public_5c0ddb)
        ASM_EXPORT_ENTRY(0x5c0de9, public_5c0de9)
        ASM_EXPORT_ENTRY(0x5c0df7, public_5c0df7)
        ASM_EXPORT_ENTRY_LAST(0x5c0e02, public_5c0e02)
    }
}

#undef public_5c0ddb
#undef public_5c0de9
#undef public_5c0df7
#undef public_5c0e02

#pragma init_seg(compiler)
extern "C" void const* const public_5c0ddb = __AsmFindLabelExport(&internal_5c0dd0, 0x5c0ddb);
extern "C" void const* const public_5c0de9 = __AsmFindLabelExport(&internal_5c0dd0, 0x5c0de9);
extern "C" void const* const public_5c0df7 = __AsmFindLabelExport(&internal_5c0dd0, 0x5c0df7);
extern "C" void const* const public_5c0e02 = __AsmFindLabelExport(&internal_5c0dd0, 0x5c0e02);
