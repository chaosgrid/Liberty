#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f229b0);

#define public_6f229dc _public_6f229dc

PROC_DECLARE(0x6f229b0, internal_6f229b0, public_6f229b0);
extern "C" NAKED register_t __cdecl internal_6f229b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [ecx+0x10]
        jae public_6f229dc
        mov ecx, dword ptr ds : [ecx+0x18]
        lea eax, ds:[eax+eax*2+3]
        lea edx, ds:[ecx+eax*4]
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        xor eax, eax
        ret 8
        public_6f229dc : nop
        mov eax, 0xFFFFFFFE
        ret 8
        UNREACHABLE_TRAP(0x6f229b0)
    }
}

#undef public_6f229dc
