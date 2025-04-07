#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396c61 _public_6396c61

PROC_DECLARE(0x6396c50, internal_6396c50, public_6396c50);
/* CHUNK of public_631d530 */
extern "C" NAKED register_t __cdecl internal_6396c50()
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
        public_6396c61 : nop
        mov eax, offset public_63b0bac
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396c50)
        ASM_EXPORT_ENTRY_SINGLE(0x6396c61, public_6396c61)
    }
}

#undef public_6396c61

#pragma init_seg(compiler)
extern "C" void const* const public_6396c61 = __AsmFindLabelExport(&internal_6396c50, 0x6396c61);
