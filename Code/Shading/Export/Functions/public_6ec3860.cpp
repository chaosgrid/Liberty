#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3860);

#define public_6ec3873 _public_6ec3873

PROC_DECLARE(0x6ec3860, internal_6ec3860, public_6ec3860);
extern "C" NAKED register_t __cdecl internal_6ec3860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        je public_6ec3873
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6ec3873 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec3860)
    }
}

#undef public_6ec3873
