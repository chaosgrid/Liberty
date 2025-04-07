#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf7c0);

#define public_6acf7cc _public_6acf7cc
#define public_6acf7e0 _public_6acf7e0

PROC_DECLARE(0x6acf7c0, internal_6acf7c0, public_6acf7c0);
extern "C" NAKED register_t __cdecl internal_6acf7c0()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6acf7e0
        public_6acf7cc : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6acf7cc
        public_6acf7e0 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6acf7c0)
    }
}

#undef public_6acf7cc
#undef public_6acf7e0
