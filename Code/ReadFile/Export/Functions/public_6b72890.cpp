#include "ReadFile-PCH.h"


#define public_6b728b1 _public_6b728b1
#define public_6b728ca _public_6b728ca
#define public_6b728e3 _public_6b728e3
#define public_6b728e8 _public_6b728e8

PROC_DECLARE(0x6b72890, internal_6b72890, public_6b72890);
extern "C" NAKED register_t __cdecl internal_6b72890()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b728e8
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6b728b1
        mov edx, dword ptr ds : [ecx+0x478]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+0x47C]
        mov dword ptr ds : [eax+4], edx
        public_6b728b1 : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6b728ca
        mov edx, dword ptr ds : [ecx+0x480]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+0x484]
        mov dword ptr ds : [eax+4], edx
        public_6b728ca : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6b728e3
        mov edx, dword ptr ds : [ecx+0x488]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+0x48C]
        mov dword ptr ds : [eax+4], ecx
        public_6b728e3 : nop
        mov al, 1
        ret 0x10
        public_6b728e8 : nop
        xor al, al
        ret 0x10
        UNREACHABLE_TRAP(0x6b72890)
    }
}

#undef public_6b728b1
#undef public_6b728ca
#undef public_6b728e3
#undef public_6b728e8
