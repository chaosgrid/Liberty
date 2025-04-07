#include "RemoteClient-PCH.h"


#define public_6b40372 _public_6b40372

PROC_DECLARE(0x6b40340, internal_6b40340, public_6b40340);
extern "C" NAKED register_t __cdecl internal_6b40340()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        je public_6b40372
        push esi
        mov esi, dword ptr ds : [public_6b6b134]
/*FIXUP push offset public_6b6bf74 @0x6b4034e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push eax
        mov eax, dword ptr ss : [esp+0x10]
/*FIXUP push offset public_6b6c200 @0x6b40358*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6c200
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b12c]
        push eax
        call esi
        add esp, 8
        pop esi
        public_6b40372 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b40340)
    }
}

#undef public_6b40372
