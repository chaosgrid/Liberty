#include "FLServer-PCH.h"


#define public_4183fa _public_4183fa
#define public_41841c _public_41841c

PROC_DECLARE(0x4183f0, internal_4183f0, public_4183f0);
extern "C" NAKED register_t __cdecl internal_4183f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        public_4183fa : nop
        movsx eax, byte ptr ds : [edx]
        movsx ecx, byte ptr ds : [esi]
        mov al, byte ptr ds : [eax+public_425dd8]
        inc edx
        mov cl, byte ptr ds : [ecx+public_425dd8]
        inc esi
        movsx edi, cl
        movsx eax, al
        sub eax, edi
        jne public_41841c
        test cl, cl
        jne public_4183fa
        public_41841c : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4183f0)
    }
}

#undef public_4183fa
#undef public_41841c
