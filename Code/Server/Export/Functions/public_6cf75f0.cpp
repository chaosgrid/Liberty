#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce42f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5700);
CLANG_FORWARD_PROC_SYMBOL(public_6cf75f0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf79c0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf7616 _public_6cf7616
#define public_6cf7620 _public_6cf7620
#define public_6cf7624 _public_6cf7624
#define public_6cf7628 _public_6cf7628
#define public_6cf7634 _public_6cf7634
#define public_6cf764a _public_6cf764a
#define public_6cf7652 _public_6cf7652
#define public_6cf765c _public_6cf765c
#define public_6cf7663 _public_6cf7663
#define public_6cf766b _public_6cf766b
#define public_6cf7690 _public_6cf7690
#define public_6cf76af _public_6cf76af
#define public_6cf76d8 _public_6cf76d8
#define public_6cf76e0 _public_6cf76e0
#define public_6cf770e _public_6cf770e

PROC_DECLARE(0x6cf75f0, internal_6cf75f0, public_6cf75f0);
extern "C" NAKED register_t __cdecl internal_6cf75f0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        mov esi, ecx
        call public_6cf7a40
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, eax
        mov eax, dword ptr ds : [ecx+4]
        mov ebx, ecx
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6cf7628
        mov edi, dword ptr ds : [edi]
        public_6cf7616 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_6cf7620
        mov eax, dword ptr ds : [eax+8]
        jmp public_6cf7624
        public_6cf7620 : nop
        mov ebx, eax
        mov eax, dword ptr ds : [eax]
        public_6cf7624 : nop
        cmp eax, ecx
        jne public_6cf7616
        public_6cf7628 : nop
        xor edi, edi
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x1C], edi
        mov eax, ebx
        je public_6cf766b
        public_6cf7634 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        inc edi
        test dl, dl
        jne public_6cf764a
        push ecx
        call public_6cf79c0
        add esp, 4
        jmp public_6cf7663
        public_6cf764a : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6cf765c
        public_6cf7652 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6cf7652
        public_6cf765c : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6cf7663
        mov eax, ecx
        public_6cf7663 : nop
        cmp eax, ebp
        jne public_6cf7634
        mov dword ptr ss : [esp+0x1C], edi
        public_6cf766b : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6cf76d8
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx]
        jne public_6cf76d8
        cmp ebp, ecx
        jne public_6cf76d8
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6cf76af
        lea ecx, ds:[ecx]
        public_6cf7690 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ce42f0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6cf7690
        public_6cf76af : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6cf76d8 : nop
        cmp ebx, ebp
        je public_6cf770e
        lea esp, ss:[esp]
        public_6cf76e0 : nop
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call public_6ce5700
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6ce3ea0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        jne public_6cf76e0
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6cf770e : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6cf75f0)
    }
}

#undef public_6cf7616
#undef public_6cf7620
#undef public_6cf7624
#undef public_6cf7628
#undef public_6cf7634
#undef public_6cf764a
#undef public_6cf7652
#undef public_6cf765c
#undef public_6cf7663
#undef public_6cf766b
#undef public_6cf7690
#undef public_6cf76af
#undef public_6cf76d8
#undef public_6cf76e0
#undef public_6cf770e
