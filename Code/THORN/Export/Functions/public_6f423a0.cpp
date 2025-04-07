#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f423a0);

#define public_6f423cc _public_6f423cc

PROC_DECLARE(0x6f423a0, internal_6f423a0, public_6f423a0);
extern "C" NAKED register_t __cdecl internal_6f423a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, ecx
        push edi
        lea edx, ds:[eax+0xF0]
        mov eax, dword ptr ds : [eax+0xE8]
        test eax, eax
        mov ecx, 8
        mov edi, edx
        rep movsd
        pop edi
        pop esi
        je public_6f423cc
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        public_6f423cc : nop
        ret 4
        UNREACHABLE_TRAP(0x6f423a0)
    }
}

#undef public_6f423cc
