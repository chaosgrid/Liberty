#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4188fa);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_4192c6);

#define public_402c30 _public_402c30
#define public_402c38 _public_402c38
#define public_402c4d _public_402c4d

PROC_DECLARE(0x402c00, internal_402c00, public_402c00);
extern "C" NAKED register_t __cdecl internal_402c00()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_402c38
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_4188fa @0x402c11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4188fa
        lea edi, ds:[esi-4]
        push eax
        push 0x30
        push esi
        call public_4192c6
        test bl, 1
        je public_402c30
        push edi
        call public_418978
        add esp, 4
        public_402c30 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_402c38 : nop
        mov ecx, esi
        call public_4188fa
        test bl, 1
        je public_402c4d
        push esi
        call public_418978
        add esp, 4
        public_402c4d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x402c00)
    }
}

#undef public_402c30
#undef public_402c38
#undef public_402c4d
