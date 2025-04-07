#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245a20);

#define public_623ba05 _public_623ba05
#define public_623ba26 _public_623ba26

PROC_DECLARE(0x623b9e0, internal_623b9e0, public_623b9e0);
extern "C" NAKED register_t __cdecl internal_623b9e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xF231FF60
        jne public_623ba05
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x6C]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_623ba05 : nop
        cmp eax, 0x1874DE74
        jne public_623ba26
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x70]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_623ba26 : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_6245a20
        UNREACHABLE_TRAP(0x623b9e0)
    }
}

#undef public_623ba05
#undef public_623ba26
