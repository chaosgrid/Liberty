#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda220);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6c06294 _public_6c06294
#define public_6c062ac _public_6c062ac
#define public_6c062d6 _public_6c062d6
#define public_6c06300 _public_6c06300
#define public_6c0632a _public_6c0632a
#define public_6c06354 _public_6c06354
#define public_6c0637e _public_6c0637e
#define public_6c063b0 _public_6c063b0
#define public_6c063e2 _public_6c063e2
#define public_6c06415 _public_6c06415
#define public_6c0643f _public_6c0643f
#define public_6c06481 _public_6c06481
#define public_6c064b9 _public_6c064b9
#define public_6c064cc _public_6c064cc
#define public_6c0650f _public_6c0650f
#define public_6c06548 _public_6c06548
#define public_6c0655b _public_6c0655b
#define public_6c0659e _public_6c0659e
#define public_6c065d7 _public_6c065d7
#define public_6c065ea _public_6c065ea
#define public_6c06616 _public_6c06616
#define public_6c06642 _public_6c06642
#define public_6c0666e _public_6c0666e
#define public_6c0669a _public_6c0669a
#define public_6c066e9 _public_6c066e9
#define public_6c06728 _public_6c06728
#define public_6c06749 _public_6c06749
#define public_6c06785 _public_6c06785
#define public_6c06791 _public_6c06791

PROC_DECLARE(0x6c06250, internal_6c06250, public_6c06250);
extern "C" NAKED register_t __cdecl internal_6c06250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea ebx, ss:[ebp+0x10]
        push edi
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6c06294
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c06294 : nop
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        mov ecx, 0x17
        jbe public_6c062ac
        mov dword ptr ds : [ebx+0xC], ecx
        public_6c062ac : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x20], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6c062d6
        mov dword ptr ds : [ebx+0xC], ecx
        public_6c062d6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x24], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6c06300
        mov dword ptr ds : [ebx+0xC], ecx
        public_6c06300 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x28], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6c0632a
        mov dword ptr ds : [ebx+0xC], ecx
        public_6c0632a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x2C], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6c06354
        mov dword ptr ds : [ebx+0xC], ecx
        public_6c06354 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x30], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 0xC
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6c0637e
        mov dword ptr ds : [ebx+0xC], ecx
        public_6c0637e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov edi, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[ebp+0x34]
        call public_6bda4c0
        add edi, 0xC
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c063b0
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6c063b0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov edi, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[ebp+0x40]
        call public_6bda4c0
        add edi, 0xC
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c063e2
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6c063e2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov edi, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[ebp+0x4C]
        call public_6bda220
        add edi, 0x10
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x17
        jbe public_6c06415
        mov dword ptr ds : [ebx+0xC], edi
        public_6c06415 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x5C], ecx
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c0643f
        mov dword ptr ds : [ebx+0xC], edi
        public_6c0643f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x64], edx
        jbe public_6c064b9
        add eax, eax
        push eax
        call public_6c09d26
        mov ecx, dword ptr ss : [ebp+0x64]
        mov dword ptr ss : [ebp+0x60], eax
        mov edx, dword ptr ds : [ebx]
        shl ecx, 1
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c06481
        mov dword ptr ds : [ebx+0xC], edi
        public_6c06481 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ss : [ebp+0x64]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x60]
        shl eax, 1
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
        mov edi, 0x17
        public_6c064b9 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c064cc
        mov dword ptr ds : [ebx+0xC], edi
        public_6c064cc : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x68], edx
        jbe public_6c06548
        push eax
        call public_6c09d26
        mov dword ptr ss : [ebp+0x88], eax
        mov eax, dword ptr ss : [ebp+0x68]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c0650f
        mov dword ptr ds : [ebx+0xC], edi
        public_6c0650f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ss : [ebp+0x68]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x88]
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
        mov edi, 0x17
        public_6c06548 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c0655b
        mov dword ptr ds : [ebx+0xC], edi
        public_6c0655b : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x6C], edx
        jbe public_6c065d7
        push eax
        call public_6c09d26
        mov dword ptr ss : [ebp+0x8C], eax
        mov eax, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c0659e
        mov dword ptr ds : [ebx+0xC], edi
        public_6c0659e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ss : [ebp+0x6C]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x8C]
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
        mov edi, 0x17
        public_6c065d7 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c065ea
        mov dword ptr ds : [ebx+0xC], edi
        public_6c065ea : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x70], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c06616
        mov dword ptr ds : [ebx+0xC], edi
        public_6c06616 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x74], ecx
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c06642
        mov dword ptr ds : [ebx+0xC], edi
        public_6c06642 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x78], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c0666e
        mov dword ptr ds : [ebx+0xC], edi
        public_6c0666e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x7C], ecx
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c0669a
        mov dword ptr ds : [ebx+0xC], edi
        public_6c0669a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x80], edx
        jbe public_6c06728
        shl eax, 2
        push eax
        call public_6c09d26
        mov ecx, dword ptr ss : [ebp+0x80]
        mov dword ptr ss : [ebp+0x84], eax
        mov edx, dword ptr ds : [ebx]
        shl ecx, 2
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6c066e9
        mov dword ptr ds : [ebx+0xC], edi
        public_6c066e9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c06791
        mov eax, dword ptr ss : [ebp+0x80]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x84]
        shl eax, 2
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
        mov edi, 0x17
        public_6c06728 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6bebeb0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6c06749
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6c06749 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ds : [ebx]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add edx, 2
        cmp ebx, edx
        jbe public_6c06785
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6c06785 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6c06791 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6c06250)
    }
}

#undef public_6c06294
#undef public_6c062ac
#undef public_6c062d6
#undef public_6c06300
#undef public_6c0632a
#undef public_6c06354
#undef public_6c0637e
#undef public_6c063b0
#undef public_6c063e2
#undef public_6c06415
#undef public_6c0643f
#undef public_6c06481
#undef public_6c064b9
#undef public_6c064cc
#undef public_6c0650f
#undef public_6c06548
#undef public_6c0655b
#undef public_6c0659e
#undef public_6c065d7
#undef public_6c065ea
#undef public_6c06616
#undef public_6c06642
#undef public_6c0666e
#undef public_6c0669a
#undef public_6c066e9
#undef public_6c06728
#undef public_6c06749
#undef public_6c06785
#undef public_6c06791
