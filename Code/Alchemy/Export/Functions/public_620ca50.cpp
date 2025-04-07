#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ca50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620ca69 _public_620ca69
#define public_620ca85 _public_620ca85
#define public_620ca8e _public_620ca8e

PROC_DECLARE(0x620ca50, internal_620ca50, public_620ca50);
extern "C" NAKED register_t __cdecl internal_620ca50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        shl eax, 3
        xor ebx, ebx
        test eax, eax
        je public_620ca69
        push eax
        call public_624612c
        add esp, 4
        mov ebx, eax
        public_620ca69 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_620ca8e
        test ebx, ebx
        je public_620ca85
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        add ecx, ecx
        mov esi, eax
        mov edi, ebx
        rep movsd
        pop edi
        pop esi
        public_620ca85 : nop
        push eax
        call public_62460e0
        add esp, 4
        public_620ca8e : nop
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x620ca50)
    }
}

#undef public_620ca69
#undef public_620ca85
#undef public_620ca8e
