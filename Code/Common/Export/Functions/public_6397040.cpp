#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397051 _public_6397051

PROC_DECLARE(0x6397040, internal_6397040, public_6397040);
/* CHUNK of public_6325be0 */
extern "C" NAKED register_t __cdecl internal_6397040()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6397051 : nop
        mov eax, offset public_63b10bc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397040)
        ASM_EXPORT_ENTRY_SINGLE(0x6397051, public_6397051)
    }
}

#undef public_6397051

#pragma init_seg(compiler)
extern "C" void const* const public_6397051 = __AsmFindLabelExport(&internal_6397040, 0x6397051);
