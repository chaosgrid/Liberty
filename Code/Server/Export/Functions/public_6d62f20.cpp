#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62f2f _public_6d62f2f
#define public_6d62f3e _public_6d62f3e
#define public_6d62f4d _public_6d62f4d

PROC_DECLARE(0x6d62f20, internal_6d62f20, public_6d62f20);
/* CHUNK of public_6d45e50 */
extern "C" NAKED register_t __cdecl internal_6d62f20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x204
        jmp dword ptr ds : [public_6d64b68]
        public_6d62f2f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x214
        jmp dword ptr ds : [public_6d64b68]
        public_6d62f3e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x248
        jmp dword ptr ds : [public_6d643f0]
        public_6d62f4d : nop
        mov eax, offset public_6d75380
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62f20)
        ASM_EXPORT_ENTRY_FIRST(0x6d62f2f, public_6d62f2f)
        ASM_EXPORT_ENTRY(0x6d62f3e, public_6d62f3e)
        ASM_EXPORT_ENTRY_LAST(0x6d62f4d, public_6d62f4d)
    }
}

#undef public_6d62f2f
#undef public_6d62f3e
#undef public_6d62f4d

#pragma init_seg(compiler)
extern "C" void const* const public_6d62f2f = __AsmFindLabelExport(&internal_6d62f20, 0x6d62f2f);
extern "C" void const* const public_6d62f3e = __AsmFindLabelExport(&internal_6d62f20, 0x6d62f3e);
extern "C" void const* const public_6d62f4d = __AsmFindLabelExport(&internal_6d62f20, 0x6d62f4d);
