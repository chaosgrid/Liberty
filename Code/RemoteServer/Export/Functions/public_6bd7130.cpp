#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd7158 _public_6bd7158

PROC_DECLARE(0x6bd7130, internal_6bd7130, public_6bd7130);
extern "C" NAKED register_t __cdecl internal_6bd7130()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x38
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd7158
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd7158 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6bd7130)
    }
}

#undef public_6bd7158
