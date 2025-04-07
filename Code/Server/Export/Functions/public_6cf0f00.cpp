#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6cf0f90 _public_6cf0f90

PROC_DECLARE(0x6cf0f00, internal_6cf0f00, public_6cf0f00);
extern "C" NAKED register_t __cdecl internal_6cf0f00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        sub esp, 0x28
        test edx, edx
        jbe public_6cf0f90
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[edx-1]
        cmp eax, ecx
        jae public_6cf0f90
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        push esi
        mov esi, dword ptr ds : [eax+ecx+0x348]
        test esi, esi
        pop esi
        je public_6cf0f90
        mov ecx, dword ptr ss : [esp+0x30]
        lea eax, ds:[ecx+0xC]
        mov dword ptr ss : [esp], edx
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [eax+0x24]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        add eax, 0x14
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+8]
        lea eax, ss:[esp]
        push eax
        push 0x31
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        call public_6d43650
        add esp, 8
        public_6cf0f90 : nop
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x6cf0f00)
    }
}

#undef public_6cf0f90
