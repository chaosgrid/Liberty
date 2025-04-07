#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f7f0);

#define public_6d1f84d _public_6d1f84d

PROC_DECLARE(0x6d1f7f0, internal_6d1f7f0, public_6d1f7f0);
extern "C" NAKED register_t __cdecl internal_6d1f7f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x1008]
        sub edx, eax
        mov eax, edx
        mov dword ptr ds : [ecx+0x1008], edx
        cmp eax, dword ptr ds : [ecx+0x1004]
        jne public_6d1f84d
        mov edx, dword ptr ds : [ecx+0x1000]
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ds : [ecx+0x1000]
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+0x1000], edx
        add edx, 0x10
        mov dword ptr ds : [ecx+0x1004], edx
        mov edx, dword ptr ds : [ecx+0x1000]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+0x1008], edx
        mov edx, dword ptr ds : [ecx+0x1000]
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0x100C], edx
        public_6d1f84d : nop
        ret 4
        UNREACHABLE_TRAP(0x6d1f7f0)
    }
}

#undef public_6d1f84d
