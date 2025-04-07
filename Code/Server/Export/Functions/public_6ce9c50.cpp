#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1a00);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d08a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b200);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b270);

#define public_6ce9ca1 _public_6ce9ca1
#define public_6ce9cb7 _public_6ce9cb7
#define public_6ce9cfe _public_6ce9cfe
#define public_6ce9d00 _public_6ce9d00
#define public_6ce9d32 _public_6ce9d32
#define public_6ce9d39 _public_6ce9d39
#define public_6ce9dbb _public_6ce9dbb
#define public_6ce9dc9 _public_6ce9dc9
#define public_6ce9e75 _public_6ce9e75
#define public_6ce9e7c _public_6ce9e7c
#define public_6ce9ee4 _public_6ce9ee4
#define public_6ce9ee6 _public_6ce9ee6
#define public_6ce9f0c _public_6ce9f0c
#define public_6ce9f19 _public_6ce9f19
#define public_6ce9f20 _public_6ce9f20
#define public_6ce9f22 _public_6ce9f22
#define public_6ce9f3a _public_6ce9f3a

PROC_DECLARE(0x6ce9c50, internal_6ce9c50, public_6ce9c50);
extern "C" NAKED register_t __cdecl internal_6ce9c50()
{
    __asm
    {
        sub esp, 0xC4
        mov eax, dword ptr ss : [esp+0xC8]
        mov eax, dword ptr ds : [eax+0x4C]
        test eax, eax
        push ebx
        mov ebx, dword ptr ss : [esp+0xD4]
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6ce9f3a
        mov ecx, dword ptr ss : [esp+0xD4]
        cmp ecx, 4
        je public_6ce9cb7
        cmp ecx, 5
        je public_6ce9cb7
        cmp ecx, 2
        jne public_6ce9ca1
        mov edx, dword ptr ss : [ebp]
        push ebx
        push 4
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x224]
        jmp public_6ce9f3a
        public_6ce9ca1 : nop
        movzx eax, word ptr ds : [eax+8]
        push 1
        push 0
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6d641ec]
        jmp public_6ce9f3a
        public_6ce9cb7 : nop
        push esi
        mov esi, dword ptr ds : [ebx+0x18]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test edi, edi
        mov dword ptr ss : [esp+0x14], esi
        je public_6ce9d39
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_6ce9d39
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6d90260
        call public_6ce1a00
        test al, al
        je public_6ce9d32
        test edi, edi
        je public_6ce9cfe
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        je public_6ce9d00
        public_6ce9cfe : nop
        xor edi, edi
        public_6ce9d00 : nop
        mov ecx, dword ptr ds : [public_6d90260]
        imul esi, 0x418
        lea esi, ds:[esi+ecx-0x418]
        mov ecx, edi
        call dword ptr ds : [public_6d6425c]
        mov edx, dword ptr ds : [edi+0xB0]
        mov ecx, esi
        push eax
        push edx
        call public_6d4b200
        test al, al
        je public_6ce9f19
        public_6ce9d32 : nop
        mov ebx, dword ptr ss : [esp+0xE0]
        public_6ce9d39 : nop
        mov esi, dword ptr ds : [public_6d64248]
        lea ecx, ss:[esp+0x48]
        call esi
        cmp dword ptr ss : [esp+0xDC], 4
        jne public_6ce9dbb
        xor eax, eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], eax
        call esi
        mov ecx, dword ptr ss : [ebp+0x28]
        call public_6d06cd0
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x24], edx
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x28]
        lea eax, ss:[esp+0x18]
        push eax
        push 0x13
        call public_6d43650
        mov ecx, 8
        lea esi, ss:[esp+0x30]
        lea edi, ss:[esp+0x50]
        add esp, 8
        rep movsd
        jmp public_6ce9dc9
        public_6ce9dbb : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x48]
        push eax
        call dword ptr ds : [edx+0x28]
        public_6ce9dc9 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        xor esi, esi
        cmp eax, esi
        jle public_6ce9f0c
        fld dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6ce9f0c
        mov ecx, dword ptr ss : [esp+0xD8]
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x68]
        push eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x70], esi
        mov dword ptr ss : [esp+0x74], esi
        mov dword ptr ss : [esp+0x78], esi
        mov dword ptr ss : [esp+0x7C], esi
        mov dword ptr ss : [esp+0x80], esi
        mov dword ptr ss : [esp+0x84], esi
        mov dword ptr ss : [esp+0x88], esi
        mov dword ptr ss : [esp+0x8C], esi
        mov byte ptr ss : [esp+0xD8], 1
        mov byte ptr ss : [esp+0xD9], 0
        call dword ptr ds : [edx+0x248]
        test al, al
        je public_6ce9f22
        fld dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ds : [ebx+0x10]
        fstp dword ptr ss : [esp+0x78]
        cmp eax, 0x16
        push 1
        jne public_6ce9e75
        lea ecx, ss:[esp+0x6C]
        push ecx
        push 1
        jmp public_6ce9e7c
        public_6ce9e75 : nop
        lea eax, ss:[esp+0x6C]
        push eax
        push 2
        public_6ce9e7c : nop
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp+0x28]
        push eax
        call public_6d08a40
        mov ebp, dword ptr ss : [ebp+0x10]
        cmp ebp, esi
        mov eax, dword ptr ds : [ebx+0x18]
        je public_6ce9f22
        mov ecx, dword ptr ss : [ebp+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_6ce9f22
        cmp eax, esi
        jbe public_6ce9f22
        mov edx, dword ptr ds : [public_6d90264]
        lea ecx, ds:[eax-1]
        cmp ecx, edx
        jae public_6ce9f22
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+edx+0x348], esi
        je public_6ce9f22
        cmp ebp, esi
        je public_6ce9ee4
        mov ecx, dword ptr ss : [ebp+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_6ce9ee6
        public_6ce9ee4 : nop
        xor ebp, ebp
        public_6ce9ee6 : nop
        imul eax, 0x418
        mov ecx, ebp
        lea esi, ds:[eax+edx-0x418]
        call dword ptr ds : [public_6d6425c]
        mov edx, dword ptr ss : [ebp+0xB0]
        mov ecx, esi
        push eax
        push edx
        call public_6d4b270
        jmp public_6ce9f20
        public_6ce9f0c : nop
        mov dword ptr ss : [esp+0xDC], 2
        jmp public_6ce9f22
        public_6ce9f19 : nop
        mov ebx, dword ptr ss : [esp+0xE0]
        public_6ce9f20 : nop
        xor esi, esi
        public_6ce9f22 : nop
        mov eax, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        mov cx, word ptr ds : [eax+8]
        push 1
        push esi
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6d641ec]
        pop edi
        pop esi
        public_6ce9f3a : nop
        mov eax, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ss : [esp+0xD4]
        xor ecx, ecx
        mov cx, word ptr ds : [eax+8]
        push edx
        push 0
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6d641ec]
        pop ebp
        pop ebx
        add esp, 0xC4
        ret 0xC
        UNREACHABLE_TRAP(0x6ce9c50)
    }
}

#undef public_6ce9ca1
#undef public_6ce9cb7
#undef public_6ce9cfe
#undef public_6ce9d00
#undef public_6ce9d32
#undef public_6ce9d39
#undef public_6ce9dbb
#undef public_6ce9dc9
#undef public_6ce9e75
#undef public_6ce9e7c
#undef public_6ce9ee4
#undef public_6ce9ee6
#undef public_6ce9f0c
#undef public_6ce9f19
#undef public_6ce9f20
#undef public_6ce9f22
#undef public_6ce9f3a
