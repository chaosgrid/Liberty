#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad7dba);

#define public_6ad7dd0 _public_6ad7dd0
#define public_6ad7dd3 _public_6ad7dd3

PROC_DECLARE(0x6ad7dba, internal_6ad7dba, public_6ad7dba);
extern "C" NAKED register_t __cdecl internal_6ad7dba()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        xor eax, eax
        lea ecx, ds:[edx+esi]
        cmp ecx, edx
        jb public_6ad7dd0
        cmp ecx, esi
        jae public_6ad7dd3
        public_6ad7dd0 : nop
        push 1
        pop eax
        public_6ad7dd3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [edx], ecx
        ret 
        UNREACHABLE_TRAP(0x6ad7dba)
    }
}

#undef public_6ad7dd0
#undef public_6ad7dd3
