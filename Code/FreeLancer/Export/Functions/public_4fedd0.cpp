#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fedd0);

#define public_4fede8 _public_4fede8
#define public_4fedf6 _public_4fedf6
#define public_4fee1e _public_4fee1e

PROC_DECLARE(0x4fedd0, internal_4fedd0, public_4fedd0);
extern "C" NAKED register_t __cdecl internal_4fedd0()
{
    __asm
    {
        mov edx, dword ptr ds : [public_674f9c]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_674fa0]
        cmp edx, esi
        push edi
        je public_4fedf6
        mov edi, dword ptr ds : [ecx]
        public_4fede8 : nop
        mov eax, dword ptr ds : [edx]
        cmp dword ptr ds : [eax+4], edi
        je public_4fee1e
        add edx, 4
        cmp edx, esi
        jne public_4fede8
        public_4fedf6 : nop
        mov esi, 0x100002
        call dword ptr ds : [public_5c6044]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0xFC
/*FIXUP push offset public_5da560 @0x4fee0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da560
/*FIXUP push offset public_5da6e8 @0x4fee11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da6e8
        push esi
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        public_4fee1e : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4fedd0)
    }
}

#undef public_4fede8
#undef public_4fedf6
#undef public_4fee1e
