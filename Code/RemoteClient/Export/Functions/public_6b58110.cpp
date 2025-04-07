#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b58110);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b58129 _public_6b58129
#define public_6b5813c _public_6b5813c
#define public_6b5814f _public_6b5814f
#define public_6b58162 _public_6b58162

PROC_DECLARE(0x6b58110, internal_6b58110, public_6b58110);
extern "C" NAKED register_t __cdecl internal_6b58110()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x60]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6b6cd40
        je public_6b58129
        push eax
        call public_6b6a092
        add esp, 4
        public_6b58129 : nop
        mov eax, dword ptr ds : [esi+0x88]
        test eax, eax
        je public_6b5813c
        push eax
        call public_6b6a092
        add esp, 4
        public_6b5813c : nop
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        je public_6b5814f
        push eax
        call public_6b6a092
        add esp, 4
        public_6b5814f : nop
        mov eax, dword ptr ds : [esi+0x84]
        test eax, eax
        je public_6b58162
        push eax
        call public_6b6a092
        add esp, 4
        public_6b58162 : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b58110)
    }
}

#undef public_6b58129
#undef public_6b5813c
#undef public_6b5814f
#undef public_6b58162
