#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd72b3 _public_6bd72b3

PROC_DECLARE(0x6bd7280, internal_6bd7280, public_6bd7280);
extern "C" NAKED register_t __cdecl internal_6bd7280()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x3B
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd72b3
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd72b3 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bd7280)
    }
}

#undef public_6bd72b3
