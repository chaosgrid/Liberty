#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c08640);
CLANG_FORWARD_PROC_SYMBOL(public_6c09ee8);

#define public_6bf0df0 _public_6bf0df0
#define public_6bf0e16 _public_6bf0e16
#define public_6bf0e25 _public_6bf0e25
#define public_6bf0e34 _public_6bf0e34
#define public_6bf0e4b _public_6bf0e4b
#define public_6bf0e61 _public_6bf0e61
#define public_6bf0e85 _public_6bf0e85
#define public_6bf0e9b _public_6bf0e9b
#define public_6bf0ef5 _public_6bf0ef5
#define public_6bf0f08 _public_6bf0f08
#define public_6bf0f22 _public_6bf0f22
#define public_6bf0f35 _public_6bf0f35
#define public_6bf0f57 _public_6bf0f57
#define public_6bf0f6a _public_6bf0f6a
#define public_6bf0f9a _public_6bf0f9a
#define public_6bf0fad _public_6bf0fad
#define public_6bf0fc7 _public_6bf0fc7
#define public_6bf0fda _public_6bf0fda
#define public_6bf1016 _public_6bf1016
#define public_6bf102c _public_6bf102c
#define public_6bf1053 _public_6bf1053
#define public_6bf1069 _public_6bf1069
#define public_6bf107e _public_6bf107e
#define public_6bf10a5 _public_6bf10a5
#define public_6bf10bb _public_6bf10bb
#define public_6bf10e8 _public_6bf10e8
#define public_6bf10fe _public_6bf10fe
#define public_6bf1142 _public_6bf1142
#define public_6bf1158 _public_6bf1158
#define public_6bf1187 _public_6bf1187
#define public_6bf119d _public_6bf119d
#define public_6bf11ac _public_6bf11ac
#define public_6bf11c9 _public_6bf11c9
#define public_6bf11f0 _public_6bf11f0
#define public_6bf1206 _public_6bf1206
#define public_6bf123f _public_6bf123f
#define public_6bf1255 _public_6bf1255
#define public_6bf125e _public_6bf125e
#define public_6bf1284 _public_6bf1284
#define public_6bf12ba _public_6bf12ba

