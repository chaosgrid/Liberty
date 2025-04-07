#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_62346a0);
CLANG_FORWARD_PROC_SYMBOL(public_62346b0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249c6b _public_6249c6b
#define public_6249c73 _public_6249c73
#define public_6249c7b _public_6249c7b
#define public_6249c89 _public_6249c89
#define public_6249c91 _public_6249c91
#define public_6249c99 _public_6249c99
#define public_6249ca1 _public_6249ca1

PROC_DECLARE(0x6249c60, internal_6249c60, public_6249c60);
/* CHUNK of public_6234440 */
extern "C" NAKED register_t __cdecl internal_6249c60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6249c6b : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_6249c73 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620ce80
        public_6249c7b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xB4
        jmp public_620b700
        public_6249c89 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62346b0
        public_6249c91 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62346a0
        public_6249c99 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620b710
        public_6249ca1 : nop
        mov eax, offset public_6252cbc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249c60)
        ASM_EXPORT_ENTRY_FIRST(0x6249c6b, public_6249c6b)
        ASM_EXPORT_ENTRY(0x6249c73, public_6249c73)
        ASM_EXPORT_ENTRY(0x6249c7b, public_6249c7b)
        ASM_EXPORT_ENTRY(0x6249c89, public_6249c89)
        ASM_EXPORT_ENTRY(0x6249c91, public_6249c91)
        ASM_EXPORT_ENTRY(0x6249c99, public_6249c99)
        ASM_EXPORT_ENTRY_LAST(0x6249ca1, public_6249ca1)
    }
}

#undef public_6249c6b
#undef public_6249c73
#undef public_6249c7b
#undef public_6249c89
#undef public_6249c91
#undef public_6249c99
#undef public_6249ca1

#pragma init_seg(compiler)
extern "C" void const* const public_6249c6b = __AsmFindLabelExport(&internal_6249c60, 0x6249c6b);
extern "C" void const* const public_6249c73 = __AsmFindLabelExport(&internal_6249c60, 0x6249c73);
extern "C" void const* const public_6249c7b = __AsmFindLabelExport(&internal_6249c60, 0x6249c7b);
extern "C" void const* const public_6249c89 = __AsmFindLabelExport(&internal_6249c60, 0x6249c89);
extern "C" void const* const public_6249c91 = __AsmFindLabelExport(&internal_6249c60, 0x6249c91);
extern "C" void const* const public_6249c99 = __AsmFindLabelExport(&internal_6249c60, 0x6249c99);
extern "C" void const* const public_6249ca1 = __AsmFindLabelExport(&internal_6249c60, 0x6249ca1);
