#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d3e);

#define public_6b39a7a _public_6b39a7a
#define public_6b39a82 _public_6b39a82

PROC_DECLARE(0x6b39a60, internal_6b39a60, public_6b39a60);
extern "C" NAKED register_t __cdecl internal_6b39a60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x64
        test eax, eax
        jbe public_6b39a7a
        cmp eax, 0x80
        ja public_6b39a7a
        mov ecx, dword ptr ds : [ecx+eax*4+0xC]
        test ecx, ecx
        jne public_6b39a82
        public_6b39a7a : nop
        xor al, al
        add esp, 0x64
        ret 8
        public_6b39a82 : nop
        lea eax, ss:[esp+8]
        push eax
        call public_6b69d3e
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+0x70], ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax+0x68], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp], ecx
        mov dword ptr ss : [esp+4], 0
        fild qword ptr ss : [esp]
        mov dword ptr ds : [eax+0x6C], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0x64], edx
        fmul qword ptr ds : [public_6b6bee0]
        fstp dword ptr ds : [eax+0x60]
        mov al, 1
        add esp, 0x64
        ret 8
        UNREACHABLE_TRAP(0x6b39a60)
    }
}

#undef public_6b39a7a
#undef public_6b39a82
