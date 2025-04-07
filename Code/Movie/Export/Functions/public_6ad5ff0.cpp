#include "Movie-PCH.h"


#define public_6ad6004 _public_6ad6004
#define public_6ad6011 _public_6ad6011
#define public_6ad6014 _public_6ad6014
#define public_6ad6024 _public_6ad6024

PROC_DECLARE(0x6ad5ff0, internal_6ad5ff0, public_6ad5ff0);
extern "C" NAKED register_t __cdecl internal_6ad5ff0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        push eax
        push eax
        push eax
        mov edx, dword ptr ss : [ebp+0xC]
        lea ecx, ds:[ecx]
        public_6ad6004 : nop
        mov al, byte ptr ds : [edx]
        or al, al
        je public_6ad6011
        inc edx
        bts dword ptr ss : [esp], eax
        jmp public_6ad6004
        public_6ad6011 : nop
        mov esi, dword ptr ss : [ebp+8]
        public_6ad6014 : nop
        mov al, byte ptr ds : [esi]
        or al, al
        je public_6ad6024
        inc esi
        bt dword ptr ss : [esp], eax
        jae public_6ad6014
        lea eax, ds:[esi-1]
        public_6ad6024 : nop
        add esp, 0x20
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad5ff0)
    }
}

#undef public_6ad6004
#undef public_6ad6011
#undef public_6ad6014
#undef public_6ad6024
