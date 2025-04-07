#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a3f8);

#define public_6b5c35f _public_6b5c35f
#define public_6b5c386 _public_6b5c386
#define public_6b5c3b0 _public_6b5c3b0
#define public_6b5c3dc _public_6b5c3dc
#define public_6b5c40a _public_6b5c40a
#define public_6b5c436 _public_6b5c436
#define public_6b5c464 _public_6b5c464
#define public_6b5c490 _public_6b5c490
#define public_6b5c51f _public_6b5c51f
#define public_6b5c532 _public_6b5c532
#define public_6b5c54e _public_6b5c54e
#define public_6b5c561 _public_6b5c561
#define public_6b5c57d _public_6b5c57d
#define public_6b5c590 _public_6b5c590
#define public_6b5c5ac _public_6b5c5ac
#define public_6b5c5bf _public_6b5c5bf
#define public_6b5c5e8 _public_6b5c5e8
#define public_6b5c61b _public_6b5c61b
#define public_6b5c627 _public_6b5c627

PROC_DECLARE(0x6b5c310, internal_6b5c310, public_6b5c310);
extern "C" NAKED register_t __cdecl internal_6b5c310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebp, ds:[edi+0x18]
        push ebp
        mov ecx, edi
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5c35f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5c35f : nop
        mov ecx, dword ptr ds : [edi+0x24]
        push ecx
        call dword ptr ds : [public_6b6b014]
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        mov edx, eax
        mov eax, dword ptr ds : [esi]
        add eax, 2
        mov ecx, eax
        cmp ecx, ebx
        mov dword ptr ds : [esi], eax
        mov eax, 0x16
        jbe public_6b5c386
        mov dword ptr ds : [esi+0xC], eax
        public_6b5c386 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5c627
        mov ecx, dword ptr ss : [ebp]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b5c3b0
        mov dword ptr ds : [esi+0xC], eax
        public_6b5c3b0 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5c627
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 2
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b5c3dc
        mov dword ptr ds : [esi+0xC], eax
        public_6b5c3dc : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5c627
        mov ecx, dword ptr ss : [ebp]
        mov dx, word ptr ds : [edi+0x2C]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b5c40a
        mov dword ptr ds : [esi+0xC], eax
        public_6b5c40a : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5c627
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 2
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b5c436
        mov dword ptr ds : [esi+0xC], eax
        public_6b5c436 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5c627
        mov ecx, dword ptr ss : [ebp]
        mov dx, word ptr ds : [edi+0x34]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b5c464
        mov dword ptr ds : [esi+0xC], eax
        public_6b5c464 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5c627
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 0xC
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6b5c490
        mov dword ptr ds : [esi+0xC], eax
        public_6b5c490 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5c627
        mov eax, dword ptr ds : [edi+0x3C]
        mov ecx, dword ptr ds : [edi+0x40]
        mov ebx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x44]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], edx
        call public_6b3a160
        fld dword ptr ds : [edi+0x4C]
        fmul qword ptr ds : [public_6b6c1e0]
        add ebx, 0xC
        mov dword ptr ss : [ebp], ebx
        call public_6b6a3f8
        fld dword ptr ds : [edi+0x50]
        fmul qword ptr ds : [public_6b6c1e0]
        mov byte ptr ss : [esp+0x28], al
        call public_6b6a3f8
        fld dword ptr ds : [edi+0x54]
        fmul qword ptr ds : [public_6b6c1e0]
        mov byte ptr ss : [esp+0x24], al
        call public_6b6a3f8
        fld dword ptr ds : [edi+0x48]
        fmul qword ptr ds : [public_6b6c1e0]
        mov byte ptr ss : [esp+0x13], al
        call public_6b6a3f8
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebx
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        mov ebx, 0x16
        jbe public_6b5c51f
        mov dword ptr ds : [esi+0xC], ebx
        public_6b5c51f : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6b5c532
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5c532 : nop
        mov ecx, dword ptr ss : [ebp]
        mov dl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6b5c54e
        mov dword ptr ds : [esi+0xC], ebx
        public_6b5c54e : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6b5c561
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5c561 : nop
        mov ecx, dword ptr ss : [ebp]
        mov dl, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6b5c57d
        mov dword ptr ds : [esi+0xC], ebx
        public_6b5c57d : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6b5c590
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5c590 : nop
        mov ecx, dword ptr ss : [ebp]
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6b5c5ac
        mov dword ptr ds : [esi+0xC], ebx
        public_6b5c5ac : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6b5c5bf
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5c5bf : nop
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], al
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        inc ecx
        push eax
        mov dword ptr ss : [ebp], ecx
        push ebp
        mov ecx, edi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5c5e8
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5c5e8 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6b5c61b
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5c61b : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6b5c627 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6b5c310)
    }
}

#undef public_6b5c35f
#undef public_6b5c386
#undef public_6b5c3b0
#undef public_6b5c3dc
#undef public_6b5c40a
#undef public_6b5c436
#undef public_6b5c464
#undef public_6b5c490
#undef public_6b5c51f
#undef public_6b5c532
#undef public_6b5c54e
#undef public_6b5c561
#undef public_6b5c57d
#undef public_6b5c590
#undef public_6b5c5ac
#undef public_6b5c5bf
#undef public_6b5c5e8
#undef public_6b5c61b
#undef public_6b5c627
