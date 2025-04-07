#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b782c0);

#define public_6b782cc _public_6b782cc
#define public_6b782e0 _public_6b782e0

PROC_DECLARE(0x6b782c0, internal_6b782c0, public_6b782c0);
extern "C" NAKED register_t __cdecl internal_6b782c0()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6b782e0
        public_6b782cc : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6b782cc
        public_6b782e0 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6b782c0)
    }
}

#undef public_6b782cc
#undef public_6b782e0
