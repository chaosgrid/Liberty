#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ba30);

#define public_6f3ba45 _public_6f3ba45

PROC_DECLARE(0x6f3ba30, internal_6f3ba30, public_6f3ba30);
/* CHUNK of public_6f37b50 */
extern "C" NAKED register_t __cdecl internal_6f3ba30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f3ba45
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f3ba45 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f3ba30)
        ASM_EXPORT_ENTRY_SINGLE(0x6f3ba45, public_6f3ba45)
    }
}

#undef public_6f3ba45

#pragma init_seg(compiler)
extern "C" void const* const public_6f3ba45 = __AsmFindLabelExport(&internal_6f3ba30, 0x6f3ba45);
