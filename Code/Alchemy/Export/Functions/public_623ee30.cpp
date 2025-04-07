#include "Alchemy-PCH.h"


#define public_623ee3a _public_623ee3a
#define public_623ee5c _public_623ee5c

PROC_DECLARE(0x623ee30, internal_623ee30, public_623ee30);
extern "C" NAKED register_t __cdecl internal_623ee30()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        public_623ee3a : nop
        movsx eax, byte ptr ds : [edx]
        movsx ecx, byte ptr ds : [esi]
        mov al, byte ptr ds : [eax+public_6257168]
        inc edx
        mov cl, byte ptr ds : [ecx+public_6257168]
        inc esi
        movsx edi, cl
        movsx eax, al
        sub eax, edi
        jne public_623ee5c
        test cl, cl
        jne public_623ee3a
        public_623ee5c : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x623ee30)
    }
}

#undef public_623ee3a
#undef public_623ee5c
