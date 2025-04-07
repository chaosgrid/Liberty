#include "Content-PCH.h"


#define public_6ecc7a4 _public_6ecc7a4
#define public_6ecc7c7 _public_6ecc7c7
#define public_6ecc7e3 _public_6ecc7e3

PROC_DECLARE(0x6ecc750, internal_6ecc750, public_6ecc750);
extern "C" NAKED register_t __cdecl internal_6ecc750()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov ebp, ecx
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, esi
        mov dword ptr ss : [ebp+0xC], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecc7e3
        mov edi, dword ptr ds : [public_6fb3048]
/*FIXUP push offset public_6fb5cc4 @0x6ecc77b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5cc4
        push 1
        mov ecx, esi
        call edi
        mov ebx, dword ptr ds : [public_6fb3294]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ecc7a4
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], 7
        pop ebp
        pop ebx
        ret 4
/*FIXUP public_6ecc7a4 : nop
        push offset public_6fb5cd0 @0x6ecc7a4*/
  FIXUP public_6ecc7a4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5cd0
        push 1
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ecc7c7
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], 8
        pop ebp
        pop ebx
        ret 4
/*FIXUP public_6ecc7c7 : nop
        push offset public_6fb5cb0 @0x6ecc7c7*/
  FIXUP public_6ecc7c7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5cb0
        push 1
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ecc7e3
        mov dword ptr ss : [ebp+0x10], 9
        public_6ecc7e3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ecc750)
    }
}

#undef public_6ecc7a4
#undef public_6ecc7c7
#undef public_6ecc7e3
