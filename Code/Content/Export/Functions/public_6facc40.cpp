#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facc51 _public_6facc51
#define public_6facc62 _public_6facc62

PROC_DECLARE(0x6facc40, internal_6facc40, public_6facc40);
/* CHUNK of public_6f037d0 */
extern "C" NAKED register_t __cdecl internal_6facc40()
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
        public_6facc51 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6facc62 : nop
        mov eax, offset public_6fc1920
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facc40)
        ASM_EXPORT_ENTRY_FIRST(0x6facc51, public_6facc51)
        ASM_EXPORT_ENTRY_LAST(0x6facc62, public_6facc62)
    }
}

#undef public_6facc51
#undef public_6facc62

#pragma init_seg(compiler)
extern "C" void const* const public_6facc51 = __AsmFindLabelExport(&internal_6facc40, 0x6facc51);
extern "C" void const* const public_6facc62 = __AsmFindLabelExport(&internal_6facc40, 0x6facc62);
