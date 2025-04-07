#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43340);

#define public_6d43380 _public_6d43380

PROC_DECLARE(0x6d43340, internal_6d43340, public_6d43340);
extern "C" NAKED register_t __cdecl internal_6d43340()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6d64a8c]
        test eax, eax
        mov dword ptr ds : [public_6d8f618], eax
        je public_6d43380
        push esi
        mov esi, dword ptr ds : [public_6d64a84]
/*FIXUP push offset public_6d6ac48 @0x6d4335b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ac48
        push eax
        call esi
        call eax
        mov ecx, dword ptr ds : [public_6d8f618]
/*FIXUP push offset public_6d6ac30 @0x6d4336b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ac30
        push ecx
        mov dword ptr ds : [public_6d8f620], eax
        call esi
        call eax
        mov dword ptr ds : [public_6d8f624], eax
        pop esi
        public_6d43380 : nop
        mov eax, dword ptr ds : [public_6d8f620]
        ret 
        UNREACHABLE_TRAP(0x6d43340)
    }
}

#undef public_6d43380
