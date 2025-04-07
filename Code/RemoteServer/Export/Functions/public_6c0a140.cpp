#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a14c _public_6c0a14c

PROC_DECLARE(0x6c0a140, internal_6c0a140, public_6c0a140);
/* CHUNK of public_6bd4570 */
extern "C" NAKED register_t __cdecl internal_6c0a140()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp dword ptr ds : [public_6c0b0bc]
        public_6c0a14c : nop
        mov eax, offset public_6c0e850
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a140)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a14c, public_6c0a14c)
    }
}

#undef public_6c0a14c

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a14c = __AsmFindLabelExport(&internal_6c0a140, 0x6c0a14c);
