#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b3ee54 _public_6b3ee54
#define public_6b3ee68 _public_6b3ee68
#define public_6b3ee84 _public_6b3ee84
#define public_6b3ee94 _public_6b3ee94
#define public_6b3ee9f _public_6b3ee9f
#define public_6b3eebe _public_6b3eebe
#define public_6b3eec9 _public_6b3eec9
#define public_6b3eee1 _public_6b3eee1
#define public_6b3eef1 _public_6b3eef1
#define public_6b3ef10 _public_6b3ef10
#define public_6b3ef20 _public_6b3ef20
#define public_6b3ef49 _public_6b3ef49
#define public_6b3ef59 _public_6b3ef59
#define public_6b3ef65 _public_6b3ef65
#define public_6b3ef85 _public_6b3ef85
#define public_6b3ef95 _public_6b3ef95
#define public_6b3efb5 _public_6b3efb5
#define public_6b3efc5 _public_6b3efc5
#define public_6b3eff1 _public_6b3eff1
#define public_6b3f012 _public_6b3f012
#define public_6b3f022 _public_6b3f022
#define public_6b3f047 _public_6b3f047
#define public_6b3f057 _public_6b3f057
#define public_6b3f096 _public_6b3f096
#define public_6b3f0a9 _public_6b3f0a9
#define public_6b3f0d2 _public_6b3f0d2
#define public_6b3f0e5 _public_6b3f0e5
#define public_6b3f110 _public_6b3f110
#define public_6b3f12f _public_6b3f12f
#define public_6b3f13f _public_6b3f13f
#define public_6b3f152 _public_6b3f152
#define public_6b3f17d _public_6b3f17d
#define public_6b3f18d _public_6b3f18d
#define public_6b3f198 _public_6b3f198
#define public_6b3f1a5 _public_6b3f1a5
#define public_6b3f1b5 _public_6b3f1b5
#define public_6b3f1bb _public_6b3f1bb
#define public_6b3f1c7 _public_6b3f1c7
#define public_6b3f1dd _public_6b3f1dd
#define public_6b3f206 _public_6b3f206
#define public_6b3f221 _public_6b3f221
#define public_6b3f238 _public_6b3f238
#define public_6b3f241 _public_6b3f241
#define public_6b3f277 _public_6b3f277

