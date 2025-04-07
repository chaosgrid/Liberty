#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee780);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fd10);
CLANG_FORWARD_PROC_SYMBOL(public_6f43a40);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6f96d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f96d30);

#define public_6f3fd30 _public_6f3fd30
#define public_6f3fd43 _public_6f3fd43
#define public_6f3fd46 _public_6f3fd46
#define public_6f3fd4a _public_6f3fd4a
#define public_6f3fda9 _public_6f3fda9
#define public_6f3fdc1 _public_6f3fdc1
#define public_6f3fdcb _public_6f3fdcb
#define public_6f3fdcf _public_6f3fdcf
#define public_6f3fde0 _public_6f3fde0
#define public_6f3fe1b _public_6f3fe1b
#define public_6f3fe2a _public_6f3fe2a
#define public_6f3fe4b _public_6f3fe4b
#define public_6f3fe6c _public_6f3fe6c
#define public_6f3fe7a _public_6f3fe7a
#define public_6f3fe99 _public_6f3fe99
#define public_6f3fea5 _public_6f3fea5
#define public_6f3fec1 _public_6f3fec1
#define public_6f3fedc _public_6f3fedc
#define public_6f3fee3 _public_6f3fee3
#define public_6f3ff06 _public_6f3ff06

PROC_DECLARE(0x6f3fd10, internal_6f3fd10, public_6f3fd10);
extern "C" NAKED register_t __cdecl internal_6f3fd10()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6f3fd4a
        lea esp, ss:[esp]
        public_6f3fd30 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f3fd43
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f3fd46
        public_6f3fd43 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f3fd46 : nop
        cmp ebp, edx
        jne public_6f3fd30
        public_6f3fd4a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f3fec1
        push 0
        push esi
        mov ecx, edi
        call public_6f96d10
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6eee780
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f3fda9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f3fda9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f3fda9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3fdcf
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3fdcf
        public_6f3fda9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f3fdc1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3fdcb
        public_6f3fdc1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3fdcb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3fdcb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3fdcf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f3fea5
        lea ecx, ds:[ecx]
        public_6f3fde0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x50]
        test cl, cl
        jne public_6f3fea5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3fe4b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6f3fe1b
        mov byte ptr ds : [eax+0x50], 1
        mov byte ptr ds : [ecx+0x50], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f3fe99
        public_6f3fe1b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3fe2a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f3fe2a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x50], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x50], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f3fe99
        public_6f3fe4b : nop
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_6f3fe6c
        mov byte ptr ds : [eax+0x50], 1
        mov byte ptr ds : [ecx+0x50], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x50], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f3fe99
        public_6f3fe6c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3fe7a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f3fe7a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x50], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f3fe99 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f3fde0
        public_6f3fea5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x50], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f3fec1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3fedc
        cmp esi, dword ptr ds : [ecx]
        je public_6f3fee3
        lea ecx, ss:[esp+0x10]
        call public_6f96d30
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3fedc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f3ff06
        public_6f3fee3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f43a40
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
        public_6f3ff06 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3fd10)
    }
}

#undef public_6f3fd30
#undef public_6f3fd43
#undef public_6f3fd46
#undef public_6f3fd4a
#undef public_6f3fda9
#undef public_6f3fdc1
#undef public_6f3fdcb
#undef public_6f3fdcf
#undef public_6f3fde0
#undef public_6f3fe1b
#undef public_6f3fe2a
#undef public_6f3fe4b
#undef public_6f3fe6c
#undef public_6f3fe7a
#undef public_6f3fe99
#undef public_6f3fea5
#undef public_6f3fec1
#undef public_6f3fedc
#undef public_6f3fee3
#undef public_6f3ff06
