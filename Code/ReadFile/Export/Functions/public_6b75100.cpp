#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b74170);
CLANG_FORWARD_PROC_SYMBOL(public_6b76470);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

#define public_6b7511e _public_6b7511e
#define public_6b75156 _public_6b75156
#define public_6b7515d _public_6b7515d
#define public_6b7517a _public_6b7517a
#define public_6b75188 _public_6b75188
#define public_6b751da _public_6b751da
#define public_6b75215 _public_6b75215

PROC_DECLARE(0x6b75100, internal_6b75100, public_6b75100);
extern "C" NAKED register_t __cdecl internal_6b75100()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, dword ptr ds : [esi+0x120]
        test eax, eax
        je public_6b7515d
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        jne public_6b7511e
        mov ecx, dword ptr ds : [esi+0x130]
        public_6b7511e : nop
        mov edi, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax]
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        mov edi, eax
        test edi, edi
        jne public_6b75156
        mov eax, dword ptr ds : [esi+0x120]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x78]
        mov dword ptr ds : [esi+0x11C], eax
        public_6b75156 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 0x1C
        public_6b7515d : nop
        test dword ptr ds : [esi+0x118], 0x40000000
        je public_6b7517a
        mov dword ptr ds : [esi+0x11C], 5
        pop edi
        xor eax, eax
        pop esi
        ret 0x1C
        public_6b7517a : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6b75188
        mov eax, dword ptr ds : [esi+0x130]
        public_6b75188 : nop
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        lea edi, ds:[esi+0x134]
        je public_6b75215
        lea edx, ss:[esp+0x10]
        lea eax, ss:[esp+0xC]
        push edx
        push eax
        mov ecx, edi
        call public_6b76470
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        je public_6b75215
        add eax, 0x10
        test eax, eax
        je public_6b75215
        mov edi, dword ptr ds : [esi+0x14C]
        push ebx
        mov dword ptr ss : [esp+0x14], eax
        push 0xC
        mov ebx, dword ptr ds : [edi+4]
        call public_6b782ac
        add esp, 4
        mov dword ptr ds : [eax], edi
        test ebx, ebx
        jne public_6b751da
        mov ebx, eax
        public_6b751da : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push eax
        call public_6b74170
        mov edx, dword ptr ds : [esi+0x150]
        mov eax, dword ptr ds : [esi+0x14C]
        add esp, 8
        inc edx
        mov dword ptr ds : [esi+0x150], edx
        mov eax, dword ptr ds : [eax+4]
        pop ebx
        pop edi
        add eax, 8
        pop esi
        ret 0x1C
        public_6b75215 : nop
        mov dword ptr ds : [esi+0x11C], 6
        pop edi
        xor eax, eax
        pop esi
        ret 0x1C
        UNREACHABLE_TRAP(0x6b75100)
    }
}

#undef public_6b7511e
#undef public_6b75156
#undef public_6b7515d
#undef public_6b7517a
#undef public_6b75188
#undef public_6b751da
#undef public_6b75215
