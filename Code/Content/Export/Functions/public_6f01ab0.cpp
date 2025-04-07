#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f01ab0);

#define public_6f01ae1 _public_6f01ae1

PROC_DECLARE(0x6f01ab0, internal_6f01ab0, public_6f01ab0);
extern "C" NAKED register_t __cdecl internal_6f01ab0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f01ae1
        cmp byte ptr ds : [eax], 0
        je public_6f01ae1
        mov edx, dword ptr ds : [ecx+0x218]
        mov dword ptr ds : [ecx+edx*4+0x118], eax
        mov eax, dword ptr ds : [ecx+0x218]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+eax*4+0x198], edx
        inc dword ptr ds : [ecx+0x218]
        public_6f01ae1 : nop
        ret 8
        UNREACHABLE_TRAP(0x6f01ab0)
    }
}

#undef public_6f01ae1
