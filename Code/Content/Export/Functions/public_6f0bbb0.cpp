#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f0bbf3 _public_6f0bbf3

PROC_DECLARE(0x6f0bbb0, internal_6f0bbb0, public_6f0bbb0);
extern "C" NAKED register_t __cdecl internal_6f0bbb0()
{
    __asm
    {
        push esi
        push 0x1C
        mov esi, ecx
        call public_6fa912a
        add esp, 4
        test eax, eax
        je public_6f0bbf3
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], offset public_6fb839c
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+0x14], ecx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax], offset public_6fb854c
        pop esi
        ret 
        public_6f0bbf3 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f0bbb0)
    }
}

#undef public_6f0bbf3
