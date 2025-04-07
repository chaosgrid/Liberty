#include "Content-PCH.h"


#define public_6f0691c _public_6f0691c

PROC_DECLARE(0x6f068f0, internal_6f068f0, public_6f068f0);
extern "C" NAKED register_t __cdecl internal_6f068f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6f0691c
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6f0691c
        mov ecx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax], ecx
        public_6f0691c : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6f068f0)
    }
}

#undef public_6f0691c
