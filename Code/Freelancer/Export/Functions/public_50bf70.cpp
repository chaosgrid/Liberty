#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5524a0);

#define public_50bf80 _public_50bf80
#define public_50bf90 _public_50bf90

PROC_DECLARE(0x50bf70, internal_50bf70, public_50bf70);
extern "C" NAKED register_t __cdecl internal_50bf70()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x68]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_50bf90
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_50bf80 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        call public_5524a0
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_50bf80
        pop ebx
        public_50bf90 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x50bf70)
    }
}

#undef public_50bf80
#undef public_50bf90
