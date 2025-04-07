#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e8e0);
CLANG_FORWARD_PROC_SYMBOL(public_5aeb00);
CLANG_FORWARD_PROC_SYMBOL(public_5afb40);
CLANG_FORWARD_PROC_SYMBOL(public_5afd60);
CLANG_FORWARD_PROC_SYMBOL(public_5afe20);

#define public_5aeb23 _public_5aeb23
#define public_5aeb27 _public_5aeb27
#define public_5aebc0 _public_5aebc0
#define public_5aebc7 _public_5aebc7
#define public_5aec2c _public_5aec2c
#define public_5aec34 _public_5aec34
#define public_5aec9b _public_5aec9b
#define public_5aeca3 _public_5aeca3
#define public_5aecb5 _public_5aecb5

PROC_DECLARE(0x5aeb00, internal_5aeb00, public_5aeb00);
extern "C" NAKED register_t __cdecl internal_5aeb00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0xC
        cmp ecx, eax
        je public_5aecb5
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        push edi
        lea esi, ds:[ecx+0x18]
        lea edi, ds:[eax+0x18]
        jmp public_5aeb27
        public_5aeb23 : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_5aeb27 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax-0x50]
        sub eax, 0x50
        sub ecx, 0x50
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_5c7080]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [eax]
        push ecx
        sub edi, 0x50
        push 0
        lea edx, ds:[edi-0x14]
        sub esi, 0x50
        push edx
        lea ecx, ds:[esi-0x14]
        call dword ptr ds : [public_5c6f9c]
        lea eax, ds:[edi-4]
        lea ecx, ds:[esi-4]
        cmp ecx, eax
        je public_5aebc7
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        lea ebx, ds:[esi-4]
        push edx
        mov ecx, ebx
        call public_5afb40
        mov al, byte ptr ds : [edi-3]
        mov ebp, dword ptr ds : [esi]
        mov byte ptr ds : [esi-3], al
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+4]
        push ebp
        push edx
        mov ecx, ebx
        call public_5afd60
        mov dword ptr ss : [ebp+4], eax
        mov eax, dword ptr ds : [edi+0xC]
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ecx
        je public_5aebc0
        push eax
        call public_46e8e0
        mov dword ptr ds : [ebx], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_5afe20
        add esp, 8
        mov dword ptr ds : [ebx+8], eax
        jmp public_5aebc7
        public_5aebc0 : nop
        mov dword ptr ds : [ebx], ebx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+8], eax
        public_5aebc7 : nop
        lea ebp, ds:[esi+0x10]
        lea edx, ds:[edi+0x10]
        cmp ebp, edx
        je public_5aec34
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_5afb40
        mov cl, byte ptr ds : [edi+0x11]
        mov ebx, dword ptr ds : [esi+0x14]
        mov byte ptr ds : [esi+0x11], cl
        mov edx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [edx+4]
        push ebx
        push eax
        mov ecx, ebp
        call public_5afd60
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+0x20]
        mov ebx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0x20], ecx
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, dword ptr ds : [esi+0x18]
        je public_5aec2c
        push eax
        call public_46e8e0
        mov dword ptr ds : [ebx], eax
        mov ebx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_5afe20
        add esp, 8
        mov dword ptr ds : [ebx+8], eax
        jmp public_5aec34
        public_5aec2c : nop
        mov dword ptr ds : [ebx], ebx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+8], eax
        public_5aec34 : nop
        lea ebp, ds:[esi+0x24]
        lea eax, ds:[edi+0x24]
        cmp ebp, eax
        je public_5aeca3
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebp
        call public_5afb40
        mov dl, byte ptr ds : [edi+0x25]
        mov ebx, dword ptr ds : [esi+0x28]
        mov byte ptr ds : [esi+0x25], dl
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [eax+4]
        push ebx
        push ecx
        mov ecx, ebp
        call public_5afd60
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [edi+0x34]
        mov ebx, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [esi+0x34], edx
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ecx
        je public_5aec9b
        push eax
        call public_46e8e0
        mov dword ptr ds : [ebx], eax
        mov ebx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_5afe20
        add esp, 8
        mov dword ptr ds : [ebx+8], eax
        jmp public_5aeca3
        public_5aec9b : nop
        mov dword ptr ds : [ebx], ebx
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [eax+8], eax
        public_5aeca3 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        cmp dword ptr ss : [esp+0x24], ecx
        jne public_5aeb23
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_5aecb5 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x5aeb00)
    }
}

#undef public_5aeb23
#undef public_5aeb27
#undef public_5aebc0
#undef public_5aebc7
#undef public_5aec2c
#undef public_5aec34
#undef public_5aec9b
#undef public_5aeca3
#undef public_5aecb5
