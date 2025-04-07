#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58ec1 _public_6f58ec1
#define public_6f58ec9 _public_6f58ec9

PROC_DECLARE(0x6f58eb0, internal_6f58eb0, public_6f58eb0);
/* CHUNK of public_6f3f840 */
extern "C" NAKED register_t __cdecl internal_6f58eb0()
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
        public_6f58ec1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f3b9f0
        public_6f58ec9 : nop
        mov eax, offset public_6f5c074
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58eb0)
        ASM_EXPORT_ENTRY_FIRST(0x6f58ec1, public_6f58ec1)
        ASM_EXPORT_ENTRY_LAST(0x6f58ec9, public_6f58ec9)
    }
}

#undef public_6f58ec1
#undef public_6f58ec9

#pragma init_seg(compiler)
extern "C" void const* const public_6f58ec1 = __AsmFindLabelExport(&internal_6f58eb0, 0x6f58ec1);
extern "C" void const* const public_6f58ec9 = __AsmFindLabelExport(&internal_6f58eb0, 0x6f58ec9);
