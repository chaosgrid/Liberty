#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4eca0);

#define public_6f4ecb0 _public_6f4ecb0
#define public_6f4ecc6 _public_6f4ecc6

PROC_DECLARE(0x6f4eca0, internal_6f4eca0, public_6f4eca0);
extern "C" NAKED register_t __cdecl internal_6f4eca0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        lea eax, ds:[ecx-8]
        push esi
        cmp edx, dword ptr ds : [eax]
        jge public_6f4ecc6
        public_6f4ecb0 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        mov esi, dword ptr ds : [eax-8]
        mov ecx, eax
        sub eax, 8
        cmp edx, esi
        jl public_6f4ecb0
        public_6f4ecc6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4eca0)
    }
}

#undef public_6f4ecb0
#undef public_6f4ecc6
