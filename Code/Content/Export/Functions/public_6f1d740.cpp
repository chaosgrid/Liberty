#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1d740);

#define public_6f1d751 _public_6f1d751

PROC_DECLARE(0x6f1d740, internal_6f1d740, public_6f1d740);
extern "C" NAKED register_t __cdecl internal_6f1d740()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        mov dword ptr ds : [esi], ecx
        je public_6f1d751
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6f1d751 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f1d740)
    }
}

#undef public_6f1d751
