#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acedc0);
CLANG_FORWARD_PROC_SYMBOL(public_6aceea0);

#define public_6aceec9 _public_6aceec9

PROC_DECLARE(0x6aceea0, internal_6aceea0, public_6aceea0);
extern "C" NAKED register_t __cdecl internal_6aceea0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+0x14]
        lea edi, ds:[esi+0x58]
        mov dword ptr ds : [esi+0x5C], ecx
        mov ecx, 0x38
        mov dword ptr ds : [edi], eax
        shr eax, 3
        and eax, 0x3F
        cmp eax, 0x38
        jb public_6aceec9
        mov ecx, 0x78
        public_6aceec9 : nop
        sub ecx, eax
        push ecx
/*FIXUP push offset public_6ada920 @0x6aceecc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada920
        push esi
        call public_6acedc0
        push 8
        push edi
        push esi
        call public_6acedc0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [esi+0x60], ecx
        mov dword ptr ds : [esi+0x64], edx
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6aceea0)
    }
}

#undef public_6aceec9
