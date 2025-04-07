#include "Content-PCH.h"


#define public_6ec3220 _public_6ec3220
#define public_6ec323a _public_6ec323a
#define public_6ec3247 _public_6ec3247

PROC_DECLARE(0x6ec3200, internal_6ec3200, public_6ec3200);
extern "C" NAKED register_t __cdecl internal_6ec3200()
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
        je public_6ec3247
        push ebx
        mov ebx, dword ptr ds : [public_6fb3020]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6ec3220 : nop
        push offset public_6fb53a4 @0x6ec3220*/
  FIXUP public_6ec3220 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb53a4
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ec323a
        push 0
        mov ecx, esi
        call ebx
        mov dword ptr ds : [edi+0x44], eax
        public_6ec323a : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ec3220
        pop ebx
        public_6ec3247 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec3200)
    }
}

#undef public_6ec3220
#undef public_6ec323a
#undef public_6ec3247
