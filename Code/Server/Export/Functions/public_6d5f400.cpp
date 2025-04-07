#include "Server-PCH.h"


#define public_6d5f423 _public_6d5f423

PROC_DECLARE(0x6d5f400, internal_6d5f400, public_6d5f400);
extern "C" NAKED register_t __cdecl internal_6d5f400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push 1
        push edi
        push eax
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d643b8]
        add esp, 0xC
        test eax, eax
        jne public_6d5f423
        pop edi
        pop esi
        ret 
        public_6d5f423 : nop
        mov dword ptr ds : [edi], 0xFFFFFFFF
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f400)
    }
}

#undef public_6d5f423
