#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd7098 _public_6bd7098

PROC_DECLARE(0x6bd7070, internal_6bd7070, public_6bd7070);
extern "C" NAKED register_t __cdecl internal_6bd7070()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 5
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd7098
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd7098 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bd7070)
    }
}

#undef public_6bd7098
