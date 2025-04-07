#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b50e50);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a3f8);

#define public_6b3fa00 _public_6b3fa00
#define public_6b3fa26 _public_6b3fa26
#define public_6b3fa35 _public_6b3fa35
#define public_6b3fa44 _public_6b3fa44
#define public_6b3fa5b _public_6b3fa5b
#define public_6b3fa71 _public_6b3fa71
#define public_6b3fa95 _public_6b3fa95
#define public_6b3faab _public_6b3faab
#define public_6b3fb05 _public_6b3fb05
#define public_6b3fb18 _public_6b3fb18
#define public_6b3fb32 _public_6b3fb32
#define public_6b3fb45 _public_6b3fb45
#define public_6b3fb67 _public_6b3fb67
#define public_6b3fb7a _public_6b3fb7a
#define public_6b3fbaa _public_6b3fbaa
#define public_6b3fbbd _public_6b3fbbd
#define public_6b3fbd7 _public_6b3fbd7
#define public_6b3fbea _public_6b3fbea
#define public_6b3fc26 _public_6b3fc26
#define public_6b3fc3c _public_6b3fc3c
#define public_6b3fc63 _public_6b3fc63
#define public_6b3fc79 _public_6b3fc79
#define public_6b3fc8e _public_6b3fc8e
#define public_6b3fcb5 _public_6b3fcb5
#define public_6b3fccb _public_6b3fccb
#define public_6b3fcf8 _public_6b3fcf8
#define public_6b3fd0e _public_6b3fd0e
#define public_6b3fd52 _public_6b3fd52
#define public_6b3fd68 _public_6b3fd68
#define public_6b3fd97 _public_6b3fd97
#define public_6b3fdad _public_6b3fdad
#define public_6b3fdbc _public_6b3fdbc
#define public_6b3fdd9 _public_6b3fdd9
#define public_6b3fe00 _public_6b3fe00
#define public_6b3fe16 _public_6b3fe16
#define public_6b3fe4f _public_6b3fe4f
#define public_6b3fe65 _public_6b3fe65
#define public_6b3fe6e _public_6b3fe6e
#define public_6b3fe94 _public_6b3fe94
#define public_6b3feca _public_6b3feca

