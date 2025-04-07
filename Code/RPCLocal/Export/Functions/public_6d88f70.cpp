#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d88fb1 _public_6d88fb1

PROC_DECLARE(0x6d88f70, internal_6d88f70, public_6d88f70);
extern "C" NAKED register_t __cdecl internal_6d88f70()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x2A
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d88fb1
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        fld dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d88fb1 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d88f70)
    }
}

#undef public_6d88fb1
