#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d03740);
CLANG_FORWARD_PROC_SYMBOL(public_6d05c80);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60ff6);

#define public_6d03774 _public_6d03774
#define public_6d0378b _public_6d0378b
#define public_6d03790 _public_6d03790
#define public_6d037ac _public_6d037ac
#define public_6d03815 _public_6d03815
#define public_6d03823 _public_6d03823
#define public_6d03830 _public_6d03830
#define public_6d03845 _public_6d03845
#define public_6d03857 _public_6d03857
#define public_6d0386c _public_6d0386c

PROC_DECLARE(0x6d03740, internal_6d03740, public_6d03740);
extern "C" NAKED register_t __cdecl internal_6d03740()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60ff6 @0x6d03742*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60ff6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov ecx, dword ptr ds : [esi]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_6d03774
        call dword ptr ds : [public_6d64618]
        public_6d03774 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6d03823
        jmp public_6d03790
        public_6d0378b : nop
        mov eax, dword ptr ss : [esp+0x10]
        nop 
        public_6d03790 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x1C], edi
        je public_6d03815
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x34], 1
        je public_6d037ac
        call dword ptr ds : [public_6d6461c]
        public_6d037ac : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+4]
        push eax
        push ecx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call public_6d05c80
        mov ebp, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x38], bl
        call public_6d5c540
        mov edx, dword ptr ds : [eax]
        push ebp
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, esi
        call public_6d05c80
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6d5ffb0
        push edi
        mov dword ptr ds : [esi+8], ebx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x24]
        add esp, 0xC
        public_6d03815 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6d0378b
        public_6d03823 : nop
        mov ebp, dword ptr ds : [esi+8]
        lea edi, ds:[esi+4]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_6d03845
        public_6d03830 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, edi
        call public_6d0f620
        cmp esi, ebp
        jne public_6d03830
        public_6d03845 : nop
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        je public_6d0386c
        public_6d03857 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, edi
        call public_6d0f620
        cmp esi, ebp
        jne public_6d03857
        public_6d0386c : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6d03740)
    }
}

#undef public_6d03774
#undef public_6d0378b
#undef public_6d03790
#undef public_6d037ac
#undef public_6d03815
#undef public_6d03823
#undef public_6d03830
#undef public_6d03845
#undef public_6d03857
#undef public_6d0386c
