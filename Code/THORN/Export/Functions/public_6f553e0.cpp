#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f553e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55410);

#define public_6f55407 _public_6f55407

PROC_DECLARE(0x6f553e0, internal_6f553e0, public_6f553e0);
extern "C" NAKED register_t __cdecl internal_6f553e0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [ecx+0x24]
        add edx, eax
        cmp edx, esi
        pop esi
        jle public_6f55407
        push eax
        call public_6f55410
        mov ecx, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f55407 : nop
        mov eax, dword ptr ds : [ecx+0x28]
        add eax, dword ptr ds : [ecx+0x1C]
        ret 
        UNREACHABLE_TRAP(0x6f553e0)
    }
}

#undef public_6f55407
