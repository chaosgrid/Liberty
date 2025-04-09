#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);
CLANG_FORWARD_PROC_SYMBOL(public_482d80);
CLANG_FORWARD_PROC_SYMBOL(public_4b7390);
CLANG_FORWARD_PROC_SYMBOL(public_4c6b80);
CLANG_FORWARD_PROC_SYMBOL(public_585f20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4c6be0 _public_4c6be0
#define public_4c6c32 _public_4c6c32
#define public_4c6c45 _public_4c6c45
#define public_4c6c60 _public_4c6c60
#define public_4c6c98 _public_4c6c98
#define public_4c6cc0 _public_4c6cc0
#define public_4c6ce0 _public_4c6ce0
#define public_4c6d22 _public_4c6d22
#define public_4c6d2a _public_4c6d2a
#define public_4c6d45 _public_4c6d45
#define public_4c6d65 _public_4c6d65
#define public_4c6d7e _public_4c6d7e
#define public_4c6d8c _public_4c6d8c
#define public_4c6da3 _public_4c6da3
#define public_4c6dd6 _public_4c6dd6
#define public_4c6df7 _public_4c6df7
#define public_4c6e03 _public_4c6e03
#define public_4c6e22 _public_4c6e22
#define public_4c6e56 _public_4c6e56

PROC_DECLARE(0x4c6b80, internal_4c6b80, public_4c6b80);
extern "C" NAKED register_t __cdecl internal_4c6b80()
{
    __asm
    {
        sub esp, 0xAC
        mov eax, dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        mov dword ptr ss : [esp+0x1C], ecx
        add ecx, 0x1C
        push edi
        push eax
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0x34], ecx
        call dword ptr ds : [public_5c618c]
        mov esi, dword ptr ss : [esp+0xC0]
        mov ebx, dword ptr ds : [esi+8]
        lea ecx, ds:[ebx+ebx*8]
        shl ecx, 4
        push ecx
        mov dword ptr ss : [esp+0x28], ebx
        call public_5b7e84
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx]
        add esp, 4
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], ecx
        jle public_4c6cc0
        lea esi, ds:[eax+0xC]
        mov dword ptr ss : [esp+0x14], ebx
        public_4c6be0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+0xC]
        lea edi, ds:[edx+8]
        push eax
        call dword ptr ds : [public_5c629c]
        mov ebp, eax
        mov dword ptr ds : [esi-0xC], edi
        mov dword ptr ds : [esi-8], ebp
        mov eax, dword ptr ds : [edi+4]
        push eax
        call dword ptr ds : [public_5c603c]
        mov dword ptr ds : [esi-4], eax
        mov byte ptr ds : [esi], 1
        mov byte ptr ds : [esi+1], 0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_47e460
        add esp, 0xC
        test ebp, ebp
        mov ebx, eax
        je public_4c6c98
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        je public_4c6c98
        test ebx, ebx
        je public_4c6c32
        cmp ebx, 2
        jne public_4c6c45
        public_4c6c32 : nop
        mov ebp, dword ptr ss : [ebp+0x48]
        push 1
        push ebp
        call public_585f20
        test eax, eax
        jne public_4c6c60
        mov byte ptr ds : [esi], al
        jmp public_4c6c60
        public_4c6c45 : nop
        cmp ebx, 1
        jne public_4c6c60
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0xC0]
        push eax
        push ecx
        call public_482d80
        add esp, 8
        mov byte ptr ds : [esi], al
        public_4c6c60 : nop
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [edx], 0
        je public_4c6c98
        cmp ebx, 4
        jne public_4c6c98
        mov eax, dword ptr ds : [esi-4]
        test eax, eax
        je public_4c6c98
        mov cl, byte ptr ds : [edi+0x18]
        test cl, cl
        jne public_4c6c98
        push 0x40
        mov byte ptr ds : [esi+1], 1
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [public_67eca8]
        lea ecx, ds:[esi+2]
        push ecx
        push edx
        push eax
        call public_4347e0
        add esp, 0x10
        public_4c6c98 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        add esi, 0x90
        dec eax
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x14], eax
        jne public_4c6be0
        mov ebx, dword ptr ss : [esp+0x24]
        nop 
        lea esp, ss:[esp]
        public_4c6cc0 : nop
        lea eax, ds:[ebx-1]
        test eax, eax
        mov byte ptr ss : [esp+0x13], 1
        jle public_4c6df7
        mov ecx, dword ptr ss : [esp+0x1C]
        lea ebp, ds:[ecx+0x9D]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, edi
        public_4c6ce0 : nop
        mov al, byte ptr ss : [ebp-0x90]
        xor edi, edi
        xor esi, esi
        test al, al
        je public_4c6d2a
        mov cl, byte ptr ss : [ebp]
        test cl, cl
        je public_4c6da3
        test al, al
        je public_4c6d2a
        test cl, cl
        je public_4c6d22
        lea edx, ss:[ebp+1]
        push edx
        lea eax, ss:[ebp-0x8F]
        push eax
        call dword ptr ds : [public_5c7200]
        add esp, 8
        test eax, eax
        jle public_4c6dd6
        jmp public_4c6da3
        public_4c6d22 : nop
        test al, al
        jne public_4c6dd6
        public_4c6d2a : nop
        cmp byte ptr ss : [ebp], 0
        jne public_4c6dd6
        mov al, byte ptr ss : [ebp-0x91]
        test al, al
        jne public_4c6d45
        mov cl, byte ptr ss : [ebp-1]
        test cl, cl
        jne public_4c6da3
        public_4c6d45 : nop
        cmp al, byte ptr ss : [ebp-1]
        jne public_4c6dd6
        mov ecx, dword ptr ss : [ebp-0x9D]
        mov al, byte ptr ds : [ecx+0x18]
        test al, al
        jne public_4c6d65
        mov edx, dword ptr ss : [ebp-0xD]
        mov cl, byte ptr ds : [edx+0x18]
        test cl, cl
        jne public_4c6da3
        public_4c6d65 : nop
        mov ecx, dword ptr ss : [ebp-0xD]
        cmp al, byte ptr ds : [ecx+0x18]
        jne public_4c6dd6
        mov ecx, dword ptr ss : [ebp-0x95]
        test ecx, ecx
        je public_4c6d7e
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov edi, eax
        public_4c6d7e : nop
        mov ecx, dword ptr ss : [ebp-5]
        test ecx, ecx
        je public_4c6d8c
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov esi, eax
        public_4c6d8c : nop
        cmp edi, esi
        jg public_4c6da3
        jne public_4c6dd6
        mov ecx, dword ptr ss : [ebp-0x9D]
        mov edx, dword ptr ss : [ebp-0xD]
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [edx+4]
        jbe public_4c6dd6
        public_4c6da3 : nop
        lea eax, ss:[ebp-0x9D]
        mov ecx, 0x24
        mov esi, eax
        lea edi, ss:[esp+0x2C]
        rep movsd
        lea edx, ss:[ebp-0xD]
        mov ecx, 0x24
        mov esi, edx
        mov edi, eax
        rep movsd
        mov ecx, 0x24
        lea esi, ss:[esp+0x2C]
        mov edi, edx
        mov byte ptr ss : [esp+0x13], 0
        rep movsd
        public_4c6dd6 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x90
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_4c6ce0
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_4c6cc0
        public_4c6df7 : nop
        test ebx, ebx
        jle public_4c6e56
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], ebx
        public_4c6e03 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [esi+4]
        push 0x28
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_4c6e22
        mov edi, eax
        public_4c6e22 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        push ebx
        push eax
        call public_4b7390
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [eax+8]
        add esp, 8
        inc edx
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x90
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_4c6e03
        public_4c6e56 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_5b7e1d
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 4
        UNREACHABLE_TRAP(0x4c6b80)
    }
}

#undef public_4c6be0
#undef public_4c6c32
#undef public_4c6c45
#undef public_4c6c60
#undef public_4c6c98
#undef public_4c6cc0
#undef public_4c6ce0
#undef public_4c6d22
#undef public_4c6d2a
#undef public_4c6d45
#undef public_4c6d65
#undef public_4c6d7e
#undef public_4c6d8c
#undef public_4c6da3
#undef public_4c6dd6
#undef public_4c6df7
#undef public_4c6e03
#undef public_4c6e22
#undef public_4c6e56