PROC_DECLARE(0x6b3f9b0, internal_6b3f9b0, public_6b3f9b0);
extern "C" NAKED register_t __cdecl internal_6b3f9b0()
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
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b3fa00
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fa00 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        push edi
        push ecx
        mov ecx, ebx
        call public_6b50e50
        mov al, byte ptr ds : [ebx+0x9C]
        test al, al
        mov byte ptr ss : [esp+0x20], 0
        je public_6b3fa26
        mov byte ptr ss : [esp+0x20], 1
        public_6b3fa26 : nop
        mov eax, dword ptr ds : [ebx+0xBC]
        test eax, eax
        je public_6b3fa35
        or byte ptr ss : [esp+0x20], 4
        public_6b3fa35 : nop
        mov al, byte ptr ds : [ebx+0xE8]
        test al, al
        je public_6b3fa44
        or byte ptr ss : [esp+0x20], 2
        public_6b3fa44 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b3fa5b
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b3fa5b : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fa71
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fa71 : nop
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
        jbe public_6b3fa95
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b3fa95 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3faab
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3faab : nop
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
        call public_6b3a160
        fld dword ptr ds : [ebx+0xB8]
        fmul qword ptr ds : [public_6b6c1e0]
        add edi, 0xC
        mov dword ptr ds : [esi], edi
        call public_6b6a3f8
        mov ecx, dword ptr ss : [ebp]
        mov dl, al
        mov eax, dword ptr ss : [ebp+4]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        mov edi, 0x16
        jbe public_6b3fb05
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3fb05 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fb18
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fb18 : nop
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        add ecx, 2
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        jbe public_6b3fb32
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3fb32 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fb45
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fb45 : nop
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
        jbe public_6b3fb67
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3fb67 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fb7a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fb7a : nop
        mov ecx, dword ptr ds : [esi]
        mov al, byte ptr ds : [ebx+0xC2]
        mov byte ptr ds : [ecx], al
        mov al, byte ptr ss : [esp+0x20]
        inc ecx
        test al, 4
        mov dword ptr ds : [esi], ecx
        je public_6b3fc8e
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        mov dl, byte ptr ds : [ebx+0xBC]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        jbe public_6b3fbaa
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3fbaa : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fbbd
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fbbd : nop
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp+4]
        add ecx, 2
        cmp ecx, eax
        mov dword ptr ss : [ebp], ecx
        jbe public_6b3fbd7
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3fbd7 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fbea
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fbea : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [ebx+0xC4]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        jne public_6b3fdd9
        mov edi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        mov cl, byte ptr ds : [ebx+0xD8]
        inc edi
        mov eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp], edi
        jbe public_6b3fc26
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b3fc26 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fc3c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fc3c : nop
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
        jbe public_6b3fc63
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b3fc63 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fc79
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fc79 : nop
        mov eax, dword ptr ds : [ebx+0xD8]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ds : [ebx+0xDC]
        shl eax, 1
        jmp public_6b3fdbc
        public_6b3fc8e : nop
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        jne public_6b3fdd9
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b3fcb5
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b3fcb5 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fccb
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fccb : nop
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
        jbe public_6b3fcf8
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b3fcf8 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fd0e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fd0e : nop
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
        jbe public_6b3fd52
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b3fd52 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fd68
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fd68 : nop
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
        jbe public_6b3fd97
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b3fd97 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fdad
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fdad : nop
        mov eax, dword ptr ds : [ebx+0xD0]
        mov edi, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ds : [ebx+0xD4]
        public_6b3fdbc : nop
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
        public_6b3fdd9 : nop
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        jne public_6b3fe6e
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b3fe00
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b3fe00 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3fe16
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fe16 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [ebx+0xE0]
        mov dword ptr ds : [eax], edx
        fld dword ptr ds : [ebx+0xE4]
        fmul qword ptr ds : [public_6b6c1e0]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        call public_6b6a3f8
        mov esi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        inc esi
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ss : [ebp], esi
        jbe public_6b3fe4f
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b3fe4f : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        je public_6b3fe65
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fe65 : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ds : [ebx+0x18], ecx
        public_6b3fe6e : nop
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push eax
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b3fe94
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3fe94 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6b4ecd0
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
        jbe public_6b3feca
        mov dword ptr ds : [ecx+0x10], ebp
        public_6b3feca : nop
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
        UNREACHABLE_TRAP(0x6b3f9b0)
    }
}

#undef public_6b3fa00
#undef public_6b3fa26
#undef public_6b3fa35
#undef public_6b3fa44
#undef public_6b3fa5b
#undef public_6b3fa71
#undef public_6b3fa95
#undef public_6b3faab
#undef public_6b3fb05
#undef public_6b3fb18
#undef public_6b3fb32
#undef public_6b3fb45
#undef public_6b3fb67
#undef public_6b3fb7a
#undef public_6b3fbaa
#undef public_6b3fbbd
#undef public_6b3fbd7
#undef public_6b3fbea
#undef public_6b3fc26
#undef public_6b3fc3c
#undef public_6b3fc63
#undef public_6b3fc79
#undef public_6b3fc8e
#undef public_6b3fcb5
#undef public_6b3fccb
#undef public_6b3fcf8
#undef public_6b3fd0e
#undef public_6b3fd52
#undef public_6b3fd68
#undef public_6b3fd97
#undef public_6b3fdad
#undef public_6b3fdbc
#undef public_6b3fdd9
#undef public_6b3fe00
#undef public_6b3fe16
#undef public_6b3fe4f
#undef public_6b3fe65
#undef public_6b3fe6e
#undef public_6b3fe94
#undef public_6b3feca
