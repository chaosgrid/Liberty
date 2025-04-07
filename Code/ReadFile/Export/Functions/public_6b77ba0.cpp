#include "ReadFile-PCH.h"


#define public_6b77bc7 _public_6b77bc7
#define public_6b77be0 _public_6b77be0
#define public_6b77beb _public_6b77beb

PROC_DECLARE(0x6b77ba0, internal_6b77ba0, public_6b77ba0);
extern "C" NAKED register_t __cdecl internal_6b77ba0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx], 0
        xor esi, esi
        mov ecx, dword ptr ds : [edi+0x110]
        mov eax, 0xFFFFFFFA
        test ecx, ecx
        jle public_6b77beb
        mov ebp, dword ptr ss : [esp+0x18]
        public_6b77bc7 : nop
        mov ecx, dword ptr ds : [edi+0x10C]
        mov ecx, dword ptr ds : [ecx+esi*4]
        test ecx, ecx
        je public_6b77be0
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebp
        push ecx
        call dword ptr ds : [edx+0xC]
        test eax, eax
        je public_6b77beb
        public_6b77be0 : nop
        mov ecx, dword ptr ds : [edi+0x110]
        inc esi
        cmp esi, ecx
        jl public_6b77bc7
        public_6b77beb : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b77ba0)
    }
}

#undef public_6b77bc7
#undef public_6b77be0
#undef public_6b77beb
