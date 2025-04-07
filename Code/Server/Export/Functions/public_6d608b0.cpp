#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d608b9 _public_6d608b9
#define public_6d608c2 _public_6d608c2

PROC_DECLARE(0x6d608b0, internal_6d608b0, public_6d608b0);
/* CHUNK of public_6cf1a40 */
extern "C" NAKED register_t __cdecl internal_6d608b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_6d643f0]
        public_6d608b9 : nop
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6d643f0]
        public_6d608c2 : nop
        mov eax, offset public_6d71208
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d608b0)
        ASM_EXPORT_ENTRY_FIRST(0x6d608b9, public_6d608b9)
        ASM_EXPORT_ENTRY_LAST(0x6d608c2, public_6d608c2)
    }
}

#undef public_6d608b9
#undef public_6d608c2

#pragma init_seg(compiler)
extern "C" void const* const public_6d608b9 = __AsmFindLabelExport(&internal_6d608b0, 0x6d608b9);
extern "C" void const* const public_6d608c2 = __AsmFindLabelExport(&internal_6d608b0, 0x6d608c2);
