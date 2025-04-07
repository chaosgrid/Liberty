#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac239 _public_6fac239
#define public_6fac242 _public_6fac242

PROC_DECLARE(0x6fac230, internal_6fac230, public_6fac230);
/* CHUNK of public_6ef44b0 */
extern "C" NAKED register_t __cdecl internal_6fac230()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_6fb3138]
        public_6fac239 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6fb3138]
        public_6fac242 : nop
        mov eax, offset public_6fc0eac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac230)
        ASM_EXPORT_ENTRY_FIRST(0x6fac239, public_6fac239)
        ASM_EXPORT_ENTRY_LAST(0x6fac242, public_6fac242)
    }
}

#undef public_6fac239
#undef public_6fac242

#pragma init_seg(compiler)
extern "C" void const* const public_6fac239 = __AsmFindLabelExport(&internal_6fac230, 0x6fac239);
extern "C" void const* const public_6fac242 = __AsmFindLabelExport(&internal_6fac230, 0x6fac242);
