#include "Content-PCH.h"


#define public_6ec1dec _public_6ec1dec
#define public_6ec1e27 _public_6ec1e27

PROC_DECLARE(0x6ec1db0, internal_6ec1db0, public_6ec1db0);
extern "C" NAKED register_t __cdecl internal_6ec1db0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fb579c @0x6ec1dbd*/
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
        je public_6ec1dec
        push 0
        mov ecx, esi
        call edi
        push eax
        lea eax, ds:[ebx+0x10]
        push eax
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        public_6ec1dec : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec1e27
/*FIXUP push offset public_6fb579c @0x6ec1dfa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb579c
        push 1
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6ec1e27
        push 1
        mov ecx, esi
        call edi
        push eax
        add ebx, 0xC
        push ebx
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        public_6ec1e27 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec1db0)
    }
}

#undef public_6ec1dec
#undef public_6ec1e27
