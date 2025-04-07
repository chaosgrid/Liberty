#include "Content-PCH.h"


#define public_6eb8285 _public_6eb8285
#define public_6eb829f _public_6eb829f
#define public_6eb82b5 _public_6eb82b5

PROC_DECLARE(0x6eb8260, internal_6eb8260, public_6eb8260);
extern "C" NAKED register_t __cdecl internal_6eb8260()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [public_6fb3294]
/*FIXUP push offset public_6fb47c0 @0x6eb826d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb47c0
        push esi
        or ebx, 0xFFFFFFFF
        call edi
        add esp, 8
        test eax, eax
        jne public_6eb8285
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6eb8285 : nop
        push offset public_6fb47b8 @0x6eb8285*/
  FIXUP public_6eb8285 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb47b8
        push esi
        call edi
        add esp, 8
        test eax, eax
        jne public_6eb829f
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 4
/*FIXUP public_6eb829f : nop
        push offset public_6fb47ac @0x6eb829f*/
  FIXUP public_6eb829f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb47ac
        push esi
        call edi
        add esp, 8
        test eax, eax
        mov eax, 2
        je public_6eb82b5
        mov eax, ebx
        public_6eb82b5 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb8260)
    }
}

#undef public_6eb8285
#undef public_6eb829f
#undef public_6eb82b5
