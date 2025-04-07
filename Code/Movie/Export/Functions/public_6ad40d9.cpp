#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad40d9);

#define public_6ad40e9 _public_6ad40e9
#define public_6ad4101 _public_6ad4101
#define public_6ad4103 _public_6ad4103

PROC_DECLARE(0x6ad40d9, internal_6ad40d9, public_6ad40d9);
extern "C" NAKED register_t __cdecl internal_6ad40d9()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae2454]
        lea ecx, ds:[eax+eax*4]
        mov eax, dword ptr ds : [public_6ae2458]
        lea ecx, ds:[eax+ecx*4]
        public_6ad40e9 : nop
        cmp eax, ecx
        jae public_6ad4101
        mov edx, dword ptr ss : [esp+4]
        sub edx, dword ptr ds : [eax+0xC]
        cmp edx, 0x100000
        jb public_6ad4103
        add eax, 0x14
        jmp public_6ad40e9
        public_6ad4101 : nop
        xor eax, eax
        public_6ad4103 : nop
        ret 
        UNREACHABLE_TRAP(0x6ad40d9)
    }
}

#undef public_6ad40e9
#undef public_6ad4101
#undef public_6ad4103
