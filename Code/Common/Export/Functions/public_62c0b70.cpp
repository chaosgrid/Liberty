#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);

#define public_62c0bc0 _public_62c0bc0
#define public_62c0bf1 _public_62c0bf1
#define public_62c0bf4 _public_62c0bf4

PROC_DECLARE(0x62c0b70, internal_62c0b70, public_62c0b70);
extern "C" NAKED register_t __cdecl internal_62c0b70()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        test esi, esi
        mov eax, 0xFFFFFFFD
        je public_62c0bf4
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62c0bf4
        push edi
        push 0x10000
        lea ecx, ss:[esp+0xC]
        call public_629b990
        lea edx, ss:[esp+8]
        lea edi, ds:[esi+0xE4]
        push edx
        mov ecx, edi
        call public_629b430
        test eax, eax
        je public_62c0bf1
        mov esi, dword ptr ss : [esp+0x1C]
        lea ebx, ds:[ebx]
        public_62c0bc0 : nop
        mov edx, dword ptr ds : [esi]
        xor ecx, ecx
        mov cx, word ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [eax+0x28]
        mov eax, dword ptr ds : [eax+0xC]
        push ecx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx]
        test al, al
        je public_62c0bf1
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, edi
        call public_629b430
        test eax, eax
        jne public_62c0bc0
        public_62c0bf1 : nop
        xor eax, eax
        pop edi
        public_62c0bf4 : nop
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62c0b70)
    }
}

#undef public_62c0bc0
#undef public_62c0bf1
#undef public_62c0bf4
