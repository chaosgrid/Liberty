#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4bcf0);

#define public_6f4bd18 _public_6f4bd18

PROC_DECLARE(0x6f4bcf0, internal_6f4bcf0, public_6f4bcf0);
extern "C" NAKED register_t __cdecl internal_6f4bcf0()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+4]
        shl eax, 4
        push esi
        mov esi, dword ptr ds : [edx]
        lea eax, ds:[ecx+eax-0x10]
        lea ecx, ds:[eax+0x10]
        cmp ecx, esi
        pop esi
        jae public_6f4bd18
        cmp dword ptr ds : [ecx], 0xFFFFFFF5
        jne public_6f4bd18
        mov eax, dword ptr ds : [eax+0x18]
        ret 
        public_6f4bd18 : nop
        or eax, 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x6f4bcf0)
    }
}

#undef public_6f4bd18
