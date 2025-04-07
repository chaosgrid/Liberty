#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6120);
CLANG_FORWARD_PROC_SYMBOL(public_6ec75d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec7620);
CLANG_FORWARD_PROC_SYMBOL(public_6ec7d70);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec70e8 _public_6ec70e8
#define public_6ec7120 _public_6ec7120
#define public_6ec712f _public_6ec712f
#define public_6ec714b _public_6ec714b
#define public_6ec7154 _public_6ec7154
#define public_6ec7169 _public_6ec7169
#define public_6ec7185 _public_6ec7185

PROC_DECLARE(0x6ec70c0, internal_6ec70c0, public_6ec70c0);
extern "C" NAKED register_t __cdecl internal_6ec70c0()
{
    __asm
    {
        sub esp, 0xC
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        je public_6ec7185
        cmp edi, 0xFFFFFFFF
        je public_6ec7185
        mov eax, dword ptr ds : [edi+4]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ec714b
        push ebp
        lea ebp, ds:[ecx+8]
        public_6ec70e8 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x10]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebp
        call public_6ec7d70
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        mov ebx, eax
        call public_6ec6120
        mov edi, eax
        cmp edi, ebx
        mov dword ptr ss : [esp+0x14], edi
        je public_6ec712f
        lea esp, ss:[esp]
        public_6ec7120 : nop
        lea ecx, ss:[esp+0x14]
        call public_6ec5e20
        cmp dword ptr ss : [esp+0x14], ebx
        jne public_6ec7120
        public_6ec712f : nop
        push ebx
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        call public_6ec7620
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [eax+4]
        jne public_6ec70e8
        mov edi, eax
        pop ebp
        public_6ec714b : nop
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6ec7169
        public_6ec7154 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_6ec75d0
        cmp esi, ebx
        jne public_6ec7154
        public_6ec7169 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6ed0c50
        xor eax, eax
        push edi
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        call public_6ed0c50
        add esp, 8
        pop esi
        pop ebx
        public_6ec7185 : nop
        pop edi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6ec70c0)
    }
}

#undef public_6ec70e8
#undef public_6ec7120
#undef public_6ec712f
#undef public_6ec714b
#undef public_6ec7154
#undef public_6ec7169
#undef public_6ec7185
