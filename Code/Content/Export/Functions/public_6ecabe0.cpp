#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ecac5f _public_6ecac5f

PROC_DECLARE(0x6ecabe0, internal_6ecabe0, public_6ecabe0);
extern "C" NAKED register_t __cdecl internal_6ecabe0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6ecac5f
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ecac5f
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ecac5f
        or eax, 0xFFFFFFFF
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [esi+0xC]
        push edx
        push eax
        call dword ptr ds : [public_6fb33f0]
        add esp, 8
        test eax, eax
        jne public_6ecac5f
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+4]
        push ecx
        add edx, 0xC
        push edx
        call dword ptr ds : [public_6fb3618]
        add esp, 8
        test eax, eax
        jne public_6ecac5f
        push 0x3F800000
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        call dword ptr ds : [public_6fb33f4]
        add esp, 0xC
        public_6ecac5f : nop
        mov al, 1
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ecabe0)
    }
}

#undef public_6ecac5f
