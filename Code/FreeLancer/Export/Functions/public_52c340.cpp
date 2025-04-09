#include "FreeLancer-PCH.h"


#define public_52c360 _public_52c360
#define public_52c38f _public_52c38f
#define public_52c39c _public_52c39c

PROC_DECLARE(0x52c340, internal_52c340, public_52c340);
extern "C" NAKED register_t __cdecl internal_52c340()
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
        je public_52c39c
        push ebx
        mov ebx, dword ptr ds : [public_5c6698]
        nop 
        lea esp, ss:[esp]
        public_52c360 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6894]
        test al, al
        jne public_52c38f
/*FIXUP push offset public_5dd188 @0x52c36d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd188
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_52c38f
        mov ecx, esi
        call ebx
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x28], eax
        public_52c38f : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_52c360
        pop ebx
        public_52c39c : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52c340)
    }
}

#undef public_52c360
#undef public_52c38f
#undef public_52c39c
