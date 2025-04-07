#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef13d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4006);
CLANG_FORWARD_PROC_SYMBOL(public_6ef400c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4012);
CLANG_FORWARD_PROC_SYMBOL(public_6ef45cb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4680);

#define public_6ef13ed _public_6ef13ed
#define public_6ef1421 _public_6ef1421
#define public_6ef144e _public_6ef144e
#define public_6ef14a4 _public_6ef14a4
#define public_6ef14c1 _public_6ef14c1
#define public_6ef14ed _public_6ef14ed
#define public_6ef1545 _public_6ef1545

PROC_DECLARE(0x6ef13d0, internal_6ef13d0, public_6ef13d0);
extern "C" NAKED register_t __cdecl internal_6ef13d0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x9C]
        test eax, eax
        push edi
        jne public_6ef13ed
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 
        public_6ef13ed : nop
        mov eax, dword ptr ds : [esi+0xD4]
        push 0x10000
        push 0x12
        lea edi, ds:[esi+0xD8]
        push edi
        mov word ptr ds : [edi], 1
        mov ecx, dword ptr ds : [public_6f010a0]
        push eax
        push ecx
        call public_6ef4012
        test eax, eax
        je public_6ef1421
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 
        public_6ef1421 : nop
        mov edx, dword ptr ds : [esi+0xD4]
        mov eax, dword ptr ds : [public_6f010a0]
        push 4
        push 0
        push 0
        push 0
        push edi
        push edx
        push eax
        lea ebx, ds:[esi+0x28]
        push ebx
        call public_6ef400c
        test eax, eax
        je public_6ef144e
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 
        public_6ef144e : nop
        lea edx, ds:[esi+0x2C]
        xor eax, eax
        mov edi, edx
        mov ecx, 0x15
        rep stosd
        mov ecx, dword ptr ds : [esi+0xD4]
        mov dword ptr ds : [edx], 0x54
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        fild qword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+0xC4]
        call public_6ef4680
        push 0
        lea ebp, ds:[esi+0x4C]
        push ebp
        lea edi, ds:[esi+0x3C]
        push eax
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [ebx]
        push eax
        call public_6ef4006
        test eax, eax
        je public_6ef14a4
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 
        public_6ef14a4 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ebx]
        push 1
        push edi
        push ecx
        push edx
        call public_6ef4006
        test eax, eax
        je public_6ef14c1
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 
        public_6ef14c1 : nop
        mov ecx, dword ptr ds : [esi+0xD4]
        xor edi, edi
        push edi
        mov dword ptr ss : [esp+0x14], edi
        movzx edx, word ptr ds : [ecx+0xC]
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [ebx]
        push edx
        push eax
        call public_6ef4006
        test eax, eax
        mov eax, dword ptr ss : [esp+0x10]
        je public_6ef14ed
        mov eax, 0x1000
        public_6ef14ed : nop
        mov dword ptr ds : [esi+0x98], eax
        lea eax, ds:[eax+eax*2]
        push eax
        mov dword ptr ds : [esi+0xAC], eax
        call public_6ef45cb
        add esp, 4
        push 1
        mov dword ptr ds : [esi+0xA8], eax
        mov dword ptr ds : [esi+0xB4], edi
        mov dword ptr ds : [esi+0xB0], edi
        mov edx, dword ptr ds : [esi+0x98]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        push eax
        call public_6ef4006
        test eax, eax
        jne public_6ef1545
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+0x94], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 
        public_6ef1545 : nop
        mov ecx, dword ptr ds : [esi+0xD4]
        movzx eax, word ptr ds : [ecx+0xC]
        pop edi
        mov dword ptr ds : [esi+0x94], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ef13d0)
    }
}

#undef public_6ef13ed
#undef public_6ef1421
#undef public_6ef144e
#undef public_6ef14a4
#undef public_6ef14c1
#undef public_6ef14ed
#undef public_6ef1545
