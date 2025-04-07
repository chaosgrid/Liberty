#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f9500);
CLANG_FORWARD_PROC_SYMBOL(public_67006d0);

#define public_66f951a _public_66f951a

PROC_DECLARE(0x66f9500, internal_66f9500, public_66f9500);
extern "C" NAKED register_t __cdecl internal_66f9500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67045a0]
        sub esp, 0x30
        test eax, eax
        push esi
        push edi
        mov esi, ecx
        jne public_66f951a
        call public_67006d0
        mov dword ptr ds : [public_67045a0], eax
        public_66f951a : nop
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
        UNREACHABLE_TRAP(0x66f9500)
    }
}

#undef public_66f951a
