#include "Server-PCH.h"


#define public_6d4c24c _public_6d4c24c

PROC_DECLARE(0x6d4c230, internal_6d4c230, public_6d4c230);
extern "C" NAKED register_t __cdecl internal_6d4c230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        push edi
        mov edi, dword ptr ds : [public_6d64c08]
        mov esi, ecx
        je public_6d4c24c
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        call edi
        add esp, 8
        public_6d4c24c : nop
        mov ecx, dword ptr ds : [esi+4]
/*FIXUP push offset public_6d6af50 @0x6d4c24f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6af50
        push ecx
        call edi
        add esp, 8
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d4c230)
    }
}

#undef public_6d4c24c
