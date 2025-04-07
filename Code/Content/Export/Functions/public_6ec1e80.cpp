#include "Content-PCH.h"


#define public_6ec1ebc _public_6ec1ebc
#define public_6ec1ef7 _public_6ec1ef7

PROC_DECLARE(0x6ec1e80, internal_6ec1e80, public_6ec1e80);
extern "C" NAKED register_t __cdecl internal_6ec1e80()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fb579c @0x6ec1e8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb579c
        mov ebx, ecx
        push 0
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ec1ebc
        push 0
        mov ecx, esi
        call edi
        push eax
        lea eax, ds:[ebx+0xC]
        push eax
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        public_6ec1ebc : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec1ef7
/*FIXUP push offset public_6fb579c @0x6ec1eca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb579c
        push 1
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ec1ef7
        push 1
        mov ecx, esi
        call edi
        push eax
        add ebx, 0x10
        push ebx
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        public_6ec1ef7 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec1e80)
    }
}

#undef public_6ec1ebc
#undef public_6ec1ef7
