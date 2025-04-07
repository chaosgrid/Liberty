#include "Freelancer-PCH.h"


#define public_52b300 _public_52b300
#define public_52b32f _public_52b32f
#define public_52b33c _public_52b33c

PROC_DECLARE(0x52b2e0, internal_52b2e0, public_52b2e0);
extern "C" NAKED register_t __cdecl internal_52b2e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_52b33c
        push ebx
        mov ebx, dword ptr ds : [public_5c6698]
        nop 
        lea esp, ss:[esp]
        public_52b300 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6894]
        test al, al
        jne public_52b32f
/*FIXUP push offset public_5dd35c @0x52b30d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd35c
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_52b32f
        mov ecx, esi
        call ebx
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x28], eax
        public_52b32f : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_52b300
        pop ebx
        public_52b33c : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52b2e0)
    }
}

#undef public_52b300
#undef public_52b32f
#undef public_52b33c
