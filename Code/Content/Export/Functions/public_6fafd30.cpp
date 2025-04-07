#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafd38 _public_6fafd38
#define public_6fafd43 _public_6fafd43
#define public_6fafd4b _public_6fafd4b
#define public_6fafd59 _public_6fafd59
#define public_6fafd67 _public_6fafd67

PROC_DECLARE(0x6fafd30, internal_6fafd30, public_6fafd30);
/* CHUNK of public_6f6a880 */
extern "C" NAKED register_t __cdecl internal_6fafd30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f28e10
        public_6fafd38 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x50
        jmp public_6eec8d0
        public_6fafd43 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6ef4ab0
        public_6fafd4b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp public_6eec8d0
        public_6fafd59 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xFC
        jmp public_6f28e10
        public_6fafd67 : nop
        mov eax, offset public_6fc4e80
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafd30)
        ASM_EXPORT_ENTRY_FIRST(0x6fafd38, public_6fafd38)
        ASM_EXPORT_ENTRY(0x6fafd43, public_6fafd43)
        ASM_EXPORT_ENTRY(0x6fafd4b, public_6fafd4b)
        ASM_EXPORT_ENTRY(0x6fafd59, public_6fafd59)
        ASM_EXPORT_ENTRY_LAST(0x6fafd67, public_6fafd67)
    }
}

#undef public_6fafd38
#undef public_6fafd43
#undef public_6fafd4b
#undef public_6fafd59
#undef public_6fafd67

#pragma init_seg(compiler)
extern "C" void const* const public_6fafd38 = __AsmFindLabelExport(&internal_6fafd30, 0x6fafd38);
extern "C" void const* const public_6fafd43 = __AsmFindLabelExport(&internal_6fafd30, 0x6fafd43);
extern "C" void const* const public_6fafd4b = __AsmFindLabelExport(&internal_6fafd30, 0x6fafd4b);
extern "C" void const* const public_6fafd59 = __AsmFindLabelExport(&internal_6fafd30, 0x6fafd59);
extern "C" void const* const public_6fafd67 = __AsmFindLabelExport(&internal_6fafd30, 0x6fafd67);
