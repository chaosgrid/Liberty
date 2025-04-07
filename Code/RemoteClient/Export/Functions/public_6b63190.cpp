#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a3f8);

#define public_6b631e9 _public_6b631e9
#define public_6b63213 _public_6b63213
#define public_6b6323d _public_6b6323d
#define public_6b63265 _public_6b63265
#define public_6b63298 _public_6b63298
#define public_6b632c2 _public_6b632c2
#define public_6b632eb _public_6b632eb
#define public_6b63310 _public_6b63310
#define public_6b6331f _public_6b6331f
#define public_6b63346 _public_6b63346
#define public_6b63359 _public_6b63359
#define public_6b63381 _public_6b63381
#define public_6b633a0 _public_6b633a0
#define public_6b633b1 _public_6b633b1
#define public_6b633d5 _public_6b633d5
#define public_6b633ea _public_6b633ea
#define public_6b63428 _public_6b63428
#define public_6b6343b _public_6b6343b
#define public_6b63462 _public_6b63462
#define public_6b63493 _public_6b63493
#define public_6b6349f _public_6b6349f

PROC_DECLARE(0x6b63190, internal_6b63190, public_6b63190);
extern "C" NAKED register_t __cdecl internal_6b63190()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6b4e740
        mov dword ptr ds : [edi+0x1C], eax
        test eax, eax
        mov eax, 0x16
        jne public_6b6349f
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b631e9
        mov dword ptr ds : [esi+0xC], eax
        public_6b631e9 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b6349f
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b63213
        mov dword ptr ds : [esi+0xC], eax
        public_6b63213 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b6349f
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b6323d
        mov dword ptr ds : [esi+0xC], eax
        public_6b6323d : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b6349f
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebp
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b63265
        mov dword ptr ds : [esi+0xC], eax
        public_6b63265 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b6349f
        mov ecx, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x74]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [ebx], ecx
        mov cl, byte ptr ds : [edi+0x74]
        test cl, cl
        je public_6b63346
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b63298
        mov dword ptr ds : [esi+0xC], eax
        public_6b63298 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b6349f
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b632c2
        mov dword ptr ds : [esi+0xC], eax
        public_6b632c2 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b6349f
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [ecx], edx
        mov dl, byte ptr ds : [edi+0x5C]
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebp
        mov dword ptr ds : [esi], ecx
        jbe public_6b632eb
        mov dword ptr ds : [esi+0xC], eax
        public_6b632eb : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b6349f
        mov ecx, dword ptr ds : [ebx]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [ebx], ecx
        mov ecx, dword ptr ds : [edi+0x5C]
        xor edx, edx
        test ecx, ecx
        jle public_6b63346
        lea ebp, ds:[edi+0x3C]
        lea esp, ss:[esp]
        public_6b63310 : nop
        mov ecx, dword ptr ds : [esi]
        add ecx, 4
        cmp ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], ecx
        jbe public_6b6331f
        mov dword ptr ds : [esi+0xC], eax
        public_6b6331f : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b6349f
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edi+0x5C]
        add ecx, 4
        inc edx
        add ebp, 4
        cmp edx, eax
        mov dword ptr ds : [ebx], ecx
        mov eax, 0x16
        jl public_6b63310
        public_6b63346 : nop
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b63359
        mov dword ptr ds : [esi+0xC], eax
        public_6b63359 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b6349f
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x60]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebp
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b63381
        mov dword ptr ds : [esi+0xC], eax
        public_6b63381 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b6349f
        mov ecx, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x68]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [ebx], ecx
        mov cl, byte ptr ds : [edi+0x68]
        xor edx, edx
        test cl, cl
        jle public_6b633d5
        nop 
        public_6b633a0 : nop
        mov ecx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        add ecx, 4
        cmp ecx, ebp
        mov dword ptr ds : [esi], ecx
        jbe public_6b633b1
        mov dword ptr ds : [esi+0xC], eax
        public_6b633b1 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b6349f
        mov ebp, dword ptr ds : [edi+0x64]
        mov ecx, dword ptr ds : [ebx]
        mov ebp, dword ptr ss : [ebp+edx*4]
        mov dword ptr ds : [ecx], ebp
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        movsx ecx, byte ptr ds : [edi+0x68]
        inc edx
        cmp edx, ecx
        jl public_6b633a0
        public_6b633d5 : nop
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        mov cx, word ptr ds : [edi+0x6C]
        add edx, 2
        cmp edx, ebp
        mov dword ptr ds : [esi], edx
        jbe public_6b633ea
        mov dword ptr ds : [esi+0xC], eax
        public_6b633ea : nop
        mov edx, dword ptr ds : [edi+0x1C]
        test edx, edx
        jne public_6b6349f
        mov eax, dword ptr ds : [ebx]
        mov word ptr ds : [eax], cx
        fld dword ptr ds : [edi+0x70]
        fmul dword ptr ds : [public_6b6e944]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        fmul qword ptr ds : [public_6b6e390]
        call public_6b6a3f8
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebp
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b63428
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b63428 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6b6343b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b6343b : nop
        mov ecx, dword ptr ds : [ebx]
        mov byte ptr ds : [ecx], al
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        inc ecx
        push edx
        mov dword ptr ds : [ebx], ecx
        push ebx
        mov ecx, edi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b63462
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b63462 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6b63493
        mov dword ptr ds : [ecx+0x10], esi
        public_6b63493 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6b6349f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b63190)
    }
}

#undef public_6b631e9
#undef public_6b63213
#undef public_6b6323d
#undef public_6b63265
#undef public_6b63298
#undef public_6b632c2
#undef public_6b632eb
#undef public_6b63310
#undef public_6b6331f
#undef public_6b63346
#undef public_6b63359
#undef public_6b63381
#undef public_6b633a0
#undef public_6b633b1
#undef public_6b633d5
#undef public_6b633ea
#undef public_6b63428
#undef public_6b6343b
#undef public_6b63462
#undef public_6b63493
#undef public_6b6349f
