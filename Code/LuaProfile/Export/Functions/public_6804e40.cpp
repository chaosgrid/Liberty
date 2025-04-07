#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6804e40);

#define public_6804e4d _public_6804e4d

PROC_DECLARE(0x6804e40, internal_6804e40, public_6804e40);
extern "C" NAKED register_t __cdecl internal_6804e40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea edx, ds:[eax+eax*8]
        xor ecx, ecx
        push esi
        shl edx, 5
        public_6804e4d : nop
        mov esi, dword ptr ds : [public_680e604]
        mov esi, dword ptr ds : [esi+0x64]
        mov eax, ecx
        sub eax, edx
        add ecx, 0x10
        cmp ecx, 0x120
        mov dword ptr ds : [esi+eax], 0xFFFFFFFA
        jl public_6804e4d
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6804e40)
    }
}

#undef public_6804e4d
