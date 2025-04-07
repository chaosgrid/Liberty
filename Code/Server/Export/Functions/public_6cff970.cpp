#include "Server-PCH.h"


#define public_6cff990 _public_6cff990
#define public_6cff9b7 _public_6cff9b7
#define public_6cff9c4 _public_6cff9c4

PROC_DECLARE(0x6cff970, internal_6cff970, public_6cff970);
extern "C" NAKED register_t __cdecl internal_6cff970()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [public_6d6455c]
        test al, al
        je public_6cff9c4
        push ebx
        mov ebx, dword ptr ds : [public_6d6458c]
        nop 
        lea esp, ss:[esp]
        public_6cff990 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6d64558]
        test al, al
        jne public_6cff9b7
/*FIXUP push offset public_6d66fec @0x6cff99d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66fec
        mov ecx, esi
        call dword ptr ds : [public_6d64568]
        test al, al
        je public_6cff9b7
        push 0
        mov ecx, esi
        call ebx
        mov byte ptr ds : [edi+0x28], al
        public_6cff9b7 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6cff990
        pop ebx
        public_6cff9c4 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cff970)
    }
}

#undef public_6cff990
#undef public_6cff9b7
#undef public_6cff9c4
