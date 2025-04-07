#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f86ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f877c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f87a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1180);

#define public_6f8ab6a _public_6f8ab6a
#define public_6f8ab70 _public_6f8ab70
#define public_6f8ab80 _public_6f8ab80
#define public_6f8aba3 _public_6f8aba3
#define public_6f8abb1 _public_6f8abb1
#define public_6f8abd6 _public_6f8abd6
#define public_6f8abe0 _public_6f8abe0
#define public_6f8ac02 _public_6f8ac02
#define public_6f8ac0c _public_6f8ac0c
#define public_6f8ac35 _public_6f8ac35
#define public_6f8ac40 _public_6f8ac40
#define public_6f8ac62 _public_6f8ac62
#define public_6f8ac6c _public_6f8ac6c
#define public_6f8ac8f _public_6f8ac8f
#define public_6f8ac91 _public_6f8ac91
#define public_6f8acc2 _public_6f8acc2
#define public_6f8ace1 _public_6f8ace1
#define public_6f8acf6 _public_6f8acf6
#define public_6f8ad20 _public_6f8ad20
#define public_6f8ad50 _public_6f8ad50
#define public_6f8ad7a _public_6f8ad7a
#define public_6f8ada3 _public_6f8ada3
#define public_6f8adbe _public_6f8adbe

PROC_DECLARE(0x6f8ab10, internal_6f8ab10, public_6f8ab10);
extern "C" NAKED register_t __cdecl internal_6f8ab10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1180 @0x6f8ab12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1180
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        push edi
        push 0
        push 2
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x5C]
        push 0
        lea eax, ss:[esp+0x44]
        push eax
        mov dword ptr ss : [esp+0x24], esi
        call public_6f87a50
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        mov edi, dword ptr ss : [esp+0x68]
        mov ebp, dword ptr ds : [public_6fb34cc]
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f8abb1
        mov eax, dword ptr ds : [edi+8]
        jmp public_6f8ab70
        public_6f8ab6a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, edi
        public_6f8ab70 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ds : [esi+0x4C]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, eax
        je public_6f8aba3
        lea ecx, ds:[ecx]
        public_6f8ab80 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+0xC]
        push 0
        push eax
        push ecx
        call ebp
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        add esp, 0xC
        cmp esi, eax
        jne public_6f8ab80
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f8aba3 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6f8ab6a
        mov esi, dword ptr ss : [esp+0x14]
        public_6f8abb1 : nop
        mov ecx, dword ptr ds : [esi+0x58]
        push 0
        push 2
        push 0xFFFFFFFF
        lea edx, ss:[esp+0x34]
        push edx
        call public_6f86ae0
        mov ecx, dword ptr ss : [esp+0x30]
        mov ebx, dword ptr ds : [ecx]
        cmp ebx, ecx
        mov byte ptr ss : [esp+0x60], 1
        je public_6f8ac0c
        mov eax, dword ptr ds : [edi+8]
        public_6f8abd6 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, eax
        je public_6f8ac02
        lea ecx, ds:[ecx]
        public_6f8abe0 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+0xC]
        push 0
        push eax
        push ecx
        call ebp
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        add esp, 0xC
        cmp esi, eax
        jne public_6f8abe0
        mov ecx, dword ptr ss : [esp+0x30]
        public_6f8ac02 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, ecx
        jne public_6f8abd6
        mov esi, dword ptr ss : [esp+0x14]
        public_6f8ac0c : nop
        mov ecx, dword ptr ds : [esi+0x60]
        push 0
        push 2
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        call public_6f877c0
        mov ecx, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [ecx]
        cmp ebx, ecx
        mov byte ptr ss : [esp+0x60], 2
        je public_6f8ac6c
        mov eax, dword ptr ds : [edi+8]
        public_6f8ac35 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, eax
        je public_6f8ac62
        lea esp, ss:[esp]
        public_6f8ac40 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+0xC]
        push 0
        push eax
        push ecx
        call ebp
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        add esp, 0xC
        cmp esi, eax
        jne public_6f8ac40
        mov ecx, dword ptr ss : [esp+0x20]
        public_6f8ac62 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, ecx
        jne public_6f8ac35
        mov esi, dword ptr ss : [esp+0x14]
        public_6f8ac6c : nop
        mov ecx, dword ptr ds : [esi+0x60]
        xor ebx, ebx
        push ebx
        push 4
        push ebx
        push ebx
        push ebx
        lea edx, ss:[esp+0x5C]
        push edx
        call public_6f877c0
        cmp eax, ebx
        mov byte ptr ss : [esp+0x60], 3
        je public_6f8ac8f
        add eax, 4
        jmp public_6f8ac91
        public_6f8ac8f : nop
        xor eax, eax
        public_6f8ac91 : nop
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6f93490
        mov ebp, offset public_6fbc7cc
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x60], 2
        mov dword ptr ss : [esp+0x48], ebp
        call public_6f15350
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f8ace1
        mov esi, dword ptr ds : [public_6fb3414]
        public_6f8acc2 : nop
        mov eax, dword ptr ds : [edi+8]
        xor ecx, ecx
        mov cx, word ptr ds : [eax+0x74]
        push 1
        add eax, 0x70
        push ecx
        push eax
        call esi
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        cmp edi, eax
        jne public_6f8acc2
        public_6f8ace1 : nop
        mov dword ptr ss : [esp+0x18], ebp
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x60], 1
        mov esi, eax
        mov dword ptr ss : [esp+0x68], ecx
        je public_6f8ad20
        public_6f8acf6 : nop
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x70]
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x68], esi
        jne public_6f8acf6
        mov eax, dword ptr ss : [esp+0x20]
        public_6f8ad20 : nop
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebp
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, eax
        mov byte ptr ss : [esp+0x60], 0
        mov esi, eax
        mov dword ptr ss : [esp+0x68], ecx
        je public_6f8ad7a
        lea ebx, ds:[ebx]
        public_6f8ad50 : nop
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x70]
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x68], esi
        jne public_6f8ad50
        mov eax, dword ptr ss : [esp+0x30]
        public_6f8ad7a : nop
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebp
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        mov edi, eax
        je public_6f8adbe
        public_6f8ada3 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x6C]
        push edx
        lea ecx, ss:[esp+0x44]
        call public_6ecfe80
        cmp esi, edi
        jne public_6f8ada3
        mov eax, dword ptr ss : [esp+0x40]
        public_6f8adbe : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x5C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x6f8ab10)
    }
}

#undef public_6f8ab6a
#undef public_6f8ab70
#undef public_6f8ab80
#undef public_6f8aba3
#undef public_6f8abb1
#undef public_6f8abd6
#undef public_6f8abe0
#undef public_6f8ac02
#undef public_6f8ac0c
#undef public_6f8ac35
#undef public_6f8ac40
#undef public_6f8ac62
#undef public_6f8ac6c
#undef public_6f8ac8f
#undef public_6f8ac91
#undef public_6f8acc2
#undef public_6f8ace1
#undef public_6f8acf6
#undef public_6f8ad20
#undef public_6f8ad50
#undef public_6f8ad7a
#undef public_6f8ada3
#undef public_6f8adbe
