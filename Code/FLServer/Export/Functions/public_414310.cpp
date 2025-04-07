#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414310);

#define public_414325 _public_414325

PROC_DECLARE(0x414310, internal_414310, public_414310);
/* CHUNK of public_414080 */
extern "C" NAKED register_t __cdecl internal_414310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_414325
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi], 0
        public_414325 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x414310)
        ASM_EXPORT_ENTRY_SINGLE(0x414325, public_414325)
    }
}

#undef public_414325

#pragma init_seg(compiler)
extern "C" void const* const public_414325 = __AsmFindLabelExport(&internal_414310, 0x414325);
