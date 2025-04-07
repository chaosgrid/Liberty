#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae891 _public_6fae891
#define public_6fae899 _public_6fae899
#define public_6fae8a4 _public_6fae8a4
#define public_6fae8af _public_6fae8af

PROC_DECLARE(0x6fae880, internal_6fae880, public_6fae880);
/* CHUNK of public_6f2ff40 */
extern "C" NAKED register_t __cdecl internal_6fae880()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fae891 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6eec8d0
        public_6fae899 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x58
        jmp public_6eec8d0
        public_6fae8a4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x68
        jmp public_6eec8d0
        public_6fae8af : nop
        mov eax, offset public_6fc3778
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae880)
        ASM_EXPORT_ENTRY_FIRST(0x6fae891, public_6fae891)
        ASM_EXPORT_ENTRY(0x6fae899, public_6fae899)
        ASM_EXPORT_ENTRY(0x6fae8a4, public_6fae8a4)
        ASM_EXPORT_ENTRY_LAST(0x6fae8af, public_6fae8af)
    }
}

#undef public_6fae891
#undef public_6fae899
#undef public_6fae8a4
#undef public_6fae8af

#pragma init_seg(compiler)
extern "C" void const* const public_6fae891 = __AsmFindLabelExport(&internal_6fae880, 0x6fae891);
extern "C" void const* const public_6fae899 = __AsmFindLabelExport(&internal_6fae880, 0x6fae899);
extern "C" void const* const public_6fae8a4 = __AsmFindLabelExport(&internal_6fae880, 0x6fae8a4);
extern "C" void const* const public_6fae8af = __AsmFindLabelExport(&internal_6fae880, 0x6fae8af);
