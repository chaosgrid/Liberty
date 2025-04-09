#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e8e0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae920);
CLANG_FORWARD_PROC_SYMBOL(public_5afb40);
CLANG_FORWARD_PROC_SYMBOL(public_5afd60);
CLANG_FORWARD_PROC_SYMBOL(public_5afe20);

#define public_5ae943 _public_5ae943
#define public_5ae947 _public_5ae947
#define public_5ae9c9 _public_5ae9c9
#define public_5ae9d0 _public_5ae9d0
#define public_5aea49 _public_5aea49
#define public_5aea51 _public_5aea51
#define public_5aeaca _public_5aeaca
#define public_5aead2 _public_5aead2
#define public_5aeaf0 _public_5aeaf0

PROC_DECLARE(0x5ae920, internal_5ae920, public_5ae920);
extern "C" NAKED register_t __cdecl internal_5ae920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0xC
        cmp eax, ecx
        je public_5aeaf0
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[ecx+0x14]
        lea esi, ds:[eax+0x18]
        jmp public_5ae947
        public_5ae943 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_5ae947 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ds:[ecx+4]
        push 0
        push eax
        lea ecx, ds:[esi-0x14]
        call dword ptr ds : [public_5c6f9c]
        lea eax, ds:[esi-4]
        cmp eax, ebp
        je public_5ae9d0
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        lea edi, ds:[esi-4]
        push ecx
        mov ecx, edi
        call public_5afb40
        mov dl, byte ptr ss : [ebp+1]
        mov ebx, dword ptr ds : [esi]
        mov byte ptr ds : [esi-3], dl
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax+4]
        push ebx
        push ecx
        mov ecx, edi
        call public_5afd60
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        je public_5ae9c9
        push eax
        call public_46e8e0
        mov dword ptr ds : [edi], eax
        mov edi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5afe20
        add esp, 8
        mov dword ptr ds : [edi+8], eax
        jmp public_5ae9d0
        public_5ae9c9 : nop
        mov dword ptr ds : [edi], edi
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+8], eax
        public_5ae9d0 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        lea ebx, ds:[esi+0x10]
        lea edi, ds:[ecx+0x28]
        cmp ebx, edi
        je public_5aea51
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebx
        call public_5afb40
        mov al, byte ptr ds : [edi+1]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [esi+0x14]
        mov byte ptr ds : [esi+0x11], al
        mov edx, dword ptr ds : [ecx+0x2C]
        lea eax, ds:[ecx+0x28]
        mov eax, dword ptr ds : [edx+4]
        push edi
        push eax
        mov ecx, ebx
        call public_5afd60
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [ecx+0x38]
        mov edi, dword ptr ds : [esi+0x14]
        lea eax, ds:[ecx+0x28]
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [esi+0x20], edx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        je public_5aea49
        push eax
        call public_46e8e0
        mov dword ptr ds : [edi], eax
        mov edi, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5afe20
        add esp, 8
        mov dword ptr ds : [edi+8], eax
        jmp public_5aea51
        public_5aea49 : nop
        mov dword ptr ds : [edi], edi
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+8], eax
        public_5aea51 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        lea ebx, ds:[esi+0x24]
        lea edi, ds:[ecx+0x3C]
        cmp ebx, edi
        je public_5aead2
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebx
        call public_5afb40
        mov al, byte ptr ds : [edi+1]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [esi+0x28]
        mov byte ptr ds : [esi+0x25], al
        mov edx, dword ptr ds : [ecx+0x40]
        lea eax, ds:[ecx+0x3C]
        mov eax, dword ptr ds : [edx+4]
        push edi
        push eax
        mov ecx, ebx
        call public_5afd60
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [ecx+0x4C]
        mov edi, dword ptr ds : [esi+0x28]
        lea eax, ds:[ecx+0x3C]
        mov ecx, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [esi+0x34], edx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        je public_5aeaca
        push eax
        call public_46e8e0
        mov dword ptr ds : [edi], eax
        mov edi, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5afe20
        add esp, 8
        mov dword ptr ds : [edi+8], eax
        jmp public_5aead2
        public_5aeaca : nop
        mov dword ptr ds : [edi], edi
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [eax+8], eax
        public_5aead2 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        add eax, 0x50
        add esi, 0x50
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jne public_5ae943
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_5aeaf0 : nop
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x5ae920)
    }
}

#undef public_5ae943
#undef public_5ae947
#undef public_5ae9c9
#undef public_5ae9d0
#undef public_5aea49
#undef public_5aea51
#undef public_5aeaca
#undef public_5aead2
#undef public_5aeaf0
