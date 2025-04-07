#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d91f14 _public_6d91f14
#define public_6d91f28 _public_6d91f28
#define public_6d91f44 _public_6d91f44
#define public_6d91f54 _public_6d91f54
#define public_6d91f5f _public_6d91f5f
#define public_6d91f7e _public_6d91f7e
#define public_6d91f89 _public_6d91f89
#define public_6d91fa1 _public_6d91fa1
#define public_6d91fb1 _public_6d91fb1
#define public_6d91fd0 _public_6d91fd0
#define public_6d91fe0 _public_6d91fe0
#define public_6d92009 _public_6d92009
#define public_6d92019 _public_6d92019
#define public_6d92025 _public_6d92025
#define public_6d92045 _public_6d92045
#define public_6d92055 _public_6d92055
#define public_6d92075 _public_6d92075
#define public_6d92085 _public_6d92085
#define public_6d920b1 _public_6d920b1
#define public_6d920d2 _public_6d920d2
#define public_6d920e2 _public_6d920e2
#define public_6d92107 _public_6d92107
#define public_6d92117 _public_6d92117
#define public_6d92156 _public_6d92156
#define public_6d92169 _public_6d92169
#define public_6d92192 _public_6d92192
#define public_6d921a5 _public_6d921a5
#define public_6d921d0 _public_6d921d0
#define public_6d921ef _public_6d921ef
#define public_6d921ff _public_6d921ff
#define public_6d92212 _public_6d92212
#define public_6d9223d _public_6d9223d
#define public_6d9224d _public_6d9224d
#define public_6d92258 _public_6d92258
#define public_6d92265 _public_6d92265
#define public_6d92275 _public_6d92275
#define public_6d9227b _public_6d9227b
#define public_6d92287 _public_6d92287
#define public_6d9229d _public_6d9229d
#define public_6d922c6 _public_6d922c6
#define public_6d922e1 _public_6d922e1
#define public_6d922f8 _public_6d922f8
#define public_6d92301 _public_6d92301
#define public_6d92337 _public_6d92337

