#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f27ce3 _public_6f27ce3
#define public_6f27d15 _public_6f27d15
#define public_6f27d23 _public_6f27d23
#define public_6f27d3a _public_6f27d3a
#define public_6f27d67 _public_6f27d67
#define public_6f27d90 _public_6f27d90
#define public_6f27d9a _public_6f27d9a

PROC_DECLARE(0x6f27cb0, internal_6f27cb0, public_6f27cb0);
extern "C" NAKED register_t __cdecl internal_6f27cb0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x118]
        test eax, eax
        je public_6f27ce3
        cmp eax, 1
        jne public_6f27ce3
        lea eax, ds:[edi+0x130]
        push eax
        lea ecx, ds:[edi+0x13C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6eeaee0
        add esp, 0xC
        public_6f27ce3 : nop
        mov eax, dword ptr ds : [edi+0x14C]
        test eax, eax
        mov esi, dword ptr ss : [esp+0x20]
        lea ebp, ds:[edi+0x14C]
        je public_6f27d23
        mov ecx, esi
        xor ebx, ebx
        call public_6eea860
        test eax, eax
        je public_6f27d15
        mov ecx, dword ptr ds : [esi+0x170]
        push ecx
        push ebp
        mov ecx, eax
        call public_6f73ac0
        mov ebx, eax
        public_6f27d15 : nop
        test ebx, 0x3FFFFFFF
        mov dword ptr ds : [edi+0x12C], ebx
        je public_6f27d9a
        public_6f27d23 : nop
        mov eax, dword ptr ds : [edi+0x114]
        test eax, eax
        jne public_6f27d3a
        mov ecx, esi
        call public_6f57c80
        mov dword ptr ds : [edi+0x114], eax
        public_6f27d3a : nop
        mov eax, dword ptr ds : [esi+4]
        lea ebp, ds:[edi+0x10C]
        push ebp
        push eax
        call dword ptr ds : [public_6fb363c]
        add esp, 8
        mov ecx, esi
        call public_6eea860
        mov ebx, eax
        test ebx, ebx
        je public_6f27d9a
        mov eax, dword ptr ds : [ebx+0xE0]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f27d9a
        public_6f27d67 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [esi+4]
        je public_6f27d90
        mov edx, dword ptr ds : [esi+0x154]
        cmp edx, 0xFFFFFFFF
        je public_6f27d90
        cmp dword ptr ds : [eax+0x154], edx
        jne public_6f27d90
        push ebp
        push ecx
        call dword ptr ds : [public_6fb363c]
        add esp, 8
        public_6f27d90 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0xE0]
        jne public_6f27d67
        public_6f27d9a : nop
        mov ecx, esi
        call public_6f57b00
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f27cb0)
    }
}

#undef public_6f27ce3
#undef public_6f27d15
#undef public_6f27d23
#undef public_6f27d3a
#undef public_6f27d67
#undef public_6f27d90
#undef public_6f27d9a
