#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_462e30);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a13c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_462c5e _public_462c5e
#define public_462cb4 _public_462cb4
#define public_462cb6 _public_462cb6
#define public_462cdb _public_462cdb
#define public_462d0a _public_462d0a
#define public_462d15 _public_462d15
#define public_462d53 _public_462d53
#define public_462da7 _public_462da7
#define public_462df4 _public_462df4
#define public_462dff _public_462dff
#define public_462e05 _public_462e05
#define public_462e0c _public_462e0c

PROC_DECLARE(0x462bd0, internal_462bd0, public_462bd0);
extern "C" NAKED register_t __cdecl internal_462bd0()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, 0x26
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, ecx
        jne public_462e0c
        cmp edi, dword ptr ds : [esi+0x494]
        jne public_462d15
        mov eax, dword ptr ds : [esi+0x334]
        cmp eax, dword ptr ds : [public_66da48]
        je public_462d0a
        mov ecx, dword ptr ds : [esi+0x338]
        test ecx, ecx
        jne public_462c5e
        mov ecx, dword ptr ds : [public_67ecd4]
        test ecx, ecx
        je public_462cdb
        mov dx, word ptr ds : [public_673344]
        movzx eax, ax
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_66da34]
        push 0xFFFFFFFF
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov word ptr ss : [esp+0x24], dx
        mov byte ptr ss : [esp+0x26], 0
        mov byte ptr ss : [esp+0x27], 0
        mov eax, dword ptr ss : [esp+0x24]
        push 8
        mov dword ptr ss : [esp+0x1C], 2
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        jmp public_462cdb
        public_462c5e : nop
        mov ecx, dword ptr ds : [public_673378]
        push 1
        push ecx
        call public_5416c0
        mov edx, dword ptr ds : [esi+0x338]
        push 1
        push edx
        mov edi, eax
        call public_5416c0
        add esp, 0x10
        test edi, edi
        mov ebp, eax
        je public_462cdb
        test ebp, ebp
        je public_462cdb
        mov edx, dword ptr ds : [edi+0x1C]
        xor ecx, ecx
        cmp edx, 1
        setne cl
        dec ecx
        and ecx, edi
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_462cb4
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_462cb6
        public_462cb4 : nop
        xor eax, eax
        public_462cb6 : nop
        push ebp
        mov ecx, eax
        call dword ptr ds : [public_5c62d0]
        movzx eax, word ptr ds : [esi+0x334]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [public_673344]
        push eax
        call dword ptr ds : [edx+0x154]
        public_462cdb : nop
        mov edx, dword ptr ds : [esi+0x358]
        mov eax, dword ptr ds : [edx]
        lea ecx, ds:[esi+0x354]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call public_516f70
        mov ecx, esi
        call public_462e30
        mov eax, dword ptr ds : [esi+0x35C]
        test eax, eax
        jne public_462d0a
        call public_45a460
        public_462d0a : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 8
        ret 0xC
        public_462d15 : nop
        cmp edi, dword ptr ds : [esi+0x498]
        jne public_462da7
        mov ecx, dword ptr ds : [esi+0x334]
        cmp ecx, dword ptr ds : [public_66da48]
        je public_462e0c
        mov eax, dword ptr ds : [esi+0x338]
        test eax, eax
        je public_462d53
        movzx eax, word ptr ds : [esi+0x334]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x158]
        public_462d53 : nop
        mov ecx, dword ptr ds : [esi+0x358]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], edx
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+0x35C]
        add esp, 4
        dec ecx
        mov dword ptr ds : [esi+0x35C], ecx
        mov ecx, esi
        call public_462e30
        mov eax, dword ptr ds : [esi+0x35C]
        test eax, eax
        jmp public_462e05
        public_462da7 : nop
        cmp edi, dword ptr ds : [esi+0x490]
        jne public_462dff
        mov ecx, dword ptr ds : [public_67ecd4]
        test ecx, ecx
        mov eax, dword ptr ds : [public_673344]
        je public_462df4
        mov word ptr ss : [esp+0x18], ax
        movzx eax, ax
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_66da34]
        push 0xFFFFFFFF
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov byte ptr ss : [esp+0x26], 0
        mov byte ptr ss : [esp+0x27], 0
        mov eax, dword ptr ss : [esp+0x24]
        push 8
        mov dword ptr ss : [esp+0x1C], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        public_462df4 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 8
        ret 0xC
        public_462dff : nop
        cmp edi, dword ptr ds : [esi+0x48C]
        public_462e05 : nop
        jne public_462e0c
        call public_45a460
        public_462e0c : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push edi
        push ebp
        mov ecx, esi
        call public_5a13c0
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x462bd0)
    }
}

#undef public_462c5e
#undef public_462cb4
#undef public_462cb6
#undef public_462cdb
#undef public_462d0a
#undef public_462d15
#undef public_462d53
#undef public_462da7
#undef public_462df4
#undef public_462dff
#undef public_462e05
#undef public_462e0c
