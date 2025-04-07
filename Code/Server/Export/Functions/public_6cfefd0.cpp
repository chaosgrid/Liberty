#include "Server-PCH.h"


#define public_6cfeff0 _public_6cfeff0
#define public_6cff021 _public_6cff021
#define public_6cff039 _public_6cff039
#define public_6cff046 _public_6cff046

PROC_DECLARE(0x6cfefd0, internal_6cfefd0, public_6cfefd0);
extern "C" NAKED register_t __cdecl internal_6cfefd0()
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
        je public_6cff046
        push ebx
        mov ebx, dword ptr ds : [public_6d64568]
        nop 
        lea esp, ss:[esp]
        public_6cfeff0 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6d64558]
        test al, al
        jne public_6cff039
/*FIXUP push offset public_6d66ba0 @0x6cfeffd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ba0
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6cff021
        call dword ptr ds : [public_6d64564]
        push eax
        call dword ptr ds : [public_6d643b4]
        add esp, 4
        mov dword ptr ds : [edi+0x28], eax
        jmp public_6cff039
/*FIXUP public_6cff021 : nop
        push offset public_6d66f5c @0x6cff021*/
  FIXUP public_6cff021 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f5c
        call ebx
        test al, al
        je public_6cff039
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x2C]
        public_6cff039 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6cfeff0
        pop ebx
        public_6cff046 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cfefd0)
    }
}

#undef public_6cfeff0
#undef public_6cff021
#undef public_6cff039
#undef public_6cff046
