#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620c3d0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620c3e9 _public_620c3e9
#define public_620c405 _public_620c405
#define public_620c40e _public_620c40e

PROC_DECLARE(0x620c3d0, internal_620c3d0, public_620c3d0);
extern "C" NAKED register_t __cdecl internal_620c3d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        shl eax, 3
        xor ebx, ebx
        test eax, eax
        je public_620c3e9
        push eax
        call public_624612c
        add esp, 4
        mov ebx, eax
        public_620c3e9 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_620c40e
        test ebx, ebx
        je public_620c405
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        add ecx, ecx
        mov esi, eax
        mov edi, ebx
        rep movsd
        pop edi
        pop esi
        public_620c405 : nop
        push eax
        call public_62460e0
        add esp, 4
        public_620c40e : nop
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x620c3d0)
    }
}

#undef public_620c3e9
#undef public_620c405
#undef public_620c40e
