#include "Content-PCH.h"


#define public_6f282bc _public_6f282bc
#define public_6f282d7 _public_6f282d7

PROC_DECLARE(0x6f28280, internal_6f28280, public_6f28280);
extern "C" NAKED register_t __cdecl internal_6f28280()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fb5f94 @0x6f2828e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5f94
        mov ebp, ecx
        push 0
        mov ecx, esi
        call edi
        mov ebx, dword ptr ds : [public_6fb3294]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f282bc
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10C], 1
        pop ebp
        pop ebx
        ret 4
/*FIXUP public_6f282bc : nop
        push offset public_6fb5f84 @0x6f282bc*/
  FIXUP public_6f282bc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5f84
        push 0
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f282d7
        mov dword ptr ss : [ebp+0x10C], eax
        public_6f282d7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f28280)
    }
}

#undef public_6f282bc
#undef public_6f282d7
