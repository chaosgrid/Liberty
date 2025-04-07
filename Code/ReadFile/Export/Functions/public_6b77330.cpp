#include "ReadFile-PCH.h"


#define public_6b7735e _public_6b7735e
#define public_6b7738a _public_6b7738a
#define public_6b77392 _public_6b77392
#define public_6b773bc _public_6b773bc
#define public_6b773eb _public_6b773eb
#define public_6b773fa _public_6b773fa
#define public_6b77424 _public_6b77424
#define public_6b7743e _public_6b7743e
#define public_6b77441 _public_6b77441
#define public_6b77446 _public_6b77446

PROC_DECLARE(0x6b77330, internal_6b77330, public_6b77330);
extern "C" NAKED register_t __cdecl internal_6b77330()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        test ecx, ecx
        push ebx
        jne public_6b77446
        mov ebx, dword ptr ss : [esp+8]
        test dword ptr ds : [ebx+0x18], 0x40000000
        je public_6b77446
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_6b7735e
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+0x10], eax
        public_6b7735e : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+0xC]
        push ebp
        lea ebp, ds:[ecx+edx]
        push esi
        cmp ebp, eax
        push edi
        jbe public_6b773fa
        test byte ptr ds : [ebx+0x14], 2
        je public_6b77392
        cmp ecx, eax
        jb public_6b7738a
        mov dword ptr ss : [esp+0x20], 0
        jmp public_6b773fa
        public_6b7738a : nop
        sub eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6b773fa
        public_6b77392 : nop
        add ebp, 0xFFFF
        push 4
        and ebp, 0xFFFFF000
        push 0x1000
        push ebp
        push 0
        call dword ptr ds : [public_6b79060]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_6b773bc
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6b773fa
        public_6b773bc : nop
        mov esi, dword ptr ds : [ebx+8]
        test esi, esi
        je public_6b773eb
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edi, eax
        mov eax, ecx
        push 0x8000
        shr ecx, 2
        rep movsd
        mov ecx, eax
        push 0
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+8]
        push ecx
        call dword ptr ds : [public_6b7905c]
        mov eax, dword ptr ss : [esp+0x18]
        public_6b773eb : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [ebx+8], eax
        or ecx, 4
        mov dword ptr ds : [ebx+0xC], ebp
        mov dword ptr ds : [ebx+0x14], ecx
        public_6b773fa : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, edx
        add edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x24]
        and ecx, 3
        test eax, eax
        rep movsb
        je public_6b77424
        mov dword ptr ds : [eax], edx
        public_6b77424 : nop
        mov esi, dword ptr ds : [ebx+0x10]
        pop edi
        add esi, edx
        mov dword ptr ds : [ebx+0x10], esi
        mov eax, esi
        pop esi
        pop ebp
        test edx, edx
        je public_6b77441
        mov ecx, dword ptr ds : [ebx+0x1C]
        cmp ecx, eax
        jbe public_6b7743e
        mov eax, ecx
        public_6b7743e : nop
        mov dword ptr ds : [ebx+0x1C], eax
        public_6b77441 : nop
        mov eax, 1
        public_6b77446 : nop
        pop ebx
        ret 0x18
        UNREACHABLE_TRAP(0x6b77330)
    }
}

#undef public_6b7735e
#undef public_6b7738a
#undef public_6b77392
#undef public_6b773bc
#undef public_6b773eb
#undef public_6b773fa
#undef public_6b77424
#undef public_6b7743e
#undef public_6b77441
#undef public_6b77446
