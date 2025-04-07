#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55410);
CLANG_FORWARD_PROC_SYMBOL(public_6f55450);

#define public_6f5546f _public_6f5546f

PROC_DECLARE(0x6f55450, internal_6f55450, public_6f55450);
extern "C" NAKED register_t __cdecl internal_6f55450()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [eax+0x24]
        inc ecx
        cmp ecx, edx
        jle public_6f5546f
        push 1
        call public_6f55410
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f5546f : nop
        mov edx, dword ptr ds : [eax+0x28]
        mov eax, dword ptr ds : [eax+0x1C]
        mov cl, byte ptr ss : [esp+4]
        mov byte ptr ds : [edx+eax], cl
        mov eax, dword ptr ds : [public_6f61e28]
        inc dword ptr ds : [eax+0x28]
        ret 
        UNREACHABLE_TRAP(0x6f55450)
    }
}

#undef public_6f5546f
