#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f020c0);

#define public_6f00b5f _public_6f00b5f

PROC_DECLARE(0x6f00b10, internal_6f00b10, public_6f00b10);
extern "C" NAKED register_t __cdecl internal_6f00b10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x48]
        mov eax, dword ptr ds : [eax+0x44]
        mov edx, dword ptr ss : [esp+8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push eax
        push edx
        call public_6f020c0
        add esp, 0x10
        test eax, eax
        je public_6f00b5f
        cmp byte ptr ds : [eax], 0
        je public_6f00b5f
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x218]
        mov dword ptr ds : [ecx+edx*4+0x118], eax
        mov eax, dword ptr ds : [ecx+0x218]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+eax*4+0x198], edx
        inc dword ptr ds : [ecx+0x218]
        public_6f00b5f : nop
        ret 
        UNREACHABLE_TRAP(0x6f00b10)
    }
}

#undef public_6f00b5f
