#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61151 _public_6d61151

PROC_DECLARE(0x6d61140, internal_6d61140, public_6d61140);
/* CHUNK of public_6d06740 */
extern "C" NAKED register_t __cdecl internal_6d61140()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d61151 : nop
        mov eax, offset public_6d71d08
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61140)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61151, public_6d61151)
    }
}

#undef public_6d61151

#pragma init_seg(compiler)
extern "C" void const* const public_6d61151 = __AsmFindLabelExport(&internal_6d61140, 0x6d61151);
