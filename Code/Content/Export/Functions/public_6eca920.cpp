#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ec9530);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d430);

#define public_6eca947 _public_6eca947
#define public_6eca959 _public_6eca959
#define public_6eca98b _public_6eca98b
#define public_6eca9ae _public_6eca9ae
#define public_6eca9c6 _public_6eca9c6
#define public_6eca9e3 _public_6eca9e3
#define public_6eca9f1 _public_6eca9f1
#define public_6ecaa31 _public_6ecaa31
#define public_6ecaa67 _public_6ecaa67
#define public_6ecaa7f _public_6ecaa7f
#define public_6ecaaa6 _public_6ecaaa6

PROC_DECLARE(0x6eca920, internal_6eca920, public_6eca920);
extern "C" NAKED register_t __cdecl internal_6eca920()
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
        test eax, eax
        jne public_6eca947
        mov dword ptr ds : [edi+0xC], eax
        mov byte ptr ds : [edi+0x10], al
        jmp public_6eca959
        public_6eca947 : nop
        push eax
        lea eax, ds:[edi+0x10]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [edi+0xC], eax
        public_6eca959 : nop
        push 1
        mov ecx, ebp
        call esi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 2
        mov ecx, ebp
        mov dword ptr ds : [edi+0x40], eax
        call esi
        push eax
        call public_6f1d430
        add esp, 4
        test al, al
        mov ecx, ebp
        push 2
        je public_6eca98b
        call dword ptr ds : [public_6fb3044]
        jmp public_6eca9f1
        public_6eca98b : nop
        call dword ptr ds : [public_6fb30a4]
        sub esp, 0x44
        mov edx, esp
        mov esi, eax
        test esi, esi
        lea ebx, ds:[edx+4]
        mov dword ptr ds : [edx], 0
        mov byte ptr ds : [ebx], 0
        jne public_6eca9ae
        mov dword ptr ds : [edx], eax
        mov byte ptr ds : [ebx], al
        jmp public_6eca9e3
        public_6eca9ae : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6eca9c6
        mov eax, 0x3F
        public_6eca9c6 : nop
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
        public_6eca9e3 : nop
        mov ecx, dword ptr ds : [edi+4]
        call public_6ec9530
        mov esi, dword ptr ds : [public_6fb3048]
        public_6eca9f1 : nop
        fst dword ptr ds : [edi+0x44]
        push 3
        mov ecx, ebp
        fstp dword ptr ds : [edi+0x48]
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecaaa6
        push 3
        mov ecx, ebp
        call esi
        push eax
        call public_6f1d430
        add esp, 4
        test al, al
        mov ecx, ebp
        push 3
        je public_6ecaa31
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6ecaa31 : nop
        call dword ptr ds : [public_6fb30a4]
        sub esp, 0x44
        mov edx, esp
        mov esi, eax
        test esi, esi
        lea ebp, ds:[edx+4]
        mov dword ptr ds : [edx], 0
        mov byte ptr ss : [ebp], 0
        jne public_6ecaa67
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
        public_6ecaa67 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6ecaa7f
        mov eax, 0x3F
        public_6ecaa7f : nop
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
        public_6ecaaa6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6eca920)
    }
}

#undef public_6eca947
#undef public_6eca959
#undef public_6eca98b
#undef public_6eca9ae
#undef public_6eca9c6
#undef public_6eca9e3
#undef public_6eca9f1
#undef public_6ecaa31
#undef public_6ecaa67
#undef public_6ecaa7f
#undef public_6ecaaa6
