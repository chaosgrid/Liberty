#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50a40);

#define public_6cf23a7 _public_6cf23a7

PROC_DECLARE(0x6cf2350, internal_6cf2350, public_6cf2350);
extern "C" NAKED register_t __cdecl internal_6cf2350()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jbe public_6cf23a7
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6cf23a7
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6cf23a7
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push esi
        call dword ptr ds : [edx+0x198]
        imul esi, 0x418
        mov eax, dword ptr ds : [public_6d90260]
        push 1
        lea ecx, ds:[esi+eax-0x418]
        call public_6d50a40
        public_6cf23a7 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cf2350)
    }
}

#undef public_6cf23a7
