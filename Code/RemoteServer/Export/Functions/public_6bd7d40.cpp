#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd7d68 _public_6bd7d68

PROC_DECLARE(0x6bd7d40, internal_6bd7d40, public_6bd7d40);
extern "C" NAKED register_t __cdecl internal_6bd7d40()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x10
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd7d68
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd7d68 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6bd7d40)
    }
}

#undef public_6bd7d68
