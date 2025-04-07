#include "Server-PCH.h"


#define public_6cfe057 _public_6cfe057
#define public_6cfe068 _public_6cfe068

PROC_DECLARE(0x6cfe040, internal_6cfe040, public_6cfe040);
extern "C" NAKED register_t __cdecl internal_6cfe040()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6d6455c]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
        mov ecx, esi
        call ebx
        test al, al
        je public_6cfe068
        public_6cfe057 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6d64558]
        mov ecx, esi
        call ebx
        test al, al
        jne public_6cfe057
        public_6cfe068 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6cfe040)
    }
}

#undef public_6cfe057
#undef public_6cfe068
