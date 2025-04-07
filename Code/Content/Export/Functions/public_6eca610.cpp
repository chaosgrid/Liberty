#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ec9530);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d430);

#define public_6eca64a _public_6eca64a
#define public_6eca65c _public_6eca65c
#define public_6eca67b _public_6eca67b
#define public_6eca69e _public_6eca69e
#define public_6eca6b6 _public_6eca6b6
#define public_6eca6d3 _public_6eca6d3
#define public_6eca6e1 _public_6eca6e1
#define public_6eca721 _public_6eca721
#define public_6eca757 _public_6eca757
#define public_6eca76f _public_6eca76f
#define public_6eca796 _public_6eca796

PROC_DECLARE(0x6eca610, internal_6eca610, public_6eca610);
extern "C" NAKED register_t __cdecl internal_6eca610()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ds : [public_6fb3048]
        push edi
        mov edi, ecx
        push 0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], edi
        call esi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, ebp
        mov dword ptr ds : [edi+0xC], eax
        call esi
        test eax, eax
        jne public_6eca64a
        mov dword ptr ds : [edi+0x10], eax
        mov byte ptr ds : [edi+0x14], al
        jmp public_6eca65c
        public_6eca64a : nop
        push eax
        lea eax, ds:[edi+0x14]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [edi+0x10], eax
        public_6eca65c : nop
        push 2
        mov ecx, ebp
        call esi
        push eax
        call public_6f1d430
        add esp, 4
        test al, al
        mov ecx, ebp
        push 2
        je public_6eca67b
        call dword ptr ds : [public_6fb3044]
        jmp public_6eca6e1
        public_6eca67b : nop
        call dword ptr ds : [public_6fb30a4]
        sub esp, 0x44
        mov edx, esp
        mov esi, eax
        test esi, esi
        lea ebx, ds:[edx+4]
        mov dword ptr ds : [edx], 0
        mov byte ptr ds : [ebx], 0
        jne public_6eca69e
        mov dword ptr ds : [edx], eax
        mov byte ptr ds : [ebx], al
        jmp public_6eca6d3
        public_6eca69e : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6eca6b6
        mov eax, 0x3F
        public_6eca6b6 : nop
        mov ecx, eax
        mov edi, ebx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x54]
        mov byte ptr ds : [eax+edx+4], 0
        mov dword ptr ds : [edx], eax
        public_6eca6d3 : nop
        mov ecx, dword ptr ds : [edi+4]
        call public_6ec9530
        mov esi, dword ptr ds : [public_6fb3048]
        public_6eca6e1 : nop
        fst dword ptr ds : [edi+0x44]
        push 3
        mov ecx, ebp
        fstp dword ptr ds : [edi+0x48]
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6eca796
        push 3
        mov ecx, ebp
        call esi
        push eax
        call public_6f1d430
        add esp, 4
        test al, al
        mov ecx, ebp
        push 3
        je public_6eca721
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6eca721 : nop
        call dword ptr ds : [public_6fb30a4]
        sub esp, 0x44
        mov edx, esp
        mov esi, eax
        test esi, esi
        lea ebp, ds:[edx+4]
        mov dword ptr ds : [edx], 0
        mov byte ptr ss : [ebp], 0
        jne public_6eca757
        mov dword ptr ds : [edx], eax
        mov byte ptr ss : [ebp], al
        mov ecx, dword ptr ds : [edi+4]
        call public_6ec9530
        fstp dword ptr ds : [edi+0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6eca757 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6eca76f
        mov eax, 0x3F
        public_6eca76f : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x54]
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi+4]
        call public_6ec9530
        fstp dword ptr ds : [edi+0x48]
        public_6eca796 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6eca610)
    }
}

#undef public_6eca64a
#undef public_6eca65c
#undef public_6eca67b
#undef public_6eca69e
#undef public_6eca6b6
#undef public_6eca6d3
#undef public_6eca6e1
#undef public_6eca721
#undef public_6eca757
#undef public_6eca76f
#undef public_6eca796
