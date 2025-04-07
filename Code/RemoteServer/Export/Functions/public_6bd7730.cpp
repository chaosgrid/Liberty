#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd7763 _public_6bd7763

PROC_DECLARE(0x6bd7730, internal_6bd7730, public_6bd7730);
extern "C" NAKED register_t __cdecl internal_6bd7730()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x1C
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd7763
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x20], edx
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x170]
        public_6bd7763 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bd7730)
    }
}

#undef public_6bd7763
