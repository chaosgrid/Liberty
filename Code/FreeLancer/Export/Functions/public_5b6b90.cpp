#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b6b90);

#define public_5b6b9b _public_5b6b9b
#define public_5b6b9d _public_5b6b9d

PROC_DECLARE(0x5b6b90, internal_5b6b90, public_5b6b90);
extern "C" NAKED register_t __cdecl internal_5b6b90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        jle public_5b6b9b
        mov edx, dword ptr ds : [ecx+eax*4]
        jmp public_5b6b9d
        public_5b6b9b : nop
        xor edx, edx
        public_5b6b9d : nop
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        push ecx
        push esi
        push 1
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push edx
        call dword ptr ds : [public_5c600c]
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5b6b90)
    }
}

#undef public_5b6b9b
#undef public_5b6b9d
