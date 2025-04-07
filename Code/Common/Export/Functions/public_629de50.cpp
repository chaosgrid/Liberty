#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629de50);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_629de6a _public_629de6a

PROC_DECLARE(0x629de50, internal_629de50, public_629de50);
extern "C" NAKED register_t __cdecl internal_629de50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc22c]
        sub esp, 0x30
        test eax, eax
        push esi
        push edi
        mov esi, ecx
        jne public_629de6a
        call public_6391cf0
        mov dword ptr ds : [public_63fc22c], eax
        public_629de6a : nop
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, 0xC
        lea esi, ss:[esp+8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x629de50)
    }
}

#undef public_629de6a
