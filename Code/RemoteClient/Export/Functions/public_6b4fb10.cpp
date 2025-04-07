#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a820);
CLANG_FORWARD_PROC_SYMBOL(public_6b4fb10);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4fb32 _public_6b4fb32
#define public_6b4fb79 _public_6b4fb79
#define public_6b4fb7b _public_6b4fb7b
#define public_6b4fb7e _public_6b4fb7e
#define public_6b4fb90 _public_6b4fb90
#define public_6b4fbd8 _public_6b4fbd8
#define public_6b4fc01 _public_6b4fc01
#define public_6b4fc2a _public_6b4fc2a
#define public_6b4fc57 _public_6b4fc57
#define public_6b4fc81 _public_6b4fc81
#define public_6b4fca7 _public_6b4fca7
#define public_6b4fcce _public_6b4fcce
#define public_6b4fcfa _public_6b4fcfa
#define public_6b4fd33 _public_6b4fd33
#define public_6b4fd73 _public_6b4fd73
#define public_6b4fd85 _public_6b4fd85
#define public_6b4fd87 _public_6b4fd87
#define public_6b4fd91 _public_6b4fd91
#define public_6b4fd9e _public_6b4fd9e

PROC_DECLARE(0x6b4fb10, internal_6b4fb10, public_6b4fb10);
extern "C" NAKED register_t __cdecl internal_6b4fb10()
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
        jbe public_6b4fb32
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6b4fb32 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b4fd87
        mov eax, dword ptr ss : [ebp+0x18]
        xor esi, esi
        mov si, word ptr ds : [eax]
        add eax, 2
        test si, si
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [esp+0x18], esi
        jbe public_6b4fd85
        mov eax, dword ptr ss : [ebp+0x20]
        test eax, eax
        mov edi, 4
        jne public_6b4fb7e
        push edi
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4fb79
        mov dword ptr ds : [eax], 0
        jmp public_6b4fb7b
        public_6b4fb79 : nop
        xor eax, eax
        public_6b4fb7b : nop
        mov dword ptr ss : [ebp+0x20], eax
        public_6b4fb7e : nop
        test si, si
        mov dword ptr ss : [esp+0x10], 0
        jbe public_6b4fd85
        nop 
        public_6b4fb90 : nop
        push 0x18
        call public_6b6a134
        mov ebx, eax
        xor ecx, ecx
        add esp, 4
        cmp ebx, ecx
        je public_6b4fd73
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
        jbe public_6b4fbd8
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b4fbd8 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6b4fd91
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
        jbe public_6b4fc01
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b4fc01 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6b4fd91
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
        jbe public_6b4fc2a
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b4fc2a : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6b4fd91
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
        jbe public_6b4fc57
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b4fc57 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6b4fd91
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
        jbe public_6b4fc81
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b4fc81 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6b4fd91
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
        jbe public_6b4fca7
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b4fca7 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6b4fd91
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
        jbe public_6b4fcce
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b4fcce : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6b4fd91
        mov eax, dword ptr ss : [ebp+0x18]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ds : [ebx+0x10], dx
        mov dword ptr ss : [ebp+0x18], eax
        movzx eax, word ptr ds : [ebx+0x10]
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        add eax, edi
        cmp eax, edx
        jbe public_6b4fcfa
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b4fcfa : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6b4fd91
        movzx ecx, word ptr ds : [ebx+0x10]
        push ecx
        call public_6b6a134
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0x14], eax
        je public_6b4fd9e
        movzx edx, word ptr ds : [ebx+0x10]
        mov edi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6b4fd33
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b4fd33 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b4fd91
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
        call public_6b3a820
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, 4
        public_6b4fd73 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp ax, si
        mov dword ptr ss : [esp+0x10], eax
        jb public_6b4fb90
        public_6b4fd85 : nop
        xor eax, eax
        public_6b4fd87 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b4fd91 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b4fd9e : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6b4fb10)
    }
}

#undef public_6b4fb32
#undef public_6b4fb79
#undef public_6b4fb7b
#undef public_6b4fb7e
#undef public_6b4fb90
#undef public_6b4fbd8
#undef public_6b4fc01
#undef public_6b4fc2a
#undef public_6b4fc57
#undef public_6b4fc81
#undef public_6b4fca7
#undef public_6b4fcce
#undef public_6b4fcfa
#undef public_6b4fd33
#undef public_6b4fd73
#undef public_6b4fd85
#undef public_6b4fd87
#undef public_6b4fd91
#undef public_6b4fd9e
