#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41857c);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_4192c6);

#define public_402e53 _public_402e53
#define public_402e5b _public_402e5b
#define public_402e70 _public_402e70

PROC_DECLARE(0x402e20, internal_402e20, public_402e20);
extern "C" NAKED register_t __cdecl internal_402e20()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_402e5b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_41857c @0x402e31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41857c
        lea edi, ds:[esi-4]
        push eax
        push 0xDC
        push esi
        call public_4192c6
        test bl, 1
        je public_402e53
        push edi
        call public_418978
        add esp, 4
        public_402e53 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_402e5b : nop
        mov ecx, esi
        call public_41857c
        test bl, 1
        je public_402e70
        push esi
        call public_418978
        add esp, 4
        public_402e70 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x402e20)
    }
}

#undef public_402e53
#undef public_402e5b
#undef public_402e70
