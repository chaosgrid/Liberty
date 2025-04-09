#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5650f0);
CLANG_FORWARD_PROC_SYMBOL(public_565430);
CLANG_FORWARD_PROC_SYMBOL(public_565490);

#define public_565471 _public_565471
#define public_56547c _public_56547c

PROC_DECLARE(0x565430, internal_565430, public_565430);
extern "C" NAKED register_t __cdecl internal_565430()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push 0x2E
        push edi
        mov esi, ecx
        call dword ptr ds : [public_5c70e4]
        add esp, 8
        test eax, eax
        je public_56547c
        mov ebp, dword ptr ds : [public_5c6d24]
        lea ebx, ds:[eax+1]
/*FIXUP push offset public_5e279c @0x565453*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e279c
        push ebx
        call ebp
        add esp, 8
        test eax, eax
        jne public_565471
        push edi
        mov ecx, esi
        call public_5650f0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
/*FIXUP public_565471 : nop
        push offset public_5e2798 @0x565471*/
  FIXUP public_565471 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2798
        push ebx
        call ebp
        add esp, 8
        public_56547c : nop
        mov ecx, esi
        push edi
        call public_565490
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x565430)
    }
}

#undef public_565471
#undef public_56547c
