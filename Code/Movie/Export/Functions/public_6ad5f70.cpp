#include "Movie-PCH.h"


#define public_6ad5f84 _public_6ad5f84
#define public_6ad5f91 _public_6ad5f91
#define public_6ad5f98 _public_6ad5f98
#define public_6ad5fa6 _public_6ad5fa6

PROC_DECLARE(0x6ad5f70, internal_6ad5f70, public_6ad5f70);
extern "C" NAKED register_t __cdecl internal_6ad5f70()
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
        public_6ad5f84 : nop
        mov al, byte ptr ds : [edx]
        or al, al
        je public_6ad5f91
        inc edx
        bts dword ptr ss : [esp], eax
        jmp public_6ad5f84
        public_6ad5f91 : nop
        mov esi, dword ptr ss : [ebp+8]
        or ecx, 0xFFFFFFFF
        nop 
        public_6ad5f98 : nop
        inc ecx
        mov al, byte ptr ds : [esi]
        or al, al
        je public_6ad5fa6
        inc esi
        bt dword ptr ss : [esp], eax
        jae public_6ad5f98
        public_6ad5fa6 : nop
        mov eax, ecx
        add esp, 0x20
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad5f70)
    }
}

#undef public_6ad5f84
#undef public_6ad5f91
#undef public_6ad5f98
#undef public_6ad5fa6
