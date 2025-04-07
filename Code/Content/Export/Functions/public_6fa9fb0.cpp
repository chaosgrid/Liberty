#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea90f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9170);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9240);
CLANG_FORWARD_PROC_SYMBOL(public_6eacb50);
CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9fc1 _public_6fa9fc1
#define public_6fa9fcc _public_6fa9fcc
#define public_6fa9fd7 _public_6fa9fd7
#define public_6fa9fe5 _public_6fa9fe5
#define public_6fa9ff3 _public_6fa9ff3

PROC_DECLARE(0x6fa9fb0, internal_6fa9fb0, public_6fa9fb0);
/* CHUNK of public_6eb1cd0 */
extern "C" NAKED register_t __cdecl internal_6fa9fb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fa9fc1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x58
        jmp public_6ea90f0
        public_6fa9fcc : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp public_6ea9170
        public_6fa9fd7 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x84
        jmp public_6ea9240
        public_6fa9fe5 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x98
        jmp public_6eacb50
        public_6fa9ff3 : nop
        mov eax, offset public_6fbe3a0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9fb0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9fc1, public_6fa9fc1)
        ASM_EXPORT_ENTRY(0x6fa9fcc, public_6fa9fcc)
        ASM_EXPORT_ENTRY(0x6fa9fd7, public_6fa9fd7)
        ASM_EXPORT_ENTRY(0x6fa9fe5, public_6fa9fe5)
        ASM_EXPORT_ENTRY_LAST(0x6fa9ff3, public_6fa9ff3)
    }
}

#undef public_6fa9fc1
#undef public_6fa9fcc
#undef public_6fa9fd7
#undef public_6fa9fe5
#undef public_6fa9ff3

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9fc1 = __AsmFindLabelExport(&internal_6fa9fb0, 0x6fa9fc1);
extern "C" void const* const public_6fa9fcc = __AsmFindLabelExport(&internal_6fa9fb0, 0x6fa9fcc);
extern "C" void const* const public_6fa9fd7 = __AsmFindLabelExport(&internal_6fa9fb0, 0x6fa9fd7);
extern "C" void const* const public_6fa9fe5 = __AsmFindLabelExport(&internal_6fa9fb0, 0x6fa9fe5);
extern "C" void const* const public_6fa9ff3 = __AsmFindLabelExport(&internal_6fa9fb0, 0x6fa9ff3);
