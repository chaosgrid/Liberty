#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d29370);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6208b _public_6d6208b
#define public_6d62097 _public_6d62097
#define public_6d620a3 _public_6d620a3
#define public_6d620ae _public_6d620ae
#define public_6d620b9 _public_6d620b9
#define public_6d620c4 _public_6d620c4

PROC_DECLARE(0x6d62080, internal_6d62080, public_6d62080);
/* CHUNK of public_6d1ae60 */
extern "C" NAKED register_t __cdecl internal_6d62080()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp public_6d1b6f0
        public_6d6208b : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x28
        jmp dword ptr ds : [public_6d64b68]
        public_6d62097 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x38
        jmp dword ptr ds : [public_6d64b68]
        public_6d620a3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x48
        jmp public_6cecb50
        public_6d620ae : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x54
        jmp public_6d29370
        public_6d620b9 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x5C
        jmp public_6cecb50
        public_6d620c4 : nop
        mov eax, offset public_6d72e18
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62080)
        ASM_EXPORT_ENTRY_FIRST(0x6d6208b, public_6d6208b)
        ASM_EXPORT_ENTRY(0x6d62097, public_6d62097)
        ASM_EXPORT_ENTRY(0x6d620a3, public_6d620a3)
        ASM_EXPORT_ENTRY(0x6d620ae, public_6d620ae)
        ASM_EXPORT_ENTRY(0x6d620b9, public_6d620b9)
        ASM_EXPORT_ENTRY_LAST(0x6d620c4, public_6d620c4)
    }
}

#undef public_6d6208b
#undef public_6d62097
#undef public_6d620a3
#undef public_6d620ae
#undef public_6d620b9
#undef public_6d620c4

#pragma init_seg(compiler)
extern "C" void const* const public_6d6208b = __AsmFindLabelExport(&internal_6d62080, 0x6d6208b);
extern "C" void const* const public_6d62097 = __AsmFindLabelExport(&internal_6d62080, 0x6d62097);
extern "C" void const* const public_6d620a3 = __AsmFindLabelExport(&internal_6d62080, 0x6d620a3);
extern "C" void const* const public_6d620ae = __AsmFindLabelExport(&internal_6d62080, 0x6d620ae);
extern "C" void const* const public_6d620b9 = __AsmFindLabelExport(&internal_6d62080, 0x6d620b9);
extern "C" void const* const public_6d620c4 = __AsmFindLabelExport(&internal_6d62080, 0x6d620c4);
