#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418576);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_4192c6);

#define public_401260 _public_401260
#define public_401268 _public_401268
#define public_40127d _public_40127d

PROC_DECLARE(0x401230, internal_401230, public_401230);
extern "C" NAKED register_t __cdecl internal_401230()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_401268
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_418576 @0x401241*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_418576
        lea edi, ds:[esi-4]
        push eax
        push 0x28
        push esi
        call public_4192c6
        test bl, 1
        je public_401260
        push edi
        call public_418978
        add esp, 4
        public_401260 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_401268 : nop
        mov ecx, esi
        call public_418576
        test bl, 1
        je public_40127d
        push esi
        call public_418978
        add esp, 4
        public_40127d : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x401230)
    }
}

#undef public_401260
#undef public_401268
#undef public_40127d
