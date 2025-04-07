#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d430);

#define public_6f2d445 _public_6f2d445

PROC_DECLARE(0x6f2d430, internal_6f2d430, public_6f2d430);
/* CHUNK of public_6f28a60 */
extern "C" NAKED register_t __cdecl internal_6f2d430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f2d445
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f2d445 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f2d430)
        ASM_EXPORT_ENTRY_SINGLE(0x6f2d445, public_6f2d445)
    }
}

#undef public_6f2d445

#pragma init_seg(compiler)
extern "C" void const* const public_6f2d445 = __AsmFindLabelExport(&internal_6f2d430, 0x6f2d445);
