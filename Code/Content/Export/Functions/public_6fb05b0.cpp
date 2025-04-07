#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb05c1 _public_6fb05c1
#define public_6fb05d2 _public_6fb05d2

PROC_DECLARE(0x6fb05b0, internal_6fb05b0, public_6fb05b0);
/* CHUNK of public_6f7d6d0 */
extern "C" NAKED register_t __cdecl internal_6fb05b0()
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
        public_6fb05c1 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb05d2 : nop
        mov eax, offset public_6fc5864
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb05b0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb05c1, public_6fb05c1)
        ASM_EXPORT_ENTRY_LAST(0x6fb05d2, public_6fb05d2)
    }
}

#undef public_6fb05c1
#undef public_6fb05d2

#pragma init_seg(compiler)
extern "C" void const* const public_6fb05c1 = __AsmFindLabelExport(&internal_6fb05b0, 0x6fb05c1);
extern "C" void const* const public_6fb05d2 = __AsmFindLabelExport(&internal_6fb05b0, 0x6fb05d2);
