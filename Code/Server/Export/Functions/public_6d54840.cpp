#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d54840);

#define public_6d5487b _public_6d5487b

PROC_DECLARE(0x6d54840, internal_6d54840, public_6d54840);
extern "C" NAKED register_t __cdecl internal_6d54840()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push esi
        jbe public_6d5487b
        mov esi, dword ptr ds : [ecx+4]
        lea eax, ds:[edx-1]
        cmp eax, esi
        jae public_6d5487b
        mov ecx, dword ptr ds : [ecx]
        imul eax, 0x418
        mov esi, dword ptr ds : [eax+ecx+0x348]
        test esi, esi
        je public_6d5487b
        imul edx, 0x418
        mov ecx, dword ptr ds : [edx+ecx-0x14]
        test ecx, ecx
        je public_6d5487b
        mov eax, dword ptr ds : [ecx+4]
        pop esi
        ret 4
        public_6d5487b : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d54840)
    }
}

#undef public_6d5487b
