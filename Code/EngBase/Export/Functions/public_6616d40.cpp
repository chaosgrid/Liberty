#include "EngBase-PCH.h"


#define public_6616d87 _public_6616d87

PROC_DECLARE(0x6616d40, internal_6616d40, public_6616d40);
extern "C" NAKED register_t __cdecl internal_6616d40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
/*FIXUP push offset public_662acec @0x6616d45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662acec
/*FIXUP push offset public_662a278 @0x6616d4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a278
        mov ecx, dword ptr ds : [eax-4]
        lea esi, ds:[eax-4]
        push esi
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_6616d87
        mov eax, dword ptr ds : [public_662acec]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_662acf0 @0x6616d69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662acf0
/*FIXUP push offset public_662a268 @0x6616d6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a268
        push esi
        call dword ptr ds : [eax]
        test eax, eax
        jne public_6616d87
        mov eax, dword ptr ds : [public_662acf0]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        xor eax, eax
        public_6616d87 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6616d40)
    }
}

#undef public_6616d87
