#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288860);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_628887b _public_628887b

PROC_DECLARE(0x6288860, internal_6288860, public_6288860);
extern "C" NAKED register_t __cdecl internal_6288860()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc0b8]
        sub esp, 0x24
        test eax, eax
        push ebx
        push esi
        push edi
        mov ebx, ecx
        jne public_628887b
        call public_6391cf0
        mov dword ptr ds : [public_63fc0b8], eax
        public_628887b : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push edx
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edi, ebx
        mov ecx, 9
        lea esi, ss:[esp+0xC]
        rep movsd
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6288860)
    }
}

#undef public_628887b
