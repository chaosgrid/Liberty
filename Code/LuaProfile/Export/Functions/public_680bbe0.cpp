#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680bba0);
CLANG_FORWARD_PROC_SYMBOL(public_680bbe0);

#define public_680bbff _public_680bbff

PROC_DECLARE(0x680bbe0, internal_680bbe0, public_680bbe0);
extern "C" NAKED register_t __cdecl internal_680bbe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [eax+0x24]
        inc ecx
        cmp ecx, edx
        jle public_680bbff
        push 1
        call public_680bba0
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_680bbff : nop
        mov edx, dword ptr ds : [eax+0x28]
        mov eax, dword ptr ds : [eax+0x1C]
        mov cl, byte ptr ss : [esp+4]
        mov byte ptr ds : [edx+eax], cl
        mov eax, dword ptr ds : [public_680e604]
        inc dword ptr ds : [eax+0x28]
        ret 
        UNREACHABLE_TRAP(0x680bbe0)
    }
}

#undef public_680bbff
