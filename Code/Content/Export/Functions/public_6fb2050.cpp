#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb2061 _public_6fb2061
#define public_6fb206c _public_6fb206c
#define public_6fb2077 _public_6fb2077
#define public_6fb2082 _public_6fb2082

PROC_DECLARE(0x6fb2050, internal_6fb2050, public_6fb2050);
/* CHUNK of public_6fa4870 */
extern "C" NAKED register_t __cdecl internal_6fb2050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb2061 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_6eec8d0
        public_6fb206c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_6eec8d0
        public_6fb2077 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6f9dcd0
        public_6fb2082 : nop
        mov eax, offset public_6fc7664
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb2050)
        ASM_EXPORT_ENTRY_FIRST(0x6fb2061, public_6fb2061)
        ASM_EXPORT_ENTRY(0x6fb206c, public_6fb206c)
        ASM_EXPORT_ENTRY(0x6fb2077, public_6fb2077)
        ASM_EXPORT_ENTRY_LAST(0x6fb2082, public_6fb2082)
    }
}

#undef public_6fb2061
#undef public_6fb206c
#undef public_6fb2077
#undef public_6fb2082

#pragma init_seg(compiler)
extern "C" void const* const public_6fb2061 = __AsmFindLabelExport(&internal_6fb2050, 0x6fb2061);
extern "C" void const* const public_6fb206c = __AsmFindLabelExport(&internal_6fb2050, 0x6fb206c);
extern "C" void const* const public_6fb2077 = __AsmFindLabelExport(&internal_6fb2050, 0x6fb2077);
extern "C" void const* const public_6fb2082 = __AsmFindLabelExport(&internal_6fb2050, 0x6fb2082);
