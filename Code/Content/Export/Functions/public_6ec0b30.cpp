#include "Content-PCH.h"


#define public_6ec0b50 _public_6ec0b50
#define public_6ec0b7a _public_6ec0b7a
#define public_6ec0b87 _public_6ec0b87

PROC_DECLARE(0x6ec0b30, internal_6ec0b30, public_6ec0b30);
extern "C" NAKED register_t __cdecl internal_6ec0b30()
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
        je public_6ec0b87
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6ec0b50 : nop
        push offset public_6fb5604 @0x6ec0b50*/
  FIXUP public_6ec0b50 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5604
        mov ecx, esi
        call ebx
        test al, al
        je public_6ec0b7a
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x7C]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x88]
        public_6ec0b7a : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ec0b50
        pop ebx
        public_6ec0b87 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec0b30)
    }
}

#undef public_6ec0b50
#undef public_6ec0b7a
#undef public_6ec0b87
