#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a8d0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620a8e9 _public_620a8e9
#define public_620a905 _public_620a905
#define public_620a90e _public_620a90e

PROC_DECLARE(0x620a8d0, internal_620a8d0, public_620a8d0);
extern "C" NAKED register_t __cdecl internal_620a8d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        shl eax, 3
        xor ebx, ebx
        test eax, eax
        je public_620a8e9
        push eax
        call public_624612c
        add esp, 4
        mov ebx, eax
        public_620a8e9 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_620a90e
        test ebx, ebx
        je public_620a905
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        add ecx, ecx
        mov esi, eax
        mov edi, ebx
        rep movsd
        pop edi
        pop esi
        public_620a905 : nop
        push eax
        call public_62460e0
        add esp, 4
        public_620a90e : nop
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x620a8d0)
    }
}

#undef public_620a8e9
#undef public_620a905
#undef public_620a90e
