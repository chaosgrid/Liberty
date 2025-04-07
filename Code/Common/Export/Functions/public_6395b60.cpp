#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395b71 _public_6395b71

PROC_DECLARE(0x6395b60, internal_6395b60, public_6395b60);
/* CHUNK of public_62fd330 */
extern "C" NAKED register_t __cdecl internal_6395b60()
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
        public_6395b71 : nop
        mov eax, offset public_63af96c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395b60)
        ASM_EXPORT_ENTRY_SINGLE(0x6395b71, public_6395b71)
    }
}

#undef public_6395b71

#pragma init_seg(compiler)
extern "C" void const* const public_6395b71 = __AsmFindLabelExport(&internal_6395b60, 0x6395b71);
