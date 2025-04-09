#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_595150);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5af9c0);
CLANG_FORWARD_PROC_SYMBOL(public_5afd60);
CLANG_FORWARD_PROC_SYMBOL(public_5afde0);
CLANG_FORWARD_PROC_SYMBOL(public_5afe40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5af9f5 _public_5af9f5
#define public_5afa14 _public_5afa14
#define public_5afa31 _public_5afa31
#define public_5afa35 _public_5afa35
#define public_5afa55 _public_5afa55
#define public_5afaa6 _public_5afaa6
#define public_5afac2 _public_5afac2
#define public_5afaf0 _public_5afaf0
#define public_5afafb _public_5afafb
#define public_5afb10 _public_5afb10
#define public_5afb1c _public_5afb1c
#define public_5afb29 _public_5afb29
#define public_5afb31 _public_5afb31

PROC_DECLARE(0x5af9c0, internal_5af9c0, public_5af9c0);
extern "C" NAKED register_t __cdecl internal_5af9c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        cmp esi, eax
        je public_5afb31
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push ebp
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_5afa31
        mov ecx, eax
        cmp eax, ecx
        jne public_5afa31
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_5afa14
        public_5af9f5 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_5afde0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_5af9f5
        public_5afa14 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_5afa55
        public_5afa31 : nop
        cmp eax, edi
        je public_5afa55
        public_5afa35 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_595150
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_46dfb0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_5afa35
        public_5afa55 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ds : [ecx+1]
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi+8]
        mov byte ptr ds : [esi+1], dl
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+4]
        mov cl, byte ptr ds : [ebx+0x11]
        test cl, cl
        jne public_5afac2
        xor edx, edx
        mov dl, byte ptr ds : [ebx+0x10]
        mov ecx, esi
        push edx
        push eax
        call public_5afe40
        mov edi, eax
        lea eax, ds:[ebx+0xC]
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        call public_5999b0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ebp, eax
        jne public_5afaa6
        mov ebp, edi
        public_5afaa6 : nop
        mov ecx, dword ptr ds : [ebx]
        push edi
        push ecx
        mov ecx, esi
        call public_5afd60
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [ebx+8]
        push edi
        push edx
        mov ecx, esi
        call public_5afd60
        mov dword ptr ds : [edi+8], eax
        public_5afac2 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], ebp
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        pop edi
        pop ebp
        je public_5afb29
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        jne public_5afafb
        lea ebx, ds:[ebx]
        public_5afaf0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_5afaf0
        public_5afafb : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_5afb1c
        lea ecx, ds:[ecx]
        public_5afb10 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_5afb10
        public_5afb1c : nop
        mov eax, esi
        pop esi
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 8
        ret 4
        public_5afb29 : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        public_5afb31 : nop
        mov eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x5af9c0)
    }
}

#undef public_5af9f5
#undef public_5afa14
#undef public_5afa31
#undef public_5afa35
#undef public_5afa55
#undef public_5afaa6
#undef public_5afac2
#undef public_5afaf0
#undef public_5afafb
#undef public_5afb10
#undef public_5afb1c
#undef public_5afb29
#undef public_5afb31
