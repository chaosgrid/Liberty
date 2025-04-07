#include "RendComp-PCH.h"


#define public_6c226b5 _public_6c226b5
#define public_6c226cc _public_6c226cc
#define public_6c226d2 _public_6c226d2

PROC_DECLARE(0x6c226a0, internal_6c226a0, public_6c226a0);
extern "C" NAKED register_t __cdecl internal_6c226a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x1E8]
        cmp eax, dword ptr ds : [ecx+0x14]
        je public_6c226b5
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6c226b5 : nop
        mov edx, dword ptr ds : [ecx+0x10]
        test edx, edx
        je public_6c226cc
        mov eax, dword ptr ds : [ecx+0x14]
        sub eax, edx
        mov edx, dword ptr ss : [esp+8]
        sar eax, 2
        cmp edx, eax
        jb public_6c226d2
        public_6c226cc : nop
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6c226d2 : nop
        mov eax, dword ptr ds : [ecx+0x10]
        lea edx, ds:[eax+edx*4]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x218], eax
        mov dword ptr ds : [ecx+0x1E8], edx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c226a0)
    }
}

#undef public_6c226b5
#undef public_6c226cc
#undef public_6c226d2
