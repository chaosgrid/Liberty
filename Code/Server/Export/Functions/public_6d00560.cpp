#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00560);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d0059c _public_6d0059c
#define public_6d005b8 _public_6d005b8

PROC_DECLARE(0x6d00560, internal_6d00560, public_6d00560);
extern "C" NAKED register_t __cdecl internal_6d00560()
{
    __asm
    {
        sub esp, 0x38
        mov eax, dword ptr ss : [esp+0x3C]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        push edi
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [public_6d8d8d8]
        mov ecx, 0xD
        lea edi, ss:[esp+0xC]
        rep movsd
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0x40
        mov ebx, eax
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_6d0059c
        mov edi, eax
        public_6d0059c : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6d005b8
        mov ecx, 0xE
        lea esi, ss:[esp+0xC]
        rep movsd
        public_6d005b8 : nop
        mov eax, dword ptr ds : [public_6d8d8dc]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_6d8d8dc], eax
        pop ebx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x6d00560)
    }
}

#undef public_6d0059c
#undef public_6d005b8
