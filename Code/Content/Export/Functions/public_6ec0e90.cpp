#include "Content-PCH.h"


#define public_6ec0eb0 _public_6ec0eb0
#define public_6ec0eca _public_6ec0eca
#define public_6ec0ed7 _public_6ec0ed7

PROC_DECLARE(0x6ec0e90, internal_6ec0e90, public_6ec0e90);
extern "C" NAKED register_t __cdecl internal_6ec0e90()
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
        je public_6ec0ed7
        push ebx
        mov ebx, dword ptr ds : [public_6fb3020]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6ec0eb0 : nop
        push offset public_6fb5678 @0x6ec0eb0*/
  FIXUP public_6ec0eb0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5678
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ec0eca
        push 0
        mov ecx, esi
        call ebx
        mov dword ptr ds : [edi+0xC], eax
        public_6ec0eca : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ec0eb0
        pop ebx
        public_6ec0ed7 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec0e90)
    }
}

#undef public_6ec0eb0
#undef public_6ec0eca
#undef public_6ec0ed7
