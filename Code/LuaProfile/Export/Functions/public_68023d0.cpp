#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68023d0);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);

#define public_680240d _public_680240d

PROC_DECLARE(0x68023d0, internal_68023d0, public_68023d0);
extern "C" NAKED register_t __cdecl internal_68023d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [eax+8]
        jb public_680240d
        push 1
        call public_6802870
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_680240d : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x68023d0)
    }
}

#undef public_680240d
