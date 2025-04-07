#include "Freelancer-PCH.h"


#define public_59a405 _public_59a405
#define public_59a40a _public_59a40a

PROC_DECLARE(0x59a3d0, internal_59a3d0, public_59a3d0);
extern "C" NAKED register_t __cdecl internal_59a3d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [eax+4], 2
        jne public_59a40a
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_59a40a
        mov al, byte ptr ds : [ecx+0x498]
        test al, al
        je public_59a40a
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_59a405
        mov ecx, dword ptr ds : [ecx+0x4A4]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        push 0x3004
        mov ecx, eax
        call dword ptr ds : [edx+0x5C]
        public_59a405 : nop
        mov al, 1
        ret 4
        public_59a40a : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x59a3d0)
    }
}

#undef public_59a405
#undef public_59a40a
