#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f44ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f44cfa _public_6f44cfa

PROC_DECLARE(0x6f44ce0, internal_6f44ce0, public_6f44ce0);
extern "C" NAKED register_t __cdecl internal_6f44ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e20]
        sub esp, 0x30
        test eax, eax
        push esi
        push edi
        mov esi, ecx
        jne public_6f44cfa
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f44cfa : nop
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
        UNREACHABLE_TRAP(0x6f44ce0)
    }
}

#undef public_6f44cfa
