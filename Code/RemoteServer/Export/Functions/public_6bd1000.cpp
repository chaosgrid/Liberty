#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd1000);

#define public_6bd1040 _public_6bd1040

PROC_DECLARE(0x6bd1000, internal_6bd1000, public_6bd1000);
extern "C" NAKED register_t __cdecl internal_6bd1000()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6c0b130]
        test eax, eax
        mov dword ptr ds : [public_6c137b4], eax
        je public_6bd1040
        push esi
        mov esi, dword ptr ds : [public_6c0b134]
/*FIXUP push offset public_6c0b278 @0x6bd101b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0b278
        push eax
        call esi
        call eax
        mov ecx, dword ptr ds : [public_6c137b4]
/*FIXUP push offset public_6c0b260 @0x6bd102b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0b260
        push ecx
        mov dword ptr ds : [public_6c137bc], eax
        call esi
        call eax
        mov dword ptr ds : [public_6c137c0], eax
        pop esi
        public_6bd1040 : nop
        mov eax, dword ptr ds : [public_6c137bc]
        ret 
        UNREACHABLE_TRAP(0x6bd1000)
    }
}

#undef public_6bd1040
