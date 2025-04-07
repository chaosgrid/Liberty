#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91580);
CLANG_FORWARD_PROC_SYMBOL(public_6da2480);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da24a2 _public_6da24a2
#define public_6da24e9 _public_6da24e9
#define public_6da24eb _public_6da24eb
#define public_6da24ee _public_6da24ee
#define public_6da2500 _public_6da2500
#define public_6da2548 _public_6da2548
#define public_6da2571 _public_6da2571
#define public_6da259a _public_6da259a
#define public_6da25c7 _public_6da25c7
#define public_6da25f1 _public_6da25f1
#define public_6da2617 _public_6da2617
#define public_6da263e _public_6da263e
#define public_6da267f _public_6da267f
#define public_6da26bf _public_6da26bf
#define public_6da26d1 _public_6da26d1
#define public_6da26d3 _public_6da26d3
#define public_6da26dd _public_6da26dd

PROC_DECLARE(0x6da2480, internal_6da2480, public_6da2480);
extern "C" NAKED register_t __cdecl internal_6da2480()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        push esi
        push edi
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da24a2
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da24a2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da26d3
        mov eax, dword ptr ss : [ebp+0x18]
        xor esi, esi
        mov si, word ptr ds : [eax]
        add eax, 2
        test si, si
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [esp+0x18], esi
        jbe public_6da26d1
        mov eax, dword ptr ss : [ebp+0x20]
        test eax, eax
        mov edi, 4
        jne public_6da24ee
        push edi
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6da24e9
        mov dword ptr ds : [eax], 0
        jmp public_6da24eb
        public_6da24e9 : nop
        xor eax, eax
        public_6da24eb : nop
        mov dword ptr ss : [ebp+0x20], eax
        public_6da24ee : nop
        test si, si
        mov dword ptr ss : [esp+0x10], 0
        jbe public_6da26d1
        nop 
        public_6da2500 : nop
        push 0x18
        call public_6db1f8a
        mov ebx, eax
        xor ecx, ecx
        add esp, 4
        cmp ebx, ecx
        je public_6da26bf
        mov dword ptr ds : [ebx], ecx
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], ecx
        mov word ptr ds : [ebx+0xC], cx
        mov byte ptr ds : [ebx+0xE], cl
        mov byte ptr ds : [ebx+0xF], cl
        mov word ptr ds : [ebx+0x10], cx
        mov dword ptr ds : [ebx+0x14], ecx
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        add esi, edi
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], esi
        mov esi, 0x17
        jbe public_6da2548
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da2548 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6da26dd
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        add eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da2571
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da2571 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6da26dd
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        add eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da259a
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da259a : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6da26dd
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov edi, 2
        add eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da25c7
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da25c7 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6da26dd
        mov eax, dword ptr ss : [ebp+0x18]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ds : [ebx+0xC], dx
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da25f1
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da25f1 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6da26dd
        mov eax, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [ebx+0xE], dl
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da2617
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da2617 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6da26dd
        mov eax, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [ebx+0xF], dl
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        add eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da263e
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da263e : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6da26dd
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ds : [eax]
        mov word ptr ds : [ebx+0x10], cx
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        movzx edx, word ptr ds : [ebx+0x10]
        push edx
        call public_6db1f8a
        mov dword ptr ds : [ebx+0x14], eax
        movzx eax, word ptr ds : [ebx+0x10]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da267f
        mov dword ptr ss : [ebp+0x1C], esi
        public_6da267f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da26dd
        movzx eax, word ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ds : [ebx+0x14]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov ecx, dword ptr ss : [ebp+0x20]
        push ebx
        call public_6d91580
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, 4
        public_6da26bf : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp ax, si
        mov dword ptr ss : [esp+0x10], eax
        jb public_6da2500
        public_6da26d1 : nop
        xor eax, eax
        public_6da26d3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6da26dd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6da2480)
    }
}

#undef public_6da24a2
#undef public_6da24e9
#undef public_6da24eb
#undef public_6da24ee
#undef public_6da2500
#undef public_6da2548
#undef public_6da2571
#undef public_6da259a
#undef public_6da25c7
#undef public_6da25f1
#undef public_6da2617
#undef public_6da263e
#undef public_6da267f
#undef public_6da26bf
#undef public_6da26d1
#undef public_6da26d3
#undef public_6da26dd
