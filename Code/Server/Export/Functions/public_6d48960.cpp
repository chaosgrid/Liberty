#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48960);

#define public_6d489c1 _public_6d489c1
#define public_6d489fd _public_6d489fd
#define public_6d48a01 _public_6d48a01
#define public_6d48a21 _public_6d48a21
#define public_6d48a2c _public_6d48a2c
#define public_6d48a31 _public_6d48a31
#define public_6d48a42 _public_6d48a42
#define public_6d48a47 _public_6d48a47
#define public_6d48aa4 _public_6d48aa4
#define public_6d48ab1 _public_6d48ab1
#define public_6d48af9 _public_6d48af9
#define public_6d48b0f _public_6d48b0f
#define public_6d48b4b _public_6d48b4b

PROC_DECLARE(0x6d48960, internal_6d48960, public_6d48960);
extern "C" NAKED register_t __cdecl internal_6d48960()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6d64bf0]
        push edi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push 2
        push 0
        push eax
        mov dword ptr ss : [esp+0x1C], ebx
        call esi
        mov ecx, dword ptr ds : [ebx]
        push ecx
        call dword ptr ds : [public_6d64bec]
        mov edx, dword ptr ds : [ebx]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x28]
        push 0
        push eax
        push edx
        sub edi, eax
        call esi
        mov eax, dword ptr ds : [ebx+0xC]
        lea esi, ds:[ebx+4]
        add esp, 0x1C
        cmp eax, edi
        jb public_6d48a31
        mov ecx, dword ptr ds : [public_6d64b80]
        mov ebp, dword ptr ds : [ecx]
        mov ecx, esi
        call dword ptr ds : [public_6d64ae8]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        sub ecx, edi
        cmp ecx, ebp
        jae public_6d489c1
        mov ebp, ecx
        public_6d489c1 : nop
        test ebp, ebp
        jbe public_6d48a01
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        lea edx, ds:[ecx+ebp]
        sub eax, edi
        push eax
        add edx, edi
        push edx
        add ecx, edi
        push ecx
        call dword ptr ds : [public_6d64c90]
        mov ebx, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub ebx, ebp
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d489fd
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [ebx+eax], 0
        public_6d489fd : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6d48a01 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d48a42
        mov al, byte ptr ds : [eax-1]
        test al, al
        je public_6d48a21
        cmp al, 0xFF
        je public_6d48a21
        mov edx, dword ptr ds : [esi+8]
        push 0
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d64b84]
        public_6d48a21 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d48a2c
        mov byte ptr ds : [eax-1], 0xFF
        public_6d48a2c : nop
        mov eax, dword ptr ds : [esi+4]
        jmp public_6d48a47
        public_6d48a31 : nop
        mov ecx, edi
        sub ecx, eax
        push 0
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d64b38]
        jmp public_6d48a01
        public_6d48a42 : nop
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d48a47 : nop
        mov ecx, dword ptr ds : [ebx]
        push ecx
        push edi
        push 1
        push eax
        call dword ptr ds : [public_6d64bd4]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0x10
        cmp eax, ebx
        jb public_6d48af9
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov edx, dword ptr ds : [public_6d64b80]
        mov ebp, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], edi
        je public_6d48aa4
        mov al, byte ptr ds : [edi-1]
        test al, al
        je public_6d48aa4
        cmp al, 0xFF
        je public_6d48aa4
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64b74]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ss : [esp+0x18]
        not ecx
        dec ecx
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64b08]
        public_6d48aa4 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        sub ecx, ebx
        cmp ecx, ebp
        jae public_6d48ab1
        mov ebp, ecx
        public_6d48ab1 : nop
        test ebp, ebp
        jbe public_6d48b4b
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        lea edx, ds:[ecx+ebp]
        sub eax, ebx
        push eax
        add edx, ebx
        push edx
        add ecx, ebx
        push ecx
        call dword ptr ds : [public_6d64c90]
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d48b4b
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [edi+eax], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6d48af9 : nop
        mov ecx, dword ptr ds : [public_6d64b80]
        mov edx, dword ptr ds : [ecx]
        sub ebx, eax
        sub edx, eax
        cmp edx, ebx
        ja public_6d48b0f
        call dword ptr ds : [public_6d64b4c]
        public_6d48b0f : nop
        test ebx, ebx
        jbe public_6d48b4b
        mov ebp, dword ptr ds : [esi+8]
        push 0
        add ebp, ebx
        push ebp
        mov ecx, esi
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d48b4b
        mov edx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add edi, edx
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_6d48b4b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d48960)
    }
}

#undef public_6d489c1
#undef public_6d489fd
#undef public_6d48a01
#undef public_6d48a21
#undef public_6d48a2c
#undef public_6d48a31
#undef public_6d48a42
#undef public_6d48a47
#undef public_6d48aa4
#undef public_6d48ab1
#undef public_6d48af9
#undef public_6d48b0f
#undef public_6d48b4b
