#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fade81 _public_6fade81
#define public_6fade8f _public_6fade8f

PROC_DECLARE(0x6fade70, internal_6fade70, public_6fade70);
/* CHUNK of public_6f22000 */
extern "C" NAKED register_t __cdecl internal_6fade70()
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
        public_6fade81 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x46C
        jmp public_6f15350
        public_6fade8f : nop
        mov eax, offset public_6fc2dac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fade70)
        ASM_EXPORT_ENTRY_FIRST(0x6fade81, public_6fade81)
        ASM_EXPORT_ENTRY_LAST(0x6fade8f, public_6fade8f)
    }
}

#undef public_6fade81
#undef public_6fade8f

#pragma init_seg(compiler)
extern "C" void const* const public_6fade81 = __AsmFindLabelExport(&internal_6fade70, 0x6fade81);
extern "C" void const* const public_6fade8f = __AsmFindLabelExport(&internal_6fade70, 0x6fade8f);
