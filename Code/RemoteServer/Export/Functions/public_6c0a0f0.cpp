#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a0fc _public_6c0a0fc

PROC_DECLARE(0x6c0a0f0, internal_6c0a0f0, public_6c0a0f0);
/* CHUNK of public_6bd4420 */
extern "C" NAKED register_t __cdecl internal_6c0a0f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp dword ptr ds : [public_6c0b0bc]
        public_6c0a0fc : nop
        mov eax, offset public_6c0e800
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a0f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a0fc, public_6c0a0fc)
    }
}

#undef public_6c0a0fc

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a0fc = __AsmFindLabelExport(&internal_6c0a0f0, 0x6c0a0fc);
