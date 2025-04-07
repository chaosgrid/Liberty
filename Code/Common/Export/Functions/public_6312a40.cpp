#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312a40);

#define public_6312a62 _public_6312a62
#define public_6312a66 _public_6312a66
#define public_6312aba _public_6312aba
#define public_6312ac0 _public_6312ac0

PROC_DECLARE(0x6312a40, internal_6312a40, public_6312a40);
extern "C" NAKED register_t __cdecl internal_6312a40()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+0xC]
        xor eax, eax
        cmp edx, 4
        push esi
        jl public_6312a62
        mov ecx, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ecx]
        add ecx, 4
        add edx, 0xFFFFFFFC
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edx
        jmp public_6312a66
        public_6312a62 : nop
        mov esi, dword ptr ss : [esp+8]
        public_6312a66 : nop
        cmp esi, 0xFFFFFFFF
        je public_6312ac0
        cmp esi, 0x4000
        jae public_6312ac0
        lea eax, ds:[esi+esi+2]
        push eax
        call dword ptr ds : [public_6399328]
        mov ecx, dword ptr ds : [ebx+0xC]
        lea edx, ds:[esi+esi]
        add esp, 4
        cmp edx, ecx
        jg public_6312aba
        test edx, edx
        jl public_6312aba
        je public_6312aba
        mov esi, dword ptr ds : [ebx+8]
        push ebp
        push edi
        mov ecx, edx
        mov ebp, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov esi, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+0xC]
        add esi, edx
        sub ecx, edx
        pop edi
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], ecx
        pop ebp
        public_6312aba : nop
        mov word ptr ds : [edx+eax], 0
        public_6312ac0 : nop
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6312a40)
    }
}

#undef public_6312a62
#undef public_6312a66
#undef public_6312aba
#undef public_6312ac0
