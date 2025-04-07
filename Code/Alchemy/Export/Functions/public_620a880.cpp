#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a880);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620a899 _public_620a899
#define public_620a8b5 _public_620a8b5
#define public_620a8be _public_620a8be

PROC_DECLARE(0x620a880, internal_620a880, public_620a880);
extern "C" NAKED register_t __cdecl internal_620a880()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        shl eax, 3
        xor ebx, ebx
        test eax, eax
        je public_620a899
        push eax
        call public_624612c
        add esp, 4
        mov ebx, eax
        public_620a899 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_620a8be
        test ebx, ebx
        je public_620a8b5
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        add ecx, ecx
        mov esi, eax
        mov edi, ebx
        rep movsd
        pop edi
        pop esi
        public_620a8b5 : nop
        push eax
        call public_62460e0
        add esp, 4
        public_620a8be : nop
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x620a880)
    }
}

#undef public_620a899
#undef public_620a8b5
#undef public_620a8be
