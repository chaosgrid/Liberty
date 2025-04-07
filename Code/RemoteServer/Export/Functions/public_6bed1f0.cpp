#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdcb60);
CLANG_FORWARD_PROC_SYMBOL(public_6bed1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bed212 _public_6bed212
#define public_6bed259 _public_6bed259
#define public_6bed25b _public_6bed25b
#define public_6bed25e _public_6bed25e
#define public_6bed270 _public_6bed270
#define public_6bed2b8 _public_6bed2b8
#define public_6bed2e1 _public_6bed2e1
#define public_6bed30a _public_6bed30a
#define public_6bed337 _public_6bed337
#define public_6bed361 _public_6bed361
#define public_6bed387 _public_6bed387
#define public_6bed3ae _public_6bed3ae
#define public_6bed3ef _public_6bed3ef
#define public_6bed42f _public_6bed42f
#define public_6bed441 _public_6bed441
#define public_6bed443 _public_6bed443
#define public_6bed44d _public_6bed44d

PROC_DECLARE(0x6bed1f0, internal_6bed1f0, public_6bed1f0);
extern "C" NAKED register_t __cdecl internal_6bed1f0()
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
        jbe public_6bed212
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6bed212 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bed443
        mov eax, dword ptr ss : [ebp+0x18]
        xor esi, esi
        mov si, word ptr ds : [eax]
        add eax, 2
        test si, si
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [esp+0x18], esi
        jbe public_6bed441
        mov eax, dword ptr ss : [ebp+0x20]
        test eax, eax
        mov edi, 4
        jne public_6bed25e
        push edi
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bed259
        mov dword ptr ds : [eax], 0
        jmp public_6bed25b
        public_6bed259 : nop
        xor eax, eax
        public_6bed25b : nop
        mov dword ptr ss : [ebp+0x20], eax
        public_6bed25e : nop
        test si, si
        mov dword ptr ss : [esp+0x10], 0
        jbe public_6bed441
        nop 
        public_6bed270 : nop
        push 0x18
        call public_6c09d26
        mov ebx, eax
        xor ecx, ecx
        add esp, 4
        cmp ebx, ecx
        je public_6bed42f
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
        jbe public_6bed2b8
        mov dword ptr ss : [ebp+0x1C], esi
        public_6bed2b8 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6bed44d
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
        jbe public_6bed2e1
        mov dword ptr ss : [ebp+0x1C], esi
        public_6bed2e1 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6bed44d
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
        jbe public_6bed30a
        mov dword ptr ss : [ebp+0x1C], esi
        public_6bed30a : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6bed44d
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
        jbe public_6bed337
        mov dword ptr ss : [ebp+0x1C], esi
        public_6bed337 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6bed44d
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
        jbe public_6bed361
        mov dword ptr ss : [ebp+0x1C], esi
        public_6bed361 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6bed44d
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
        jbe public_6bed387
        mov dword ptr ss : [ebp+0x1C], esi
        public_6bed387 : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6bed44d
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
        jbe public_6bed3ae
        mov dword ptr ss : [ebp+0x1C], esi
        public_6bed3ae : nop
        cmp dword ptr ss : [ebp+0x1C], ecx
        jne public_6bed44d
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ds : [eax]
        mov word ptr ds : [ebx+0x10], cx
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        movzx edx, word ptr ds : [ebx+0x10]
        push edx
        call public_6c09d26
        mov dword ptr ds : [ebx+0x14], eax
        movzx eax, word ptr ds : [ebx+0x10]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6bed3ef
        mov dword ptr ss : [ebp+0x1C], esi
        public_6bed3ef : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6bed44d
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
        call public_6bdcb60
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, 4
        public_6bed42f : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp ax, si
        mov dword ptr ss : [esp+0x10], eax
        jb public_6bed270
        public_6bed441 : nop
        xor eax, eax
        public_6bed443 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bed44d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6bed1f0)
    }
}

#undef public_6bed212
#undef public_6bed259
#undef public_6bed25b
#undef public_6bed25e
#undef public_6bed270
#undef public_6bed2b8
#undef public_6bed2e1
#undef public_6bed30a
#undef public_6bed337
#undef public_6bed361
#undef public_6bed387
#undef public_6bed3ae
#undef public_6bed3ef
#undef public_6bed42f
#undef public_6bed441
#undef public_6bed443
#undef public_6bed44d
