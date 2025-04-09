#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7326);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_540963 _public_540963
#define public_54096b _public_54096b
#define public_540980 _public_540980

PROC_DECLARE(0x540930, internal_540930, public_540930);
extern "C" NAKED register_t __cdecl internal_540930()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_54096b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_5b7326 @0x540941*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7326
        lea edi, ds:[esi-4]
        push eax
        push 0x2E8
        push esi
        call public_5b7ec6
        test bl, 1
        je public_540963
        push edi
        call public_5b7e1d
        add esp, 4
        public_540963 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_54096b : nop
        mov ecx, esi
        call public_5b7326
        test bl, 1
        je public_540980
        push esi
        call public_5b7e1d
        add esp, 4
        public_540980 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x540930)
    }
}

#undef public_540963
#undef public_54096b
#undef public_540980
