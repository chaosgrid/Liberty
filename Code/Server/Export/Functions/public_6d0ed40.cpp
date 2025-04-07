#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7370);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0ed40);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d0ed78 _public_6d0ed78
#define public_6d0ed7e _public_6d0ed7e
#define public_6d0ed9f _public_6d0ed9f
#define public_6d0edc6 _public_6d0edc6
#define public_6d0ee13 _public_6d0ee13
#define public_6d0ee1c _public_6d0ee1c
#define public_6d0ee20 _public_6d0ee20
#define public_6d0eed8 _public_6d0eed8
#define public_6d0ef00 _public_6d0ef00
#define public_6d0ef0f _public_6d0ef0f
#define public_6d0ef2d _public_6d0ef2d
#define public_6d0ef2f _public_6d0ef2f
#define public_6d0ef43 _public_6d0ef43
#define public_6d0ef62 _public_6d0ef62
#define public_6d0ef64 _public_6d0ef64
#define public_6d0ef96 _public_6d0ef96
#define public_6d0efc3 _public_6d0efc3

PROC_DECLARE(0x6d0ed40, internal_6d0ed40, public_6d0ed40);
extern "C" NAKED register_t __cdecl internal_6d0ed40()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0xC], ecx
        xor ecx, ecx
        cmp ebp, ecx
        push esi
        push edi
        je public_6d0ed78
        lea eax, ss:[ebp+0xC]
        cmp eax, ecx
        je public_6d0ed78
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ecx
        je public_6d0ed78
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x803
        cmp eax, 0x803
        jne public_6d0ed78
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6d0ed7e
        public_6d0ed78 : nop
        mov dword ptr ss : [esp+0x10], ecx
        mov esi, ecx
        public_6d0ed7e : nop
        mov ecx, dword ptr ds : [esi+0xEC]
        mov eax, dword ptr ds : [esi+0xF0]
        mov ebx, dword ptr ss : [esp+0x50]
        cmp ebx, eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], eax
        jbe public_6d0ed9f
        mov ebx, eax
        public_6d0ed9f : nop
        push ecx
        mov dword ptr ss : [esp+0x54], 0x3F800000
        call dword ptr ds : [public_6d64418]
        add esp, 4
        test al, al
        jne public_6d0edc6
        fld dword ptr ds : [esi+0xF4]
        mov edx, dword ptr ds : [esi+0xEC]
        fdiv dword ptr ds : [edx+0x1C]
        jmp public_6d0ee1c
        public_6d0edc6 : nop
        mov ecx, dword ptr ds : [esi+0xEC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 0xA
        jne public_6d0ee20
        mov ecx, dword ptr ds : [esi+0xEC]
        call dword ptr ds : [public_6d64428]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6d0ee20
        cmp ebx, dword ptr ss : [esp+0x1C]
        jne public_6d0ee20
        fld dword ptr ds : [esi+0xF4]
        fsub dword ptr ss : [ebp+0x68]
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        je public_6d0ee13
        fstp st(0)
        fld dword ptr ds : [public_6d65188]
        public_6d0ee13 : nop
        mov ecx, dword ptr ds : [esi+0xEC]
        fdiv dword ptr ds : [ecx+0x1C]
        public_6d0ee1c : nop
        fstp dword ptr ss : [esp+0x50]
        public_6d0ee20 : nop
        mov dl, byte ptr ds : [esi+0xFD]
        mov ecx, dword ptr ss : [esp+0x50]
        mov esi, dword ptr ss : [esp+0x4C]
        mov byte ptr ss : [esp+0x20], dl
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebx
        push edx
        push esi
        call public_6d0e8d0
        mov ecx, ebp
        mov edi, eax
        mov eax, dword ptr ss : [ebp]
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [public_6d644bc]
        lea ecx, ss:[esp+0x34]
        push ecx
        push 0x18
        mov dword ptr ss : [esp+0x48], eax
        mov word ptr ss : [esp+0x44], di
        mov dword ptr ss : [esp+0x4C], ebx
        call public_6d43650
        mov edx, dword ptr ds : [public_6d6402c]
        xor eax, eax
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], eax
        mov cx, word ptr ds : [edx]
        mov edx, dword ptr ss : [ebp]
        mov word ptr ss : [esp+0x38], cx
        add esp, 0xC
        mov ecx, ebp
        mov word ptr ss : [esp+0x2E], ax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp+0x14]
        mov cx, word ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [edx+0xC]
        mov word ptr ss : [esp+0x2C], cx
        mov word ptr ss : [esp+0x2E], bx
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6d0ef0f
        public_6d0eed8 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        lea ecx, ds:[edi+8]
        call public_6cf7370
        test al, al
        je public_6d0ef00
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x24]
        push eax
        mov eax, dword ptr ds : [edi+0x40]
        push eax
        call dword ptr ds : [edx+0x100]
        public_6d0ef00 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ecx+0xC]
        jne public_6d0eed8
        mov ebp, dword ptr ss : [esp+0x48]
        public_6d0ef0f : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp ebx, eax
        jne public_6d0efc3
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6d0ef2d
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d0ef2f
        public_6d0ef2d : nop
        xor eax, eax
        public_6d0ef2f : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        je public_6d0ef43
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d0ef96
        public_6d0ef43 : nop
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_6d0ef62
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d0ef62
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_6d0ef64
        public_6d0ef62 : nop
        xor eax, eax
        public_6d0ef64 : nop
        mov edx, dword ptr ss : [esp+0x54]
        push edx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d641c4]
        push eax
        call dword ptr ds : [public_6d641cc]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6d0ef96
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d64718]
        public_6d0ef96 : nop
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        push eax
        push 2
        mov ecx, ebp
        call dword ptr ds : [edi+0x158]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+0xF0], 0
        pop ebx
        add esp, 0x34
        ret 0x10
        public_6d0efc3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        sub eax, ebx
        pop ebp
        mov dword ptr ds : [ecx+0xF0], eax
        pop ebx
        add esp, 0x34
        ret 0x10
        UNREACHABLE_TRAP(0x6d0ed40)
    }
}

#undef public_6d0ed78
#undef public_6d0ed7e
#undef public_6d0ed9f
#undef public_6d0edc6
#undef public_6d0ee13
#undef public_6d0ee1c
#undef public_6d0ee20
#undef public_6d0eed8
#undef public_6d0ef00
#undef public_6d0ef0f
#undef public_6d0ef2d
#undef public_6d0ef2f
#undef public_6d0ef43
#undef public_6d0ef62
#undef public_6d0ef64
#undef public_6d0ef96
#undef public_6d0efc3
