#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb16d1 _public_6fb16d1
#define public_6fb16dc _public_6fb16dc

PROC_DECLARE(0x6fb16c0, internal_6fb16c0, public_6fb16c0);
/* CHUNK of public_6f96e80 */
extern "C" NAKED register_t __cdecl internal_6fb16c0()
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
        public_6fb16d1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_6eec8d0
        public_6fb16dc : nop
        mov eax, offset public_6fc6c94
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb16c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb16d1, public_6fb16d1)
        ASM_EXPORT_ENTRY_LAST(0x6fb16dc, public_6fb16dc)
    }
}

#undef public_6fb16d1
#undef public_6fb16dc

#pragma init_seg(compiler)
extern "C" void const* const public_6fb16d1 = __AsmFindLabelExport(&internal_6fb16c0, 0x6fb16d1);
extern "C" void const* const public_6fb16dc = __AsmFindLabelExport(&internal_6fb16c0, 0x6fb16dc);
