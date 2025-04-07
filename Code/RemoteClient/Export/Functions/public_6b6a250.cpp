#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a250);

#define public_6b6a25c _public_6b6a25c
#define public_6b6a270 _public_6b6a270

PROC_DECLARE(0x6b6a250, internal_6b6a250, public_6b6a250);
extern "C" NAKED register_t __cdecl internal_6b6a250()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6b6a270
        public_6b6a25c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6b6a25c
        public_6b6a270 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6b6a250)
    }
}

#undef public_6b6a25c
#undef public_6b6a270
