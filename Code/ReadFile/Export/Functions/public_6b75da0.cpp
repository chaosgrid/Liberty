#include "ReadFile-PCH.h"


#define public_6b75dcc _public_6b75dcc
#define public_6b75e04 _public_6b75e04
#define public_6b75e09 _public_6b75e09

PROC_DECLARE(0x6b75da0, internal_6b75da0, public_6b75da0);
extern "C" NAKED register_t __cdecl internal_6b75da0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        lea esi, ds:[ebx+0xD]
        or ecx, 0xFFFFFFFF
        mov edi, esi
        xor eax, eax
        repne scasb
        mov eax, dword ptr ss : [esp+0x18]
        not ecx
        cmp eax, ecx
        jl public_6b75dcc
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        inc eax
        public_6b75dcc : nop
        test eax, eax
        jle public_6b75e09
        mov edx, dword ptr ss : [esp+0x14]
        test edx, edx
        je public_6b75e09
        mov ecx, eax
        push ebp
        mov ebp, ecx
        mov edi, edx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        pop ebp
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+0x12C]
        test ecx, ecx
        je public_6b75e04
        cmp eax, ecx
        jle public_6b75e04
        pop edi
        pop esi
        mov byte ptr ds : [ecx+edx], 0
        pop ebx
        ret 0xC
        public_6b75e04 : nop
        mov byte ptr ds : [edx+eax-1], 0
        public_6b75e09 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b75da0)
    }
}

#undef public_6b75dcc
#undef public_6b75e04
#undef public_6b75e09
