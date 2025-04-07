#include "Content-PCH.h"


#define public_6ec25a0 _public_6ec25a0
#define public_6ec25ba _public_6ec25ba
#define public_6ec25c7 _public_6ec25c7

PROC_DECLARE(0x6ec2580, internal_6ec2580, public_6ec2580);
extern "C" NAKED register_t __cdecl internal_6ec2580()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ec25c7
        push ebx
        mov ebx, dword ptr ds : [public_6fb3020]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6ec25a0 : nop
        push offset public_6fb524c @0x6ec25a0*/
  FIXUP public_6ec25a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb524c
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ec25ba
        push 0
        mov ecx, esi
        call ebx
        mov dword ptr ds : [edi+0x4C], eax
        public_6ec25ba : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ec25a0
        pop ebx
        public_6ec25c7 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec2580)
    }
}

#undef public_6ec25a0
#undef public_6ec25ba
#undef public_6ec25c7
