#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3110);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8190);

#define public_6ac81e5 _public_6ac81e5

PROC_DECLARE(0x6ac8190, internal_6ac8190, public_6ac8190);
extern "C" NAKED register_t __cdecl internal_6ac8190()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx]
        cmp edx, 1
        jne public_6ac81e5
        push ebx
        mov ebx, dword ptr ds : [ecx+0x10]
        lea edx, ds:[eax*4]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov ecx, edx
        push esi
        mov eax, ecx
        push edi
        mov esi, ebx
        mov edi, ebp
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, 1
        and ecx, 3
        rep movsb
        mov ecx, edx
        mov esi, ebx
        lea edi, ds:[edx+ebp]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6ac81e5 : nop
        mov eax, dword ptr ss : [esp+4]
        push ecx
        push 2
        push eax
        call public_6ac3110
        neg eax
        sbb eax, eax
        neg eax
        ret 8
        UNREACHABLE_TRAP(0x6ac8190)
    }
}

#undef public_6ac81e5
