#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419460);

#define public_41946c _public_41946c
#define public_419480 _public_419480

PROC_DECLARE(0x419460, internal_419460, public_419460);
extern "C" NAKED register_t __cdecl internal_419460()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_419480
        public_41946c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_41946c
        public_419480 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x419460)
    }
}

#undef public_41946c
#undef public_419480
