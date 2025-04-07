#include "Content-PCH.h"


#define public_6ec1520 _public_6ec1520
#define public_6ec154d _public_6ec154d
#define public_6ec155a _public_6ec155a

PROC_DECLARE(0x6ec1500, internal_6ec1500, public_6ec1500);
extern "C" NAKED register_t __cdecl internal_6ec1500()
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
        je public_6ec155a
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6ec1520 : nop
        push offset public_6fb511c @0x6ec1520*/
  FIXUP public_6ec1520 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb511c
        mov ecx, esi
        call ebx
        test al, al
        je public_6ec154d
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x90]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x88]
        public_6ec154d : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ec1520
        pop ebx
        public_6ec155a : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec1500)
    }
}

#undef public_6ec1520
#undef public_6ec154d
#undef public_6ec155a