PROC_DECLARE(0x6b3ee10, internal_6b3ee10, public_6b3ee10);
extern "C" NAKED register_t __cdecl internal_6b3ee10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        lea ebp, ds:[ebx+0x10]
        push edi
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [ecx]
        xor edi, edi
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push eax
        lea esi, ds:[ebx+0x18]
        push esi
        mov ecx, ebx
        call public_6b4e740
        cmp eax, edi
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b3ee54
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b3ee54 : nop
        cmp dword ptr ds : [ebx+0x5C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], edi
        mov byte ptr ds : [ebx+0x54], 0
        je public_6b3ee68
        mov cl, byte ptr ds : [ebx+0x34]
        mov byte ptr ds : [ebx+0x54], cl
        public_6b3ee68 : nop
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        je public_6b3eec9
        mov eax, dword ptr ds : [ebx+0x60]
        test eax, eax
        je public_6b3ee84
        mov al, byte ptr ds : [ebx+0x54]
        mov dl, byte ptr ds : [ebx+0x3C]
        or al, dl
        mov byte ptr ds : [ebx+0x54], al
        public_6b3ee84 : nop
        mov eax, dword ptr ds : [ebx+0x24]
        cmp dword ptr ds : [eax], 0
        jne public_6b3ee94
        mov ecx, dword ptr ds : [ebx+0x2C]
        cmp dword ptr ds : [ecx], 0
        je public_6b3ee9f
        public_6b3ee94 : nop
        mov al, byte ptr ds : [ebx+0x54]
        mov dl, byte ptr ds : [ebx+0x38]
        or al, dl
        mov byte ptr ds : [ebx+0x54], al
        public_6b3ee9f : nop
        mov eax, dword ptr ds : [ebx+0x50]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6b3eec9
        cmp eax, 0xFF
        jle public_6b3eebe
        mov cl, byte ptr ds : [ebx+0x54]
        mov al, byte ptr ds : [ebx+0x44]
        or cl, al
        mov byte ptr ds : [ebx+0x54], cl
        jmp public_6b3eec9
        public_6b3eebe : nop
        mov al, byte ptr ds : [ebx+0x54]
        mov cl, byte ptr ds : [ebx+0x40]
        or al, cl
        mov byte ptr ds : [ebx+0x54], al
        public_6b3eec9 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov edi, 0x16
        jbe public_6b3eee1
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3eee1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3eef1
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3eef1 : nop
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [ebx+0x54]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b3ef10
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3ef10 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3ef20
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3ef20 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+0x58]
        mov dword ptr ds : [eax], ecx
        mov dl, byte ptr ds : [ebx+0x54]
        add eax, 4
        mov dword ptr ds : [esi], eax
        test byte ptr ds : [ebx+0x34], dl
        je public_6b3ef65
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b3ef49
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3ef49 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3ef59
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3ef59 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        public_6b3ef65 : nop
        mov dl, byte ptr ds : [ebx+0x54]
        test byte ptr ds : [ebx+0x3C], dl
        je public_6b3eff1
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        mov cl, byte ptr ds : [ebx+0x60]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [ebp], eax
        jbe public_6b3ef85
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3ef85 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3ef95
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3ef95 : nop
        mov eax, dword ptr ds : [esi]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [ebx+0x60]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        shl eax, 1
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b3efb5
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3efb5 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3efc5
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3efc5 : nop
        mov eax, dword ptr ds : [ebx+0x60]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ds : [ebx+0x64]
        shl eax, 1
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        mov edi, 0x16
        public_6b3eff1 : nop
        mov dl, byte ptr ds : [ebx+0x54]
        test byte ptr ds : [ebx+0x38], dl
        je public_6b3f110
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b3f012
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3f012 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3f022
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3f022 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+0x20]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov esi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add esi, edx
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp], esi
        jbe public_6b3f047
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3f047 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3f057
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3f057 : nop
        mov eax, dword ptr ds : [ebx+0x20]
        mov edi, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ds : [ebx+0x24]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b3f096
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b3f096 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3f0a9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b3f0a9 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [ebx+0x28]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b3f0d2
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6b3f0d2 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3f0e5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b3f0e5 : nop
        mov eax, dword ptr ds : [ebx+0x28]
        mov edi, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ds : [ebx+0x2C]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ds : [ebx+0x18], ecx
        mov edi, 0x16
        public_6b3f110 : nop
        call dword ptr ds : [public_6b6b028]
        test al, al
        je public_6b3f152
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b3f12f
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3f12f : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3f13f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3f13f : nop
        mov eax, dword ptr ds : [ebx+0x18]
        fld dword ptr ds : [ebx+0x30]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        jmp public_6b3f221
        public_6b3f152 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_6b3f221
        mov dl, byte ptr ds : [ebx+0x54]
        mov al, byte ptr ds : [ebx+0x44]
        mov esi, dword ptr ss : [ebp]
        test dl, al
        mov edx, dword ptr ss : [ebp+4]
        je public_6b3f198
        add esi, 2
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp], esi
        jbe public_6b3f17d
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3f17d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3f18d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3f18d : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov word ptr ds : [eax], cx
        add eax, 2
        jmp public_6b3f1bb
        public_6b3f198 : nop
        inc esi
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp], esi
        jbe public_6b3f1a5
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3f1a5 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3f1b5
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3f1b5 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        public_6b3f1bb : nop
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_6b3f221
        public_6b3f1c7 : nop
        mov eax, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx+8]
        add eax, 4
        cmp eax, esi
        mov dword ptr ss : [ebp], eax
        jbe public_6b3f1dd
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3f1dd : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b3f238
        fld dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ebx+0x18]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [ebp+4]
        add eax, 4
        cmp eax, esi
        mov dword ptr ss : [ebp], eax
        jbe public_6b3f206
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3f206 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b3f238
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ds : [ebx+0x4C]
        jne public_6b3f1c7
        public_6b3f221 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push eax
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b3f241
        public_6b3f238 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b3f241 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x1C]
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
        jbe public_6b3f277
        mov dword ptr ds : [ecx+0x10], ebp
        public_6b3f277 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b3ee10)
    }
}

#undef public_6b3ee54
#undef public_6b3ee68
#undef public_6b3ee84
#undef public_6b3ee94
#undef public_6b3ee9f
#undef public_6b3eebe
#undef public_6b3eec9
#undef public_6b3eee1
#undef public_6b3eef1
#undef public_6b3ef10
#undef public_6b3ef20
#undef public_6b3ef49
#undef public_6b3ef59
#undef public_6b3ef65
#undef public_6b3ef85
#undef public_6b3ef95
#undef public_6b3efb5
#undef public_6b3efc5
#undef public_6b3eff1
#undef public_6b3f012
#undef public_6b3f022
#undef public_6b3f047
#undef public_6b3f057
#undef public_6b3f096
#undef public_6b3f0a9
#undef public_6b3f0d2
#undef public_6b3f0e5
#undef public_6b3f110
#undef public_6b3f12f
#undef public_6b3f13f
#undef public_6b3f152
#undef public_6b3f17d
#undef public_6b3f18d
#undef public_6b3f198
#undef public_6b3f1a5
#undef public_6b3f1b5
#undef public_6b3f1bb
#undef public_6b3f1c7
#undef public_6b3f1dd
#undef public_6b3f206
#undef public_6b3f221
#undef public_6b3f238
#undef public_6b3f241
#undef public_6b3f277
