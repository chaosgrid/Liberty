#include "Content-PCH.h"


#define public_6ec0330 _public_6ec0330
#define public_6ec034a _public_6ec034a
#define public_6ec0357 _public_6ec0357

PROC_DECLARE(0x6ec0310, internal_6ec0310, public_6ec0310);
extern "C" NAKED register_t __cdecl internal_6ec0310()
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
        je public_6ec0357
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6ec0330 : nop
        push offset public_6fb55b0 @0x6ec0330*/
  FIXUP public_6ec0330 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb55b0
        mov ecx, esi
        call ebx
        test al, al
        je public_6ec034a
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x24]
        public_6ec034a : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ec0330
        pop ebx
        public_6ec0357 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec0310)
    }
}

#undef public_6ec0330
#undef public_6ec034a
#undef public_6ec0357