PROC_DECLARE(0x6d91ed0, internal_6d91ed0, public_6d91ed0);
extern "C" NAKED register_t __cdecl internal_6d91ed0()
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
        call public_6da1380
        cmp eax, edi
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6d91f14
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d91f14 : nop
        cmp dword ptr ds : [ebx+0x5C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], edi
        mov byte ptr ds : [ebx+0x54], 0
        je public_6d91f28
        mov cl, byte ptr ds : [ebx+0x34]
        mov byte ptr ds : [ebx+0x54], cl
        public_6d91f28 : nop
        call dword ptr ds : [public_6db305c]
        test al, al
        je public_6d91f89
        mov eax, dword ptr ds : [ebx+0x60]
        test eax, eax
        je public_6d91f44
        mov al, byte ptr ds : [ebx+0x54]
        mov dl, byte ptr ds : [ebx+0x3C]
        or al, dl
        mov byte ptr ds : [ebx+0x54], al
        public_6d91f44 : nop
        mov eax, dword ptr ds : [ebx+0x24]
        cmp dword ptr ds : [eax], 0
        jne public_6d91f54
        mov ecx, dword ptr ds : [ebx+0x2C]
        cmp dword ptr ds : [ecx], 0
        je public_6d91f5f
        public_6d91f54 : nop
        mov al, byte ptr ds : [ebx+0x54]
        mov dl, byte ptr ds : [ebx+0x38]
        or al, dl
        mov byte ptr ds : [ebx+0x54], al
        public_6d91f5f : nop
        mov eax, dword ptr ds : [ebx+0x50]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6d91f89
        cmp eax, 0xFF
        jle public_6d91f7e
        mov cl, byte ptr ds : [ebx+0x54]
        mov al, byte ptr ds : [ebx+0x44]
        or cl, al
        mov byte ptr ds : [ebx+0x54], cl
        jmp public_6d91f89
        public_6d91f7e : nop
        mov al, byte ptr ds : [ebx+0x54]
        mov cl, byte ptr ds : [ebx+0x40]
        or al, cl
        mov byte ptr ds : [ebx+0x54], al
        public_6d91f89 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov edi, 0x16
        jbe public_6d91fa1
        mov dword ptr ss : [ebp+0xC], edi
        public_6d91fa1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d91fb1
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d91fb1 : nop
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
        jbe public_6d91fd0
        mov dword ptr ss : [ebp+0xC], edi
        public_6d91fd0 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d91fe0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d91fe0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+0x58]
        mov dword ptr ds : [eax], ecx
        mov dl, byte ptr ds : [ebx+0x54]
        add eax, 4
        mov dword ptr ds : [esi], eax
        test byte ptr ds : [ebx+0x34], dl
        je public_6d92025
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d92009
        mov dword ptr ss : [ebp+0xC], edi
        public_6d92009 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d92019
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d92019 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        public_6d92025 : nop
        mov dl, byte ptr ds : [ebx+0x54]
        test byte ptr ds : [ebx+0x3C], dl
        je public_6d920b1
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        mov cl, byte ptr ds : [ebx+0x60]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [ebp], eax
        jbe public_6d92045
        mov dword ptr ss : [ebp+0xC], edi
        public_6d92045 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d92055
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d92055 : nop
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
        jbe public_6d92075
        mov dword ptr ss : [ebp+0xC], edi
        public_6d92075 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d92085
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d92085 : nop
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
        public_6d920b1 : nop
        mov dl, byte ptr ds : [ebx+0x54]
        test byte ptr ds : [ebx+0x38], dl
        je public_6d921d0
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d920d2
        mov dword ptr ss : [ebp+0xC], edi
        public_6d920d2 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d920e2
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d920e2 : nop
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
        jbe public_6d92107
        mov dword ptr ss : [ebp+0xC], edi
        public_6d92107 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d92117
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d92117 : nop
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
        jbe public_6d92156
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6d92156 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d92169
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d92169 : nop
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
        jbe public_6d92192
        mov dword ptr ss : [ebp+0xC], 0x16
        public_6d92192 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d921a5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d921a5 : nop
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
        public_6d921d0 : nop
        call dword ptr ds : [public_6db3104]
        test al, al
        je public_6d92212
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d921ef
        mov dword ptr ss : [ebp+0xC], edi
        public_6d921ef : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d921ff
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d921ff : nop
        mov eax, dword ptr ds : [ebx+0x18]
        fld dword ptr ds : [ebx+0x30]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        jmp public_6d922e1
        public_6d92212 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_6d922e1
        mov dl, byte ptr ds : [ebx+0x54]
        mov al, byte ptr ds : [ebx+0x44]
        mov esi, dword ptr ss : [ebp]
        test dl, al
        mov edx, dword ptr ss : [ebp+4]
        je public_6d92258
        add esi, 2
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp], esi
        jbe public_6d9223d
        mov dword ptr ss : [ebp+0xC], edi
        public_6d9223d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d9224d
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d9224d : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov word ptr ds : [eax], cx
        add eax, 2
        jmp public_6d9227b
        public_6d92258 : nop
        inc esi
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp], esi
        jbe public_6d92265
        mov dword ptr ss : [ebp+0xC], edi
        public_6d92265 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d92275
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d92275 : nop
        mov eax, dword ptr ds : [ebx+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        public_6d9227b : nop
        mov dword ptr ds : [ebx+0x18], eax
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_6d922e1
        public_6d92287 : nop
        mov eax, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ecx+8]
        add eax, 4
        cmp eax, esi
        mov dword ptr ss : [ebp], eax
        jbe public_6d9229d
        mov dword ptr ss : [ebp+0xC], edi
        public_6d9229d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d922f8
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
        jbe public_6d922c6
        mov dword ptr ss : [ebp+0xC], edi
        public_6d922c6 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d922f8
        mov eax, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ds : [ebx+0x4C]
        jne public_6d92287
        public_6d922e1 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        push ebp
        push eax
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6d92301
        public_6d922f8 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d92301 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6da16b0
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
        jbe public_6d92337
        mov dword ptr ds : [ecx+0x10], ebp
        public_6d92337 : nop
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
        UNREACHABLE_TRAP(0x6d91ed0)
    }
}

#undef public_6d91f14
#undef public_6d91f28
#undef public_6d91f44
#undef public_6d91f54
#undef public_6d91f5f
#undef public_6d91f7e
#undef public_6d91f89
#undef public_6d91fa1
#undef public_6d91fb1
#undef public_6d91fd0
#undef public_6d91fe0
#undef public_6d92009
#undef public_6d92019
#undef public_6d92025
#undef public_6d92045
#undef public_6d92055
#undef public_6d92075
#undef public_6d92085
#undef public_6d920b1
#undef public_6d920d2
#undef public_6d920e2
#undef public_6d92107
#undef public_6d92117
#undef public_6d92156
#undef public_6d92169
#undef public_6d92192
#undef public_6d921a5
#undef public_6d921d0
#undef public_6d921ef
#undef public_6d921ff
#undef public_6d92212
#undef public_6d9223d
#undef public_6d9224d
#undef public_6d92258
#undef public_6d92265
#undef public_6d92275
#undef public_6d9227b
#undef public_6d92287
#undef public_6d9229d
#undef public_6d922c6
#undef public_6d922e1
#undef public_6d922f8
#undef public_6d92301
#undef public_6d92337
