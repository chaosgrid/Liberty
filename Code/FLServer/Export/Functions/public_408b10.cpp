#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41858e);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_4192c6);

#define public_408b43 _public_408b43
#define public_408b4b _public_408b4b
#define public_408b60 _public_408b60

PROC_DECLARE(0x408b10, internal_408b10, public_408b10);
extern "C" NAKED register_t __cdecl internal_408b10()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_408b4b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_41858e @0x408b21*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41858e
        lea edi, ds:[esi-4]
        push eax
        push 0x99C
        push esi
        call public_4192c6
        test bl, 1
        je public_408b43
        push edi
        call public_418978
        add esp, 4
        public_408b43 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_408b4b : nop
        mov ecx, esi
        call public_41858e
        test bl, 1
        je public_408b60
        push esi
        call public_418978
        add esp, 4
        public_408b60 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x408b10)
    }
}

#undef public_408b43
#undef public_408b4b
#undef public_408b60
