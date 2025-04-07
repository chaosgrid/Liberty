#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58ef1 _public_6f58ef1

PROC_DECLARE(0x6f58ee0, internal_6f58ee0, public_6f58ee0);
/* CHUNK of public_6f3fbd0 */
extern "C" NAKED register_t __cdecl internal_6f58ee0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6f24a10
        add esp, 8
        ret 
        public_6f58ef1 : nop
        mov eax, offset public_6f5c098
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58ee0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58ef1, public_6f58ef1)
    }
}

#undef public_6f58ef1

#pragma init_seg(compiler)
extern "C" void const* const public_6f58ef1 = __AsmFindLabelExport(&internal_6f58ee0, 0x6f58ef1);
