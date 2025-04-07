#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394871 _public_6394871

PROC_DECLARE(0x6394860, internal_6394860, public_6394860);
/* CHUNK of public_62baf00 */
extern "C" NAKED register_t __cdecl internal_6394860()
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
        public_6394871 : nop
        mov eax, offset public_63ade38
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394860)
        ASM_EXPORT_ENTRY_SINGLE(0x6394871, public_6394871)
    }
}

#undef public_6394871

#pragma init_seg(compiler)
extern "C" void const* const public_6394871 = __AsmFindLabelExport(&internal_6394860, 0x6394871);
