#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d142c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d143e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d146e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_PROC_SYMBOL(public_6d177b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d48d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c430);

#define public_6d1781b _public_6d1781b
#define public_6d17832 _public_6d17832
#define public_6d1787f _public_6d1787f
#define public_6d17885 _public_6d17885
#define public_6d17903 _public_6d17903
#define public_6d17908 _public_6d17908
#define public_6d1795a _public_6d1795a

PROC_DECLARE(0x6d177b0, internal_6d177b0, public_6d177b0);
extern "C" NAKED register_t __cdecl internal_6d177b0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        test ebp, ebp
        push esi
        push edi
        jbe public_6d1795a
        mov eax, dword ptr ds : [public_6d90264]
        lea ebx, ss:[ebp-1]
        cmp ebx, eax
        jae public_6d1795a
        mov ecx, dword ptr ds : [public_6d90260]
        mov eax, ebx
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6d1795a
        mov edi, ebp
        imul edi, 0x418
        mov eax, dword ptr ds : [edi+ecx-0x24]
        test eax, 0x3FFFFFFF
        lea esi, ds:[edi+ecx-0x418]
        jne public_6d1781b
        mov ecx, esi
        call public_6d48d20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        public_6d1781b : nop
        cmp dword ptr ss : [esp+0x24], eax
        je public_6d17832
        mov ecx, esi
        call public_6d48d20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        public_6d17832 : nop
        mov eax, dword ptr ds : [esi+0x3F8]
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x28], eax
        je public_6d17908
        cmp ebx, dword ptr ds : [public_6d90264]
        jae public_6d17885
        mov edx, ebx
        imul edx, 0x418
        mov eax, dword ptr ds : [edx+ecx+0x348]
        test eax, eax
        je public_6d17885
        call public_6d15650
        test eax, eax
        je public_6d1787f
        mov eax, dword ptr ss : [esp+0x28]
        push 0
        push eax
        push ebp
        call public_6d15650
        mov ecx, eax
        call public_6d146e0
        public_6d1787f : nop
        mov ecx, dword ptr ds : [public_6d90260]
        public_6d17885 : nop
        cmp ebx, dword ptr ds : [public_6d90264]
        mov edx, dword ptr ds : [esi+0x3F8]
        mov dword ptr ss : [esp+0x28], edx
        jae public_6d17908
        imul ebx, 0x418
        mov eax, dword ptr ds : [ebx+ecx+0x348]
        test eax, eax
        je public_6d17908
        mov eax, dword ptr ds : [edi+ecx-0x2C]
        test eax, 0x3FFFFFFF
        lea ecx, ds:[edi+ecx-0x418]
        je public_6d17903
        mov eax, dword ptr ds : [ecx+0x3F8]
        test eax, 0x3FFFFFFF
        je public_6d17903
        cmp eax, edx
        jne public_6d17903
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0x2A
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6d43650
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 8
        push edx
        push ebp
        call public_6d15650
        mov ecx, eax
        call public_6d143e0
        mov eax, dword ptr ds : [public_6d90260]
        mov dword ptr ds : [edi+eax-0x20], 0
        jmp public_6d17908
        public_6d17903 : nop
        call public_6d48d20
        public_6d17908 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0x18]
        push edx
        push 2
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], ebp
        call public_6d43650
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        push eax
        push ebp
        call public_6d15650
        mov ecx, eax
        call public_6d142c0
        mov ecx, esi
        call public_6d4c430
        mov ecx, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [edi+ecx-0x2C]
        xor eax, eax
        mov dword ptr ds : [esi+0x410], edx
        mov dword ptr ds : [esi+0x3EC], eax
        mov dword ptr ds : [esi+0x3F4], eax
        public_6d1795a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d177b0)
    }
}

#undef public_6d1781b
#undef public_6d17832
#undef public_6d1787f
#undef public_6d17885
#undef public_6d17903
#undef public_6d17908
#undef public_6d1795a
