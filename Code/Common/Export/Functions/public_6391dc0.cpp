#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_6391dcc _public_6391dcc
#define public_6391de0 _public_6391de0

PROC_DECLARE(0x6391dc0, internal_6391dc0, public_6391dc0);
extern "C" NAKED register_t __cdecl internal_6391dc0()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6391de0
        public_6391dcc : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6391dcc
        public_6391de0 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6391dc0)
    }
}

#undef public_6391dcc
#undef public_6391de0