PROC_DECLARE(0x6bf0da0, internal_6bf0da0, public_6bf0da0);
extern "C" NAKED register_t __cdecl internal_6bf0da0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        lea ebp, ds:[ebx+0x10]
        mov dword ptr ss : [ebp+4], edi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        mov edx, dword ptr ds : [ebx+0x14]
        push ebp
        push edx
        lea esi, ds:[ebx+0x18]
        push esi
        mov ecx, ebx
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bf0df0
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf0df0 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        push edi
        push ecx
        mov ecx, ebx
        call public_6c08640
        mov al, byte ptr ds : [ebx+0x9C]
        test al, al
        mov byte ptr ss : [esp+0x20], 0
        je public_6bf0e16
        mov byte ptr ss : [esp+0x20], 1
        public_6bf0e16 : nop
        mov eax, dword ptr ds : [ebx+0xBC]
        test eax, eax
        je public_6bf0e25
        or byte ptr ss : [esp+0x20], 4
        public_6bf0e25 : nop
        mov al, byte ptr ds : [ebx+0xE8]
        test al, al
        je public_6bf0e34
        or byte ptr ss : [esp+0x20], 2
        public_6bf0e34 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf0e4b
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6bf0e4b : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf0e61
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf0e61 : nop
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf0e85
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6bf0e85 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf0e9b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf0e9b : nop
        mov eax, dword ptr ds : [ebx+0xA0]
        mov ecx, dword ptr ds : [ebx+0xA4]
        mov edi, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ebx+0xA8]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], edx
        call public_6bda4c0
        fld dword ptr ds : [ebx+0xB8]
        fmul qword ptr ds : [public_6c0df40]
        add edi, 0xC
        mov dword ptr ds : [esi], edi
        call public_6c09ee8
        mov ecx, dword ptr ss : [ebp]
        mov dl, al
        mov eax, dword ptr ss : [ebp+4]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        mov edi, 0x16
        jbe public_6bf0ef5
        mov dword ptr ss : [ebp+0xC], edi
        public_6bf0ef5 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf0f08
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf0f08 : nop
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        add ecx, 2
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        jbe public_6bf0f22
        mov dword ptr ss : [ebp+0xC], edi
        public_6bf0f22 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf0f35
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf0f35 : nop
        mov ecx, dword ptr ds : [esi]
        mov dx, word ptr ds : [ebx+0xC0]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        jbe public_6bf0f57
        mov dword ptr ss : [ebp+0xC], edi
        public_6bf0f57 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf0f6a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf0f6a : nop
        mov ecx, dword ptr ds : [esi]
        mov al, byte ptr ds : [ebx+0xC2]
        mov byte ptr ds : [ecx], al
        mov al, byte ptr ss : [esp+0x20]
        inc ecx
        test al, 4
        mov dword ptr ds : [esi], ecx
        je public_6bf107e
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        mov dl, byte ptr ds : [ebx+0xBC]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        jbe public_6bf0f9a
        mov dword ptr ss : [ebp+0xC], edi
        public_6bf0f9a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf0fad
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf0fad : nop
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        add ecx, 2
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        jbe public_6bf0fc7
        mov dword ptr ss : [ebp+0xC], edi
        public_6bf0fc7 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf0fda
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf0fda : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [ebx+0xC4]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6c0b080]
        test al, al
        jne public_6bf11c9
        mov edi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        mov cl, byte ptr ds : [ebx+0xD8]
        inc edi
        mov eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp], edi
        jbe public_6bf1016
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6bf1016 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf102c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf102c : nop
        mov eax, dword ptr ds : [esi]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [ebx+0xD8]
        inc eax
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        shl edx, 1
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ss : [ebp], edi
        jbe public_6bf1053
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6bf1053 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf1069
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf1069 : nop
        mov eax, dword ptr ds : [ebx+0xD8]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ds : [ebx+0xDC]
        shl eax, 1
        jmp public_6bf11ac
        public_6bf107e : nop
        call dword ptr ds : [public_6c0b080]
        test al, al
        jne public_6bf11c9
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf10a5
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6bf10a5 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf10bb
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf10bb : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ebx+0xC8]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [ebx+0xC8]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf10e8
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6bf10e8 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf10fe
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf10fe : nop
        mov eax, dword ptr ds : [ebx+0xC8]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ds : [ebx+0xCC]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf1142
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6bf1142 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf1158
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf1158 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [ebx+0xD0]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [ebx+0xD0]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf1187
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6bf1187 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf119d
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf119d : nop
        mov eax, dword ptr ds : [ebx+0xD0]
        mov edi, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ds : [ebx+0xD4]
        public_6bf11ac : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        public_6bf11c9 : nop
        call dword ptr ds : [public_6c0b080]
        test al, al
        jne public_6bf125e
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bf11f0
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6bf11f0 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6bf1206
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf1206 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [ebx+0xE0]
        mov dword ptr ds : [eax], edx
        fld dword ptr ds : [ebx+0xE4]
        fmul qword ptr ds : [public_6c0df40]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        call public_6c09ee8
        mov esi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        inc esi
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ss : [ebp], esi
        jbe public_6bf123f
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6bf123f : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6bf1255
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf1255 : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ds : [ebx+0x18], ecx
        public_6bf125e : nop
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push eax
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bf1284
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6bf1284 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov ebx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebx
        mov dword ptr ds : [ecx], ebx
        mov edx, dword ptr ss : [ebp]
        add edi, edx
        mov dword ptr ds : [ecx+0x18], edi
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        mov esi, ebx
        jbe public_6bf12ba
        mov dword ptr ds : [ecx+0x10], ebp
        public_6bf12ba : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6bf0da0)
    }
}

#undef public_6bf0df0
#undef public_6bf0e16
#undef public_6bf0e25
#undef public_6bf0e34
#undef public_6bf0e4b
#undef public_6bf0e61
#undef public_6bf0e85
#undef public_6bf0e9b
#undef public_6bf0ef5
#undef public_6bf0f08
#undef public_6bf0f22
#undef public_6bf0f35
#undef public_6bf0f57
#undef public_6bf0f6a
#undef public_6bf0f9a
#undef public_6bf0fad
#undef public_6bf0fc7
#undef public_6bf0fda
#undef public_6bf1016
#undef public_6bf102c
#undef public_6bf1053
#undef public_6bf1069
#undef public_6bf107e
#undef public_6bf10a5
#undef public_6bf10bb
#undef public_6bf10e8
#undef public_6bf10fe
#undef public_6bf1142
#undef public_6bf1158
#undef public_6bf1187
#undef public_6bf119d
#undef public_6bf11ac
#undef public_6bf11c9
#undef public_6bf11f0
#undef public_6bf1206
#undef public_6bf123f
#undef public_6bf1255
#undef public_6bf125e
#undef public_6bf1284
#undef public_6bf12ba
