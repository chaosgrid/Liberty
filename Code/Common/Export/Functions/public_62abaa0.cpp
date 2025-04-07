#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293780);
CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b6d0);
CLANG_FORWARD_PROC_SYMBOL(public_629b970);
CLANG_FORWARD_PROC_SYMBOL(public_62abaa0);
CLANG_FORWARD_PROC_SYMBOL(public_63344f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334510);

#define public_62abac0 _public_62abac0
#define public_62abb20 _public_62abb20
#define public_62abb22 _public_62abb22
#define public_62abb28 _public_62abb28
#define public_62abb5a _public_62abb5a
#define public_62abb63 _public_62abb63
#define public_62abb6c _public_62abb6c
#define public_62abba0 _public_62abba0
#define public_62abbbe _public_62abbbe
#define public_62abbc9 _public_62abbc9

PROC_DECLARE(0x62abaa0, internal_62abaa0, public_62abaa0);
extern "C" NAKED register_t __cdecl internal_62abaa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ds : [eax+4]
        push ebp
        push esi
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov ebp, ecx
        je public_62abbc9
        push edi
        lea ebx, ds:[ebx]
        public_62abac0 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_62abbbe
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        push ecx
        call public_6334510
        add esp, 4
        test al, al
        je public_62abb6c
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        lea ecx, ss:[ebp+0xE4]
        push edx
        call public_629b6d0
        mov edi, eax
        test edi, edi
        je public_62abbbe
        mov eax, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [eax+0x10], 0x14
        jne public_62abb28
        mov eax, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ss : [ebp]
        cmp eax, 0x10000
        movzx eax, word ptr ds : [esi+8]
        mov ecx, ebp
        push eax
        jne public_62abb20
        push 4
        jmp public_62abb22
        public_62abb20 : nop
        push 3
        public_62abb22 : nop
        call dword ptr ds : [edx+0xC8]
        public_62abb28 : nop
        push edi
        call public_6293780
        mov ecx, eax
        add esp, 4
        test ecx, ecx
        je public_62abb63
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, 2
        jne public_62abb5a
        mov dl, byte ptr ss : [esp+0x28]
        test dl, dl
        jne public_62abb5a
        mov edx, dword ptr ds : [ecx]
        push 3
        call dword ptr ds : [edx+0x88]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x34]
        jmp public_62abbbe
        public_62abb5a : nop
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x88]
        public_62abb63 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x34]
        jmp public_62abbbe
        public_62abb6c : nop
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        push ecx
        call public_63344f0
        add esp, 4
        test al, al
        je public_62abbbe
        lea ecx, ss:[esp+0x10]
        call public_629b970
        lea edx, ss:[esp+0x10]
        lea edi, ss:[ebp+0xE4]
        push edx
        mov ecx, edi
        call public_629b440
        test eax, eax
        je public_62abbbe
        mov edi, edi
        public_62abba0 : nop
        mov edx, dword ptr ds : [eax]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x1C]
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        call public_629b440
        test eax, eax
        jne public_62abba0
        public_62abbbe : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_62abac0
        pop edi
        public_62abbc9 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x62abaa0)
    }
}

#undef public_62abac0
#undef public_62abb20
#undef public_62abb22
#undef public_62abb28
#undef public_62abb5a
#undef public_62abb63
#undef public_62abb6c
#undef public_62abba0
#undef public_62abbbe
#undef public_62abbc9
