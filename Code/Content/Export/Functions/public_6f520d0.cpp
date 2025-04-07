#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f520d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f55310);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f52110 _public_6f52110
#define public_6f5212c _public_6f5212c
#define public_6f5212f _public_6f5212f
#define public_6f5214e _public_6f5214e
#define public_6f5216e _public_6f5216e
#define public_6f52189 _public_6f52189
#define public_6f521ba _public_6f521ba

PROC_DECLARE(0x6f520d0, internal_6f520d0, public_6f520d0);
extern "C" NAKED register_t __cdecl internal_6f520d0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+0xC]
        sub esp, 0xC
        test al, al
        push ebx
        push esi
        push edi
        mov ebx, ecx
        je public_6f5214e
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [ebx+0xC8]
        mov ecx, dword ptr ss : [esp+0x20]
        lea edi, ds:[ebx+0xC4]
        mov dword ptr ss : [esp+0xC], eax
        cmp esi, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x14], 1
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f5212c
        lea esp, ss:[esp]
        public_6f52110 : nop
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        call public_6f55310
        add esp, 8
        test al, al
        jne public_6f5212f
        mov eax, dword ptr ds : [edi+8]
        add esi, 0xC
        cmp esi, eax
        jne public_6f52110
        public_6f5212c : nop
        mov esi, dword ptr ds : [edi+8]
        public_6f5212f : nop
        cmp esi, dword ptr ds : [edi+8]
        je public_6f521ba
        dec dword ptr ds : [esi+8]
        jne public_6f521ba
        push esi
        mov ecx, edi
        call public_6f53a60
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f5214e : nop
        mov esi, dword ptr ds : [ebx+0xF0]
        mov edi, dword ptr ds : [esi+4]
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push 0x10
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f5216e
        mov edi, eax
        public_6f5216e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f52189
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ecx
        public_6f52189 : nop
        inc dword ptr ds : [ebx+0xF4]
        mov edx, dword ptr ds : [public_6fd0ccc]
        mov ecx, dword ptr ds : [public_6fbb794]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x10], edx
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_6fd1c74 @0x6f521a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_6fb342c]
        add esp, 0xC
        pop ebp
        public_6f521ba : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f520d0)
    }
}

#undef public_6f52110
#undef public_6f5212c
#undef public_6f5212f
#undef public_6f5214e
#undef public_6f5216e
#undef public_6f52189
#undef public_6f521ba
