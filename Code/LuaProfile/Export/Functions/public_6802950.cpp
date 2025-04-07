#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6802950);

#define public_680298d _public_680298d

PROC_DECLARE(0x6802950, internal_6802950, public_6802950);
extern "C" NAKED register_t __cdecl internal_6802950()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        shl eax, 4
        sub ecx, eax
        push eax
        push ecx
        add ecx, 0x10
        push ecx
        call dword ptr ds : [public_680c02c]
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 0xC
        cmp edx, ecx
        jb public_680298d
        push 1
        call public_6802870
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_680298d : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x6802950)
    }
}

#undef public_680298d
