#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_448a00);

#define public_448a1d _public_448a1d

PROC_DECLARE(0x448a00, internal_448a00, public_448a00);
/* CHUNK of public_44ab60 */
extern "C" NAKED register_t __cdecl internal_448a00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov edx, dword ptr ds : [ecx+0x14]
        xor al, al
        cmp edx, 0xFFFFFFFF
        je public_448a1d
        mov ecx, dword ptr ds : [ecx+4]
        shl edx, 4
        mov edx, dword ptr ds : [edx+ecx+4]
        mov ecx, dword ptr ds : [edx+0x38]
        test ecx, ecx
        je public_448a1d
        mov al, 1
        public_448a1d : nop
        ret 
        UNREACHABLE_TRAP(0x448a00)
        ASM_EXPORT_ENTRY_SINGLE(0x448a1d, public_448a1d)
    }
}

#undef public_448a1d

#pragma init_seg(compiler)
extern "C" void const* const public_448a1d = __AsmFindLabelExport(&internal_448a00, 0x448a1d);
