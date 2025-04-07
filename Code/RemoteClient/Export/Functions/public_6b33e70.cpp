#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b33ea5 _public_6b33ea5

PROC_DECLARE(0x6b33e70, internal_6b33e70, public_6b33e70);
extern "C" NAKED register_t __cdecl internal_6b33e70()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x49
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b33ea5
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b33ea5 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b33e70)
    }
}

#undef public_6b33ea5
