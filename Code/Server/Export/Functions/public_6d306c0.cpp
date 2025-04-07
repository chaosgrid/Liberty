#include "Server-PCH.h"


#define public_6d306e4 _public_6d306e4
#define public_6d306f0 _public_6d306f0

PROC_DECLARE(0x6d306c0, internal_6d306c0, public_6d306c0);
extern "C" NAKED register_t __cdecl internal_6d306c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [edx+0x18], eax
        mov eax, dword ptr ds : [edx+0x10]
        cmp esi, eax
        je public_6d306f0
        mov si, word ptr ds : [eax]
        cmp si, word ptr ds : [ecx+8]
        je public_6d306e4
        cmp si, word ptr ds : [ecx+0xE]
        jne public_6d306f0
        public_6d306e4 : nop
        add eax, 2
        mov dword ptr ds : [edx+0x10], eax
        mov al, 1
        pop esi
        ret 4
        public_6d306f0 : nop
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d306c0)
    }
}

#undef public_6d306e4
#undef public_6d306f0
