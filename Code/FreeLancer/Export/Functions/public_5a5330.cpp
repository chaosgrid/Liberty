#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7386);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5a5363 _public_5a5363
#define public_5a536b _public_5a536b
#define public_5a5380 _public_5a5380

PROC_DECLARE(0x5a5330, internal_5a5330, public_5a5330);
extern "C" NAKED register_t __cdecl internal_5a5330()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_5a536b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_5b7386 @0x5a5341*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7386
        lea edi, ds:[esi-4]
        push eax
        push 0x99C
        push esi
        call public_5b7ec6
        test bl, 1
        je public_5a5363
        push edi
        call public_5b7e1d
        add esp, 4
        public_5a5363 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_5a536b : nop
        mov ecx, esi
        call public_5b7386
        test bl, 1
        je public_5a5380
        push esi
        call public_5b7e1d
        add esp, 4
        public_5a5380 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5a5330)
    }
}

#undef public_5a5363
#undef public_5a536b
#undef public_5a5380
