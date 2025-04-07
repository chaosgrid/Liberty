#include "Server-PCH.h"


#define public_6cffac0 _public_6cffac0
#define public_6cffaf3 _public_6cffaf3
#define public_6cffb00 _public_6cffb00

PROC_DECLARE(0x6cffaa0, internal_6cffaa0, public_6cffaa0);
extern "C" NAKED register_t __cdecl internal_6cffaa0()
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
        je public_6cffb00
        push ebx
        mov ebx, dword ptr ds : [public_6d64590]
        nop 
        lea esp, ss:[esp]
        public_6cffac0 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6d64558]
        test al, al
        jne public_6cffaf3
/*FIXUP push offset public_6d66ff4 @0x6cffacd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ff4
        mov ecx, esi
        call dword ptr ds : [public_6d64568]
        test al, al
        je public_6cffaf3
        push 0
        mov ecx, esi
        call ebx
        push 0
        push eax
        call dword ptr ds : [public_6d64250]
        add esp, 8
        mov dword ptr ds : [edi+0x28], eax
        public_6cffaf3 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6cffac0
        pop ebx
        public_6cffb00 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cffaa0)
    }
}

#undef public_6cffac0
#undef public_6cffaf3
#undef public_6cffb00
