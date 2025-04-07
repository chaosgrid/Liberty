#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396df1 _public_6396df1

PROC_DECLARE(0x6396de0, internal_6396de0, public_6396de0);
/* CHUNK of public_6323ee0 */
extern "C" NAKED register_t __cdecl internal_6396de0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6396df1 : nop
        mov eax, offset public_63b0e0c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396de0)
        ASM_EXPORT_ENTRY_SINGLE(0x6396df1, public_6396df1)
    }
}

#undef public_6396df1

#pragma init_seg(compiler)
extern "C" void const* const public_6396df1 = __AsmFindLabelExport(&internal_6396de0, 0x6396df1);
