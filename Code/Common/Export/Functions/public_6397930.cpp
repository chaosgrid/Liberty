#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397941 _public_6397941

PROC_DECLARE(0x6397930, internal_6397930, public_6397930);
/* CHUNK of public_6342a90 */
extern "C" NAKED register_t __cdecl internal_6397930()
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
        public_6397941 : nop
        mov eax, offset public_63b1b50
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397930)
        ASM_EXPORT_ENTRY_SINGLE(0x6397941, public_6397941)
    }
}

#undef public_6397941

#pragma init_seg(compiler)
extern "C" void const* const public_6397941 = __AsmFindLabelExport(&internal_6397930, 0x6397941);
