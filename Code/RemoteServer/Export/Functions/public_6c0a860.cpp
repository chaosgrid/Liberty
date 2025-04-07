#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a869 _public_6c0a869

PROC_DECLARE(0x6c0a860, internal_6c0a860, public_6c0a860);
/* CHUNK of public_6bec2d0 */
extern "C" NAKED register_t __cdecl internal_6c0a860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6c0b1c8]
        public_6c0a869 : nop
        mov eax, offset public_6c0ef24
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a860)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a869, public_6c0a869)
    }
}

#undef public_6c0a869

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a869 = __AsmFindLabelExport(&internal_6c0a860, 0x6c0a869);
