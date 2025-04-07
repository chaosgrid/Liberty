#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1e70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d603ec _public_6d603ec
#define public_6d603f8 _public_6d603f8
#define public_6d60403 _public_6d60403

PROC_DECLARE(0x6d603e0, internal_6d603e0, public_6d603e0);
/* CHUNK of public_6ce1ae0 */
extern "C" NAKED register_t __cdecl internal_6d603e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp dword ptr ds : [public_6d64004]
        public_6d603ec : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp dword ptr ds : [public_6d64b68]
        public_6d603f8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6ce1e70
        public_6d60403 : nop
        mov eax, offset public_6d70b64
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d603e0)
        ASM_EXPORT_ENTRY_FIRST(0x6d603ec, public_6d603ec)
        ASM_EXPORT_ENTRY(0x6d603f8, public_6d603f8)
        ASM_EXPORT_ENTRY_LAST(0x6d60403, public_6d60403)
    }
}

#undef public_6d603ec
#undef public_6d603f8
#undef public_6d60403

#pragma init_seg(compiler)
extern "C" void const* const public_6d603ec = __AsmFindLabelExport(&internal_6d603e0, 0x6d603ec);
extern "C" void const* const public_6d603f8 = __AsmFindLabelExport(&internal_6d603e0, 0x6d603f8);
extern "C" void const* const public_6d60403 = __AsmFindLabelExport(&internal_6d603e0, 0x6d60403);
