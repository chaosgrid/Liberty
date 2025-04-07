#include "Content-PCH.h"


#define public_6ecd88c _public_6ecd88c
#define public_6ecd8a4 _public_6ecd8a4

PROC_DECLARE(0x6ecd840, internal_6ecd840, public_6ecd840);
extern "C" NAKED register_t __cdecl internal_6ecd840()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebx, ecx
        push 0
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
/*FIXUP push offset public_6fb5f94 @0x6ecd860*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5f94
        push 1
        mov ecx, esi
        mov dword ptr ds : [ebx+0xC], eax
        call edi
        mov ebp, dword ptr ds : [public_6fb3294]
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6ecd88c
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x10], 1
        pop ebx
        ret 4
/*FIXUP public_6ecd88c : nop
        push offset public_6fb5f84 @0x6ecd88c*/
  FIXUP public_6ecd88c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5f84
        push 1
        mov ecx, esi
        call edi
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6ecd8a4
        mov dword ptr ds : [ebx+0x10], eax
        public_6ecd8a4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ecd840)
    }
}

#undef public_6ecd88c
#undef public_6ecd8a4
