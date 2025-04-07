#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bac10);
CLANG_FORWARD_PROC_SYMBOL(public_62bb4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6301980);
CLANG_FORWARD_PROC_SYMBOL(public_6302200);
CLANG_FORWARD_PROC_SYMBOL(public_6302510);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_63019a0 _public_63019a0
#define public_63019b3 _public_63019b3
#define public_63019b6 _public_63019b6
#define public_63019ba _public_63019ba
#define public_6301a19 _public_6301a19
#define public_6301a31 _public_6301a31
#define public_6301a3b _public_6301a3b
#define public_6301a3f _public_6301a3f
#define public_6301a50 _public_6301a50
#define public_6301a8b _public_6301a8b
#define public_6301a9a _public_6301a9a
#define public_6301abb _public_6301abb
#define public_6301adc _public_6301adc
#define public_6301aea _public_6301aea
#define public_6301b09 _public_6301b09
#define public_6301b15 _public_6301b15
#define public_6301b31 _public_6301b31
#define public_6301b4c _public_6301b4c
#define public_6301b53 _public_6301b53
#define public_6301b76 _public_6301b76

PROC_DECLARE(0x6301980, internal_6301980, public_6301980);
extern "C" NAKED register_t __cdecl internal_6301980()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_63019ba
        lea esp, ss:[esp]
        public_63019a0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_63019b3
        mov ebp, dword ptr ss : [ebp]
        jmp public_63019b6
        public_63019b3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_63019b6 : nop
        cmp ebp, edx
        jne public_63019a0
        public_63019ba : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6301b31
        push 0
        push esi
        mov ecx, edi
        call public_62bac10
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_62bb4b0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6301a19
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6301a19
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6301a19
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6301a3f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6301a3f
        public_6301a19 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6301a31
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6301a3b
        public_6301a31 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6301a3b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6301a3b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6301a3f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6301b15
        lea ecx, ds:[ecx]
        public_6301a50 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x4C]
        test cl, cl
        jne public_6301b15
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6301abb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x4C]
        test dl, dl
        jne public_6301a8b
        mov byte ptr ds : [eax+0x4C], 1
        mov byte ptr ds : [ecx+0x4C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6301b09
        public_6301a8b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6301a9a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_6301a9a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x4C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x4C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_6301b09
        public_6301abb : nop
        mov dl, byte ptr ds : [ecx+0x4C]
        test dl, dl
        jne public_6301adc
        mov byte ptr ds : [eax+0x4C], 1
        mov byte ptr ds : [ecx+0x4C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x4C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6301b09
        public_6301adc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6301aea
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_6301aea : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x4C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_6301b09 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6301a50
        public_6301b15 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x4C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6301b31 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6301b4c
        cmp esi, dword ptr ds : [ecx]
        je public_6301b53
        lea ecx, ss:[esp+0x10]
        call public_6302510
        mov edx, dword ptr ss : [esp+0x10]
        public_6301b4c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6301b76
        public_6301b53 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6302200
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6301b76 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6301980)
    }
}

#undef public_63019a0
#undef public_63019b3
#undef public_63019b6
#undef public_63019ba
#undef public_6301a19
#undef public_6301a31
#undef public_6301a3b
#undef public_6301a3f
#undef public_6301a50
#undef public_6301a8b
#undef public_6301a9a
#undef public_6301abb
#undef public_6301adc
#undef public_6301aea
#undef public_6301b09
#undef public_6301b15
#undef public_6301b31
#undef public_6301b4c
#undef public_6301b53
#undef public_6301b76
