#include "Content-PCH.h"


#define public_6ebfeb0 _public_6ebfeb0
#define public_6ebfed7 _public_6ebfed7
#define public_6ebfee4 _public_6ebfee4

PROC_DECLARE(0x6ebfe90, internal_6ebfe90, public_6ebfe90);
extern "C" NAKED register_t __cdecl internal_6ebfe90()
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
        je public_6ebfee4
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6ebfeb0 : nop
        push offset public_6fb55dc @0x6ebfeb0*/
  FIXUP public_6ebfeb0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb55dc
        mov ecx, esi
        call ebx
        test al, al
        je public_6ebfed7
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x54]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x60]
        public_6ebfed7 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ebfeb0
        pop ebx
        public_6ebfee4 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ebfe90)
    }
}

#undef public_6ebfeb0
#undef public_6ebfed7
#undef public_6ebfee4
