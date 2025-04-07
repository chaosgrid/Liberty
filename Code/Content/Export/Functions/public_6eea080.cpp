#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea080);
CLANG_FORWARD_PROC_SYMBOL(public_6eecae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6eea0c3 _public_6eea0c3
#define public_6eea0f4 _public_6eea0f4
#define public_6eea104 _public_6eea104
#define public_6eea110 _public_6eea110
#define public_6eea133 _public_6eea133
#define public_6eea14b _public_6eea14b

PROC_DECLARE(0x6eea080, internal_6eea080, public_6eea080);
extern "C" NAKED register_t __cdecl internal_6eea080()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [eax], 0
        push esi
        push edi
        mov dword ptr ss : [esp+0xC], ebx
        je public_6eea0f4
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ds:[ebx+4]
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [ebx+8]
        je public_6eea14b
        mov eax, dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eea14b
        mov edi, dword ptr ds : [public_6fb3464]
        public_6eea0c3 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        call edi
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[eax+0x10]
        call public_6f20e00
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, dword ptr ds : [ecx+0x14]
        jne public_6eea0c3
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_6eea0f4 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6eea14b
        push ebp
        mov ebp, dword ptr ds : [public_6fb3464]
        public_6eea104 : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eea133
        lea ebx, ds:[edi+0x10]
        public_6eea110 : nop
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        call ebp
        add esp, 4
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        call public_6f20e00
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, dword ptr ds : [edi+0x14]
        jne public_6eea110
        mov ebx, dword ptr ss : [esp+0x10]
        public_6eea133 : nop
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[ebx+4]
        call public_6eecae0
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, dword ptr ds : [ebx+8]
        jne public_6eea104
        pop ebp
        public_6eea14b : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6eea080)
    }
}

#undef public_6eea0c3
#undef public_6eea0f4
#undef public_6eea104
#undef public_6eea110
#undef public_6eea133
#undef public_6eea14b
