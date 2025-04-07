#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2fe10);
CLANG_FORWARD_PROC_SYMBOL(public_6c30200);
CLANG_FORWARD_PROC_SYMBOL(public_6c304a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c30820);
CLANG_FORWARD_PROC_SYMBOL(public_6c34160);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c306d2 _public_6c306d2
#define public_6c30710 _public_6c30710
#define public_6c30739 _public_6c30739
#define public_6c30762 _public_6c30762
#define public_6c30766 _public_6c30766
#define public_6c30786 _public_6c30786
#define public_6c3078a _public_6c3078a
#define public_6c307b3 _public_6c307b3
#define public_6c307b6 _public_6c307b6

PROC_DECLARE(0x6c306c0, internal_6c306c0, public_6c306c0);
extern "C" NAKED register_t __cdecl internal_6c306c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        sub esp, 8
        test eax, eax
        jbe public_6c306d2
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6c306d2 : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6c307b6
        push ebp
        mov ebp, dword ptr ds : [ecx+8]
        test ebp, ebp
        mov dword ptr ds : [ecx+4], 1
        je public_6c307b3
        mov ecx, dword ptr ss : [ebp+0x14]
        test ecx, ecx
        push ebx
        push esi
        lea esi, ss:[ebp+4]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x1C], eax
        je public_6c30762
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6c30739
        public_6c30710 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6c30200
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_6c30820
        push ebx
        call public_6c34ea0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6c30710
        public_6c30739 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6c34160
        jmp public_6c3078a
        public_6c30762 : nop
        cmp eax, edi
        je public_6c30786
        public_6c30766 : nop
        lea ecx, ss:[esp+0x1C]
        mov ebx, eax
        call public_6c304a0
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_6c2fe10
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, edi
        jne public_6c30766
        public_6c30786 : nop
        mov dword ptr ss : [esp+0x10], eax
        public_6c3078a : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6c34ea0
        mov eax, dword ptr ds : [esi+8]
        xor edi, edi
        push eax
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0x10], edi
        call public_6c34ea0
        push ebp
        mov dword ptr ds : [esi+8], edi
        call public_6c34ea0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        public_6c307b3 : nop
        xor eax, eax
        pop ebp
        public_6c307b6 : nop
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6c306c0)
    }
}

#undef public_6c306d2
#undef public_6c30710
#undef public_6c30739
#undef public_6c30762
#undef public_6c30766
#undef public_6c30786
#undef public_6c3078a
#undef public_6c307b3
#undef public_6c307b6
