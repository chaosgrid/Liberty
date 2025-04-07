#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a828 _public_6c0a828

PROC_DECLARE(0x6c0a820, internal_6c0a820, public_6c0a820);
/* CHUNK of public_6be7690 */
extern "C" NAKED register_t __cdecl internal_6c0a820()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6bebe40
        public_6c0a828 : nop
        mov eax, offset public_6c0eedc
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a820)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a828, public_6c0a828)
    }
}

#undef public_6c0a828

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a828 = __AsmFindLabelExport(&internal_6c0a820, 0x6c0a828);
