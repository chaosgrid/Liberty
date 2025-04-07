#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4eb30);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b51750);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3ff25 _public_6b3ff25
#define public_6b3ff4e _public_6b3ff4e
#define public_6b3ff70 _public_6b3ff70
#define public_6b3ff7b _public_6b3ff7b
#define public_6b3ff94 _public_6b3ff94
#define public_6b3ffca _public_6b3ffca
#define public_6b40008 _public_6b40008
#define public_6b40037 _public_6b40037
#define public_6b4006d _public_6b4006d
#define public_6b4009e _public_6b4009e
#define public_6b400e0 _public_6b400e0
#define public_6b4010b _public_6b4010b
#define public_6b40140 _public_6b40140
#define public_6b4015c _public_6b4015c
#define public_6b401ad _public_6b401ad
#define public_6b401d3 _public_6b401d3
#define public_6b401f2 _public_6b401f2
#define public_6b40221 _public_6b40221
#define public_6b4024c _public_6b4024c
#define public_6b4026e _public_6b4026e
#define public_6b402af _public_6b402af
#define public_6b402bb _public_6b402bb

PROC_DECLARE(0x6b3fee0, internal_6b3fee0, public_6b3fee0);
extern "C" NAKED register_t __cdecl internal_6b3fee0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebx, ecx
        lea ebp, ds:[ebx+0x10]
        push ebp
        push edi
        lea esi, ds:[ebx+0x18]
        push esi
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b3ff25
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6b3ff25 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edi
        push edx
        mov ecx, ebx
        call public_6b51750
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b3ff4e
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b3ff4e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b402bb
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        mov al, 1
        test al, cl
        mov byte ptr ss : [esp+0x18], cl
        je public_6b3ff70
        mov byte ptr ds : [ebx+0x9C], al
        public_6b3ff70 : nop
        test cl, 2
        je public_6b3ff7b
        mov byte ptr ds : [ebx+0xE8], al
        public_6b3ff7b : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b3ff94
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6b3ff94 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b402bb
        mov edi, dword ptr ds : [esi]
        push edi
        lea ecx, ds:[ebx+0xA0]
        call public_6b3a160
        add edi, 0xC
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov edi, 0x17
        jbe public_6b3ffca
        mov dword ptr ss : [ebp+0xC], edi
        public_6b3ffca : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b402bb
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        movsx eax, cl
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_6b6c1e8]
        fstp dword ptr ds : [ebx+0xB8]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b40008
        mov dword ptr ss : [ebp+0xC], edi
        public_6b40008 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b402bb
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov word ptr ds : [ebx+0xC0], cx
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b40037
        mov dword ptr ss : [ebp+0xC], edi
        public_6b40037 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b402bb
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        test byte ptr ss : [esp+0x18], 4
        mov byte ptr ds : [ebx+0xC2], dl
        je public_6b401ad
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b4006d
        mov dword ptr ss : [ebp+0xC], edi
        public_6b4006d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b402bb
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        xor eax, eax
        mov al, cl
        mov dword ptr ds : [ebx+0xBC], eax
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b4009e
        mov dword ptr ss : [ebp+0xC], edi
        public_6b4009e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b402bb
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ds : [ebx+0xC4], cx
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        mov edi, 0x17
        jne public_6b401d3
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b400e0
        mov dword ptr ss : [ebp+0xC], edi
        public_6b400e0 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b402bb
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        movsx eax, cl
        mov dword ptr ds : [ebx+0xD8], eax
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        lea eax, ds:[edx+eax*2]
        cmp eax, ecx
        jbe public_6b4010b
        mov dword ptr ss : [ebp+0xC], edi
        public_6b4010b : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b402bb
        mov ecx, dword ptr ds : [ebx+0xD8]
        lea edx, ds:[ecx+ecx+2]
        push edx
        call public_6b6a134
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xDC], eax
        jne public_6b40140
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        pop ecx
        ret 0xC
        public_6b40140 : nop
        mov eax, dword ptr ds : [ebx+0xD8]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        shl eax, 1
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b4015c
        mov dword ptr ss : [ebp+0xC], edi
        public_6b4015c : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b402bb
        mov eax, dword ptr ds : [ebx+0xD8]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ds : [ebx+0xDC]
        shl eax, 1
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ebx+0xD8]
        add ecx, eax
        mov eax, dword ptr ds : [ebx+0xDC]
        mov dword ptr ds : [ebx+0x18], ecx
        mov word ptr ds : [eax+edx*2], 0
        mov edi, 0x17
        jmp public_6b401d3
        public_6b401ad : nop
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        jne public_6b401d3
        lea ecx, ds:[ebx+0xC8]
        push ecx
        mov ecx, ebx
        call public_6b4eb30
        lea edx, ds:[ebx+0xD0]
        push edx
        mov ecx, ebx
        call public_6b4eb30
        public_6b401d3 : nop
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        jne public_6b4024c
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b401f2
        mov dword ptr ss : [ebp+0xC], edi
        public_6b401f2 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b402bb
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+0x18], eax
        mov dword ptr ds : [ebx+0xE0], ecx
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6b40221
        mov dword ptr ss : [ebp+0xC], edi
        public_6b40221 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6b402bb
        mov eax, dword ptr ds : [ebx+0x18]
        mov cl, byte ptr ds : [eax]
        movsx edx, cl
        mov dword ptr ss : [esp+0x18], edx
        inc eax
        mov dword ptr ds : [ebx+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6b6c1e8]
        fstp dword ptr ds : [ebx+0xE4]
        public_6b4024c : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push ebp
        push eax
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b4026e
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6b4026e : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ss : [ebp]
        add edx, 2
        add ebx, edx
        mov dword ptr ds : [ecx+0x1C], ebx
        mov ebp, dword ptr ss : [ebp]
        add eax, 2
        cmp ebp, eax
        jbe public_6b402af
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6b402af : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b402bb : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b3fee0)
    }
}

#undef public_6b3ff25
#undef public_6b3ff4e
#undef public_6b3ff70
#undef public_6b3ff7b
#undef public_6b3ff94
#undef public_6b3ffca
#undef public_6b40008
#undef public_6b40037
#undef public_6b4006d
#undef public_6b4009e
#undef public_6b400e0
#undef public_6b4010b
#undef public_6b40140
#undef public_6b4015c
#undef public_6b401ad
#undef public_6b401d3
#undef public_6b401f2
#undef public_6b40221
#undef public_6b4024c
#undef public_6b4026e
#undef public_6b402af
#undef public_6b402bb
