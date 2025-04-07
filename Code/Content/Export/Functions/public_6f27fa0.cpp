#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f27fd3 _public_6f27fd3
#define public_6f28005 _public_6f28005
#define public_6f28013 _public_6f28013
#define public_6f2802a _public_6f2802a
#define public_6f28057 _public_6f28057
#define public_6f28080 _public_6f28080
#define public_6f2808a _public_6f2808a

PROC_DECLARE(0x6f27fa0, internal_6f27fa0, public_6f27fa0);
extern "C" NAKED register_t __cdecl internal_6f27fa0()
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
        je public_6f27fd3
        cmp eax, 1
        jne public_6f27fd3
        lea eax, ds:[edi+0x130]
        push eax
        lea ecx, ds:[edi+0x13C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6eeaee0
        add esp, 0xC
        public_6f27fd3 : nop
        mov eax, dword ptr ds : [edi+0x14C]
        test eax, eax
        mov esi, dword ptr ss : [esp+0x20]
        lea ebp, ds:[edi+0x14C]
        je public_6f28013
        mov ecx, esi
        xor ebx, ebx
        call public_6eea860
        test eax, eax
        je public_6f28005
        mov ecx, dword ptr ds : [esi+0x170]
        push ecx
        push ebp
        mov ecx, eax
        call public_6f73ac0
        mov ebx, eax
        public_6f28005 : nop
        test ebx, 0x3FFFFFFF
        mov dword ptr ds : [edi+0x12C], ebx
        je public_6f2808a
        public_6f28013 : nop
        mov eax, dword ptr ds : [edi+0x114]
        test eax, eax
        jne public_6f2802a
        mov ecx, esi
        call public_6f57c80
        mov dword ptr ds : [edi+0x114], eax
        public_6f2802a : nop
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
        je public_6f2808a
        mov eax, dword ptr ds : [ebx+0xE0]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f2808a
        public_6f28057 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [esi+4], ecx
        je public_6f28080
        mov edx, dword ptr ds : [esi+0x154]
        cmp edx, 0xFFFFFFFF
        je public_6f28080
        cmp dword ptr ds : [eax+0x154], edx
        jne public_6f28080
        push ebp
        push ecx
        call dword ptr ds : [public_6fb363c]
        add esp, 8
        public_6f28080 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0xE0]
        jne public_6f28057
        public_6f2808a : nop
        mov ecx, esi
        call public_6f57b00
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f27fa0)
    }
}

#undef public_6f27fd3
#undef public_6f28005
#undef public_6f28013
#undef public_6f2802a
#undef public_6f28057
#undef public_6f28080
#undef public_6f2808a
