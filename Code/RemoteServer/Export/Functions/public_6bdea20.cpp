#include "RemoteServer-PCH.h"


#define public_6bdea52 _public_6bdea52

PROC_DECLARE(0x6bdea20, internal_6bdea20, public_6bdea20);
extern "C" NAKED register_t __cdecl internal_6bdea20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        je public_6bdea52
        push esi
        mov esi, dword ptr ds : [public_6c0b154]
/*FIXUP push offset public_6c0bbf4 @0x6bdea2e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push eax
        mov eax, dword ptr ss : [esp+0x10]
/*FIXUP push offset public_6c0bc18 @0x6bdea38*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bc18
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b170]
        push eax
        call esi
        add esp, 8
        pop esi
        public_6bdea52 : nop
        ret 4
        UNREACHABLE_TRAP(0x6bdea20)
    }
}

#undef public_6bdea52
