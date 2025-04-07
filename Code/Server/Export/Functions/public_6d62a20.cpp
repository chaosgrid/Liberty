#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62a31 _public_6d62a31
#define public_6d62a39 _public_6d62a39
#define public_6d62a4a _public_6d62a4a
#define public_6d62a52 _public_6d62a52

PROC_DECLARE(0x6d62a20, internal_6d62a20, public_6d62a20);
/* CHUNK of public_6d26350 */
extern "C" NAKED register_t __cdecl internal_6d62a20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d62a31 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_6d209f0
        public_6d62a39 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d62a4a : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_6d209f0
        public_6d62a52 : nop
        mov eax, offset public_6d73aa4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62a20)
        ASM_EXPORT_ENTRY_FIRST(0x6d62a31, public_6d62a31)
        ASM_EXPORT_ENTRY(0x6d62a39, public_6d62a39)
        ASM_EXPORT_ENTRY(0x6d62a4a, public_6d62a4a)
        ASM_EXPORT_ENTRY_LAST(0x6d62a52, public_6d62a52)
    }
}

#undef public_6d62a31
#undef public_6d62a39
#undef public_6d62a4a
#undef public_6d62a52

#pragma init_seg(compiler)
extern "C" void const* const public_6d62a31 = __AsmFindLabelExport(&internal_6d62a20, 0x6d62a31);
extern "C" void const* const public_6d62a39 = __AsmFindLabelExport(&internal_6d62a20, 0x6d62a39);
extern "C" void const* const public_6d62a4a = __AsmFindLabelExport(&internal_6d62a20, 0x6d62a4a);
extern "C" void const* const public_6d62a52 = __AsmFindLabelExport(&internal_6d62a20, 0x6d62a52);
