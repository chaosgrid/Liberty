#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c190);

#define public_626c1a3 _public_626c1a3
#define public_626c1ba _public_626c1ba

PROC_DECLARE(0x626c190, internal_626c190, public_626c190);
extern "C" NAKED register_t __cdecl internal_626c190()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_626c1ba
        push esi
        push edi
        public_626c1a3 : nop
        mov esi, edx
        mov edi, eax
        add edx, 0x20
        mov ecx, 8
        add eax, 0x20
        cmp edx, ebx
        rep movsd
        jne public_626c1a3
        pop edi
        pop esi
        public_626c1ba : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x626c190)
    }
}

#undef public_626c1a3
#undef public_626c1ba
