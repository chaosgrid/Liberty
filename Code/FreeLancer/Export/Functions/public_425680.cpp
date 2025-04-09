#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425680);

#define public_42569d _public_42569d
#define public_4256b8 _public_4256b8

PROC_DECLARE(0x425680, internal_425680, public_425680);
extern "C" NAKED register_t __cdecl internal_425680()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_42569d
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [esi], 0
        public_42569d : nop
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        mov dword ptr ds : [esi], ecx
        pop esi
        je public_4256b8
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        public_4256b8 : nop
        ret 4
        UNREACHABLE_TRAP(0x425680)
    }
}

#undef public_42569d
#undef public_4256b8
