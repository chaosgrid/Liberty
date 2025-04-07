#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d629c1 _public_6d629c1
#define public_6d629c9 _public_6d629c9

PROC_DECLARE(0x6d629b0, internal_6d629b0, public_6d629b0);
/* CHUNK of public_6d24870 */
extern "C" NAKED register_t __cdecl internal_6d629b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d629c1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d209f0
        public_6d629c9 : nop
        mov eax, offset public_6d73a08
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d629b0)
        ASM_EXPORT_ENTRY_FIRST(0x6d629c1, public_6d629c1)
        ASM_EXPORT_ENTRY_LAST(0x6d629c9, public_6d629c9)
    }
}

#undef public_6d629c1
#undef public_6d629c9

#pragma init_seg(compiler)
extern "C" void const* const public_6d629c1 = __AsmFindLabelExport(&internal_6d629b0, 0x6d629c1);
extern "C" void const* const public_6d629c9 = __AsmFindLabelExport(&internal_6d629b0, 0x6d629c9);
