#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221300);
CLANG_FORWARD_PROC_SYMBOL(public_6221c60);
CLANG_FORWARD_PROC_SYMBOL(public_6221eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6221f00);
CLANG_FORWARD_PROC_SYMBOL(public_6222030);
CLANG_FORWARD_PROC_SYMBOL(public_6222050);
CLANG_FORWARD_PROC_SYMBOL(public_6222b60);

#define public_622131c _public_622131c
#define public_622132f _public_622132f
#define public_6221332 _public_6221332
#define public_6221336 _public_6221336
#define public_6221397 _public_6221397
#define public_62213af _public_62213af
#define public_62213b9 _public_62213b9
#define public_62213bd _public_62213bd
#define public_62213cb _public_62213cb
#define public_6221406 _public_6221406
#define public_6221415 _public_6221415
#define public_6221436 _public_6221436
#define public_6221457 _public_6221457
#define public_6221465 _public_6221465
#define public_6221484 _public_6221484
#define public_6221490 _public_6221490
#define public_62214ac _public_62214ac
#define public_62214c7 _public_62214c7
#define public_62214d0 _public_62214d0
#define public_62214f3 _public_62214f3

PROC_DECLARE(0x6221300, internal_6221300, public_6221300);
extern "C" NAKED register_t __cdecl internal_6221300()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov al, 1
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov esi, ecx
        mov ebp, dword ptr ds : [ecx+4]
        cmp ebp, edx
        je public_6221336
        public_622131c : nop
        mov eax, dword ptr ds : [ebx]
        mov esi, ebp
        cmp eax, dword ptr ss : [ebp+0xC]
        setb al
        test al, al
        je public_622132f
        mov ebp, dword ptr ss : [ebp]
        jmp public_6221332
        public_622132f : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6221332 : nop
        cmp ebp, edx
        jne public_622131c
        public_6221336 : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_62214ac
        push 0
        push esi
        mov ecx, edi
        call public_6222030
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6222b60
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6221397
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6221397
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jb public_6221397
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62213bd
        mov dword ptr ds : [eax+8], ebx
        jmp public_62213bd
        public_6221397 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_62213af
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_62213b9
        public_62213af : nop
        cmp esi, dword ptr ds : [eax]
        jne public_62213b9
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_62213b9 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_62213bd : nop
        mov edx, dword ptr ds : [edi+4]
        mov esi, ebx
        cmp ebx, dword ptr ds : [edx+4]
        je public_6221490
        public_62213cb : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        jne public_6221490
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6221436
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6221406
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6221484
        public_6221406 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6221415
        mov esi, eax
        mov ecx, edi
        push esi
        call public_6221eb0
        public_6221415 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6221f00
        jmp public_6221484
        public_6221436 : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6221457
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6221484
        public_6221457 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6221465
        mov esi, eax
        mov ecx, edi
        push esi
        call public_6221f00
        public_6221465 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, edi
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6221eb0
        public_6221484 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_62213cb
        public_6221490 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_62214ac : nop
        mov edx, esi
        test al, al
        mov dword ptr ss : [esp+0x10], edx
        je public_62214c7
        cmp esi, dword ptr ds : [ecx]
        je public_62214d0
        lea ecx, ss:[esp+0x10]
        call public_6222050
        mov edx, dword ptr ss : [esp+0x10]
        public_62214c7 : nop
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [ebx]
        cmp eax, ecx
        jae public_62214f3
        public_62214d0 : nop
        push ebx
        push esi
        lea ecx, ss:[esp+0x24]
        push ebp
        push ecx
        mov ecx, edi
        call public_6221c60
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_62214f3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6221300)
    }
}

#undef public_622131c
#undef public_622132f
#undef public_6221332
#undef public_6221336
#undef public_6221397
#undef public_62213af
#undef public_62213b9
#undef public_62213bd
#undef public_62213cb
#undef public_6221406
#undef public_6221415
#undef public_6221436
#undef public_6221457
#undef public_6221465
#undef public_6221484
#undef public_6221490
#undef public_62214ac
#undef public_62214c7
#undef public_62214d0
#undef public_62214f3
