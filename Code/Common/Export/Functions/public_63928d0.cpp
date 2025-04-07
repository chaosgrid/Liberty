#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63928e1 _public_63928e1

PROC_DECLARE(0x63928d0, internal_63928d0, public_63928d0);
/* CHUNK of public_6272b50 */
extern "C" NAKED register_t __cdecl internal_63928d0()
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
        public_63928e1 : nop
        mov eax, offset public_63ab6c8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63928d0)
        ASM_EXPORT_ENTRY_SINGLE(0x63928e1, public_63928e1)
    }
}

#undef public_63928e1

#pragma init_seg(compiler)
extern "C" void const* const public_63928e1 = __AsmFindLabelExport(&internal_63928d0, 0x63928e1);
