#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1620);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6da4020);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d98295 _public_6d98295
#define public_6d982be _public_6d982be
#define public_6d982e0 _public_6d982e0
#define public_6d982eb _public_6d982eb
#define public_6d98304 _public_6d98304
#define public_6d9833a _public_6d9833a
#define public_6d98378 _public_6d98378
#define public_6d983a7 _public_6d983a7
#define public_6d983dd _public_6d983dd
#define public_6d9840e _public_6d9840e
#define public_6d9844f _public_6d9844f
#define public_6d9849d _public_6d9849d
#define public_6d984e7 _public_6d984e7
#define public_6d984ec _public_6d984ec
#define public_6d9850b _public_6d9850b
#define public_6d9853a _public_6d9853a
#define public_6d98565 _public_6d98565
#define public_6d98587 _public_6d98587
#define public_6d985b6 _public_6d985b6
#define public_6d985f7 _public_6d985f7
#define public_6d98603 _public_6d98603

PROC_DECLARE(0x6d98250, internal_6d98250, public_6d98250);
extern "C" NAKED register_t __cdecl internal_6d98250()
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
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6d98295
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6d98295 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edi
        push edx
        mov ecx, ebx
        call public_6da4020
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d982be
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6d982be : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d98603
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        mov al, 1
        test al, cl
        mov byte ptr ss : [esp+0x18], cl
        je public_6d982e0
        mov byte ptr ds : [ebx+0x9C], al
        public_6d982e0 : nop
        test cl, 2
        je public_6d982eb
        mov byte ptr ds : [ebx+0xE8], al
        public_6d982eb : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d98304
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6d98304 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d98603
        mov edi, dword ptr ds : [esi]
        push edi
        lea ecx, ds:[ebx+0xA0]
        call public_6d8f510
        add edi, 0xC
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        mov edi, 0x17
        jbe public_6d9833a
        mov dword ptr ss : [ebp+0xC], edi
        public_6d9833a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d98603
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        movsx eax, cl
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_6db3fe0]
        fstp dword ptr ds : [ebx+0xB8]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d98378
        mov dword ptr ss : [ebp+0xC], edi
        public_6d98378 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d98603
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
        jbe public_6d983a7
        mov dword ptr ss : [ebp+0xC], edi
        public_6d983a7 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d98603
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        test byte ptr ss : [esp+0x18], 4
        mov byte ptr ds : [ebx+0xC2], dl
        je public_6d98587
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d983dd
        mov dword ptr ss : [ebp+0xC], edi
        public_6d983dd : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d98603
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
        jbe public_6d9840e
        mov dword ptr ss : [ebp+0xC], edi
        public_6d9840e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d98603
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ds : [ebx+0xC4], cx
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6db305c]
        test al, al
        jne public_6d984e7
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d9844f
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6d9844f : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d98603
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        movsx eax, cl
        lea edx, ds:[eax+eax+2]
        push edx
        mov dword ptr ds : [ebx+0xD8], eax
        call public_6db1f8a
        mov dword ptr ds : [ebx+0xDC], eax
        mov eax, dword ptr ds : [ebx+0xD8]
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        shl eax, 1
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d9849d
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6d9849d : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d98603
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
        public_6d984e7 : nop
        mov edi, 0x17
        public_6d984ec : nop
        call dword ptr ds : [public_6db305c]
        test al, al
        jne public_6d98565
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6d9850b
        mov dword ptr ss : [ebp+0xC], edi
        public_6d9850b : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d98603
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
        jbe public_6d9853a
        mov dword ptr ss : [ebp+0xC], edi
        public_6d9853a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d98603
        mov eax, dword ptr ds : [ebx+0x18]
        mov cl, byte ptr ds : [eax]
        movsx edx, cl
        mov dword ptr ss : [esp+0x18], edx
        inc eax
        mov dword ptr ds : [ebx+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6db3fe0]
        fstp dword ptr ds : [ebx+0xE4]
        public_6d98565 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push ebp
        push eax
        lea eax, ds:[ebx+0x18]
        push eax
        mov ecx, ebx
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6d985b6
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6d98587 : nop
        call dword ptr ds : [public_6db305c]
        test al, al
        jne public_6d984ec
        lea ecx, ds:[ebx+0xC8]
        push ecx
        mov ecx, ebx
        call public_6da1620
        lea edx, ds:[ebx+0xD0]
        push edx
        mov ecx, ebx
        call public_6da1620
        jmp public_6d984ec
        public_6d985b6 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6da16b0
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
        jbe public_6d985f7
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6d985f7 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6d98603 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d98250)
    }
}

#undef public_6d98295
#undef public_6d982be
#undef public_6d982e0
#undef public_6d982eb
#undef public_6d98304
#undef public_6d9833a
#undef public_6d98378
#undef public_6d983a7
#undef public_6d983dd
#undef public_6d9840e
#undef public_6d9844f
#undef public_6d9849d
#undef public_6d984e7
#undef public_6d984ec
#undef public_6d9850b
#undef public_6d9853a
#undef public_6d98565
#undef public_6d98587
#undef public_6d985b6
#undef public_6d985f7
#undef public_6d98603
