#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_629f630);
CLANG_FORWARD_PROC_SYMBOL(public_629f6d0);

#define public_62c040a _public_62c040a
#define public_62c040c _public_62c040c
#define public_62c0431 _public_62c0431
#define public_62c044a _public_62c044a

PROC_DECLARE(0x62c03e0, internal_62c03e0, public_62c03e0);
extern "C" NAKED register_t __cdecl internal_62c03e0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], 0
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        mov ebx, 0xFFFFFFFE
        je public_62c040a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_62c040c
        public_62c040a : nop
        xor eax, eax
        public_62c040c : nop
        push 0x80000
        lea ecx, ds:[eax+0xE4]
        call public_629b720
        mov esi, eax
        test esi, esi
        je public_62c044a
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        jne public_62c0431
        mov ecx, esi
        call public_629f6d0
        public_62c0431 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov ecx, esi
        call public_629f630
        add esi, 0x24
        mov dword ptr ds : [edi], esi
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        public_62c044a : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62c03e0)
    }
}

#undef public_62c040a
#undef public_62c040c
#undef public_62c0431
#undef public_62c044a
