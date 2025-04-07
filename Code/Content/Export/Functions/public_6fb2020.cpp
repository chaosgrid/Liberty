#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb2031 _public_6fb2031
#define public_6fb2042 _public_6fb2042

PROC_DECLARE(0x6fb2020, internal_6fb2020, public_6fb2020);
/* CHUNK of public_6fa4600 */
extern "C" NAKED register_t __cdecl internal_6fb2020()
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
        public_6fb2031 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb2042 : nop
        mov eax, offset public_6fc7604
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb2020)
        ASM_EXPORT_ENTRY_FIRST(0x6fb2031, public_6fb2031)
        ASM_EXPORT_ENTRY_LAST(0x6fb2042, public_6fb2042)
    }
}

#undef public_6fb2031
#undef public_6fb2042

#pragma init_seg(compiler)
extern "C" void const* const public_6fb2031 = __AsmFindLabelExport(&internal_6fb2020, 0x6fb2031);
extern "C" void const* const public_6fb2042 = __AsmFindLabelExport(&internal_6fb2020, 0x6fb2042);
