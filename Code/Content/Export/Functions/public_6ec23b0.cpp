#include "Content-PCH.h"


#define public_6ec23d0 _public_6ec23d0
#define public_6ec23ed _public_6ec23ed
#define public_6ec23fa _public_6ec23fa

PROC_DECLARE(0x6ec23b0, internal_6ec23b0, public_6ec23b0);
extern "C" NAKED register_t __cdecl internal_6ec23b0()
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
        je public_6ec23fa
        push ebx
        mov ebx, dword ptr ds : [public_6fb3020]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6ec23d0 : nop
        push offset public_6fb5280 @0x6ec23d0*/
  FIXUP public_6ec23d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5280
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ec23ed
        push 0
        mov ecx, esi
        call ebx
        mov dword ptr ds : [edi+0x80], eax
        public_6ec23ed : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ec23d0
        pop ebx
        public_6ec23fa : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec23b0)
    }
}

#undef public_6ec23d0
#undef public_6ec23ed
#undef public_6ec23fa
