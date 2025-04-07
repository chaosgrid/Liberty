#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a758 _public_6c0a758

PROC_DECLARE(0x6c0a750, internal_6c0a750, public_6c0a750);
/* CHUNK of public_6be5d40 */
extern "C" NAKED register_t __cdecl internal_6c0a750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6bebe40
        public_6c0a758 : nop
        mov eax, offset public_6c0ee0c
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a750)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a758, public_6c0a758)
    }
}

#undef public_6c0a758

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a758 = __AsmFindLabelExport(&internal_6c0a750, 0x6c0a758);
