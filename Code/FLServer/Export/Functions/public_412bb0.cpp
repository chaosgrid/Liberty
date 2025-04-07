#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405850);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_412b40);
CLANG_FORWARD_PROC_SYMBOL(public_412bb0);

#define public_412c25 _public_412c25
#define public_412c34 _public_412c34
#define public_412c50 _public_412c50
#define public_412c8a _public_412c8a
#define public_412cbc _public_412cbc
#define public_412ceb _public_412ceb

PROC_DECLARE(0x412bb0, internal_412bb0, public_412bb0);
extern "C" NAKED register_t __cdecl internal_412bb0()
{
    __asm
    {
        sub esp, 0x810
        push ebx
        push esi
        mov esi, dword ptr ds : [public_41bbe8]
        push edi
        push 0
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1C4]
        push 0
        push 0x188
        push eax
        mov dword ptr ss : [esp+0x24], edi
        call esi
        mov ecx, dword ptr ds : [edi+0x1C4]
        push 0
        push 0
        push 0x18E
        mov ebx, eax
        push ecx
        mov dword ptr ss : [esp+0x28], ebx
        call esi
        mov edx, dword ptr ds : [edi+0x1C4]
        push 0
        push 0
        push 0x184
        push edx
        call esi
        call public_40cdc0
        mov ecx, dword ptr ds : [public_41baf8]
        mov eax, dword ptr ds : [ecx+0x48]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, dword ptr ds : [ecx+0x48]
        je public_412ceb
        push ebp
        lea ebp, ds:[edi+0x1A0]
        public_412c25 : nop
        mov ebx, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jne public_412c34
        mov eax, offset public_41c3f4
        public_412c34 : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [ebx+0x28]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], 1
        je public_412cbc
        mov edi, edi
        public_412c50 : nop
        mov eax, dword ptr ds : [public_42599c]
        mov ecx, dword ptr ds : [public_4259a0]
        mov dx, word ptr ds : [public_4259a4]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ecx
        xor eax, eax
        mov word ptr ss : [esp+0x28], dx
        mov ecx, 0x1FD
        lea edi, ss:[esp+0x2A]
        rep stosd
        stosw 
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_412c8a
        mov eax, offset public_41c3f4
        public_412c8a : nop
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_41b984]
        mov edi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [ebp]
        add esp, 8
        push edi
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ebx+0x28]
        inc edi
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], edi
        jne public_412c50
        mov edi, dword ptr ss : [esp+0x18]
        public_412cbc : nop
        push ebx
        mov ecx, edi
        call public_412b40
        lea ecx, ss:[esp+0x14]
        call public_405850
        mov ecx, dword ptr ds : [public_41baf8]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [ecx+0x48]
        jne public_412c25
        mov ebx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [public_41bbe8]
        pop ebp
        public_412ceb : nop
        mov edx, dword ptr ds : [edi+0x1C4]
        push 0
        push ebx
        push 0x197
        push edx
        call esi
        mov eax, dword ptr ds : [edi+0x1C4]
        push 0
        push ebx
        push 0x186
        push eax
        call esi
        pop edi
        pop esi
        pop ebx
        add esp, 0x810
        jmp public_40ce70
        UNREACHABLE_TRAP(0x412bb0)
    }
}

#undef public_412c25
#undef public_412c34
#undef public_412c50
#undef public_412c8a
#undef public_412cbc
#undef public_412ceb
