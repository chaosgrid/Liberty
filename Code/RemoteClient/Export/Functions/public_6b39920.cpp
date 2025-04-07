#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b3995f _public_6b3995f

PROC_DECLARE(0x6b39920, internal_6b39920, public_6b39920);
extern "C" NAKED register_t __cdecl internal_6b39920()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+0x210]
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+8]
        push eax
        push 1
        inc edx
        push 2
        mov dword ptr ds : [esi+0x210], edx
        call public_6b3b480
        test eax, eax
        mov edi, dword ptr ss : [esp+0x10]
        jne public_6b3995f
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x20], edi
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        push eax
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b3995f : nop
        mov ecx, dword ptr ds : [public_6b73d48]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x44]
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b39920)
    }
}

#undef public_6b3995f
