#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397871 _public_6397871
#define public_639787c _public_639787c

PROC_DECLARE(0x6397860, internal_6397860, public_6397860);
/* CHUNK of public_6341050 */
extern "C" NAKED register_t __cdecl internal_6397860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6397871 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x54
        jmp public_6269110
        public_639787c : nop
        mov eax, offset public_63b1a68
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397860)
        ASM_EXPORT_ENTRY_FIRST(0x6397871, public_6397871)
        ASM_EXPORT_ENTRY_LAST(0x639787c, public_639787c)
    }
}

#undef public_6397871
#undef public_639787c

#pragma init_seg(compiler)
extern "C" void const* const public_6397871 = __AsmFindLabelExport(&internal_6397860, 0x6397871);
extern "C" void const* const public_639787c = __AsmFindLabelExport(&internal_6397860, 0x639787c);
