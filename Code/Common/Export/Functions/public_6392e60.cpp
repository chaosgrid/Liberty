#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392e71 _public_6392e71

PROC_DECLARE(0x6392e60, internal_6392e60, public_6392e60);
/* CHUNK of public_62809c0 */
extern "C" NAKED register_t __cdecl internal_6392e60()
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
        public_6392e71 : nop
        mov eax, offset public_63abdd0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392e60)
        ASM_EXPORT_ENTRY_SINGLE(0x6392e71, public_6392e71)
    }
}

#undef public_6392e71

#pragma init_seg(compiler)
extern "C" void const* const public_6392e71 = __AsmFindLabelExport(&internal_6392e60, 0x6392e71);
