#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db20de);

#define public_6dad059 _public_6dad059
#define public_6dad083 _public_6dad083
#define public_6dad0ad _public_6dad0ad
#define public_6dad0d5 _public_6dad0d5
#define public_6dad108 _public_6dad108
#define public_6dad132 _public_6dad132
#define public_6dad15b _public_6dad15b
#define public_6dad180 _public_6dad180
#define public_6dad18f _public_6dad18f
#define public_6dad1b6 _public_6dad1b6
#define public_6dad1c9 _public_6dad1c9
#define public_6dad1f1 _public_6dad1f1
#define public_6dad210 _public_6dad210
#define public_6dad221 _public_6dad221
#define public_6dad245 _public_6dad245
#define public_6dad25a _public_6dad25a
#define public_6dad298 _public_6dad298
#define public_6dad2ab _public_6dad2ab
#define public_6dad2d2 _public_6dad2d2
#define public_6dad303 _public_6dad303
#define public_6dad30f _public_6dad30f

PROC_DECLARE(0x6dad000, internal_6dad000, public_6dad000);
extern "C" NAKED register_t __cdecl internal_6dad000()
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
        call public_6da1380
        mov dword ptr ds : [edi+0x1C], eax
        test eax, eax
        mov eax, 0x16
        jne public_6dad30f
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6dad059
        mov dword ptr ds : [esi+0xC], eax
        public_6dad059 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dad30f
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
        jbe public_6dad083
        mov dword ptr ds : [esi+0xC], eax
        public_6dad083 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dad30f
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
        jbe public_6dad0ad
        mov dword ptr ds : [esi+0xC], eax
        public_6dad0ad : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dad30f
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
        jbe public_6dad0d5
        mov dword ptr ds : [esi+0xC], eax
        public_6dad0d5 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dad30f
        mov ecx, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x74]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [ebx], ecx
        mov cl, byte ptr ds : [edi+0x74]
        test cl, cl
        je public_6dad1b6
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6dad108
        mov dword ptr ds : [esi+0xC], eax
        public_6dad108 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dad30f
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
        jbe public_6dad132
        mov dword ptr ds : [esi+0xC], eax
        public_6dad132 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dad30f
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
        jbe public_6dad15b
        mov dword ptr ds : [esi+0xC], eax
        public_6dad15b : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dad30f
        mov ecx, dword ptr ds : [ebx]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [ebx], ecx
        mov ecx, dword ptr ds : [edi+0x5C]
        xor edx, edx
        test ecx, ecx
        jle public_6dad1b6
        lea ebp, ds:[edi+0x3C]
        lea esp, ss:[esp]
        public_6dad180 : nop
        mov ecx, dword ptr ds : [esi]
        add ecx, 4
        cmp ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], ecx
        jbe public_6dad18f
        mov dword ptr ds : [esi+0xC], eax
        public_6dad18f : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dad30f
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
        jl public_6dad180
        public_6dad1b6 : nop
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6dad1c9
        mov dword ptr ds : [esi+0xC], eax
        public_6dad1c9 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dad30f
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
        jbe public_6dad1f1
        mov dword ptr ds : [esi+0xC], eax
        public_6dad1f1 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dad30f
        mov ecx, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x68]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [ebx], ecx
        mov cl, byte ptr ds : [edi+0x68]
        xor edx, edx
        test cl, cl
        jle public_6dad245
        nop 
        public_6dad210 : nop
        mov ecx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        add ecx, 4
        cmp ecx, ebp
        mov dword ptr ds : [esi], ecx
        jbe public_6dad221
        mov dword ptr ds : [esi+0xC], eax
        public_6dad221 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6dad30f
        mov ebp, dword ptr ds : [edi+0x64]
        mov ecx, dword ptr ds : [ebx]
        mov ebp, dword ptr ss : [ebp+edx*4]
        mov dword ptr ds : [ecx], ebp
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        movsx ecx, byte ptr ds : [edi+0x68]
        inc edx
        cmp edx, ecx
        jl public_6dad210
        public_6dad245 : nop
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        mov cx, word ptr ds : [edi+0x6C]
        add edx, 2
        cmp edx, ebp
        mov dword ptr ds : [esi], edx
        jbe public_6dad25a
        mov dword ptr ds : [esi+0xC], eax
        public_6dad25a : nop
        mov edx, dword ptr ds : [edi+0x1C]
        test edx, edx
        jne public_6dad30f
        mov eax, dword ptr ds : [ebx]
        mov word ptr ds : [eax], cx
        fld dword ptr ds : [edi+0x70]
        fmul dword ptr ds : [public_6db6554]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        fmul qword ptr ds : [public_6db60f0]
        call public_6db20de
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebp
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6dad298
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dad298 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6dad2ab
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dad2ab : nop
        mov ecx, dword ptr ds : [ebx]
        mov byte ptr ds : [ecx], al
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        inc ecx
        push edx
        mov dword ptr ds : [ebx], ecx
        push ebx
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dad2d2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dad2d2 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
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
        jbe public_6dad303
        mov dword ptr ds : [ecx+0x10], esi
        public_6dad303 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6dad30f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6dad000)
    }
}

#undef public_6dad059
#undef public_6dad083
#undef public_6dad0ad
#undef public_6dad0d5
#undef public_6dad108
#undef public_6dad132
#undef public_6dad15b
#undef public_6dad180
#undef public_6dad18f
#undef public_6dad1b6
#undef public_6dad1c9
#undef public_6dad1f1
#undef public_6dad210
#undef public_6dad221
#undef public_6dad245
#undef public_6dad25a
#undef public_6dad298
#undef public_6dad2ab
#undef public_6dad2d2
#undef public_6dad303
#undef public_6dad30f
