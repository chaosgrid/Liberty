#include "Content-PCH.h"


#define public_6ec1700 _public_6ec1700
#define public_6ec171a _public_6ec171a
#define public_6ec1727 _public_6ec1727

PROC_DECLARE(0x6ec16e0, internal_6ec16e0, public_6ec16e0);
extern "C" NAKED register_t __cdecl internal_6ec16e0()
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
        je public_6ec1727
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6ec1700 : nop
        push offset public_6fb50f4 @0x6ec1700*/
  FIXUP public_6ec1700 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb50f4
        mov ecx, esi
        call ebx
        test al, al
        je public_6ec171a
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0xC]
        public_6ec171a : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ec1700
        pop ebx
        public_6ec1727 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec16e0)
    }
}

#undef public_6ec1700
#undef public_6ec171a
#undef public_6ec1727
