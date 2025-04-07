#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b3643e _public_6b3643e

PROC_DECLARE(0x6b36370, internal_6b36370, public_6b36370);
extern "C" NAKED register_t __cdecl internal_6b36370()
{
    __asm
    {
        sub esp, 0x20
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x22
        push 2
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        call public_6b3b480
        test eax, eax
        jne public_6b3643e
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [esp+4]
        lea ecx, ss:[esp+8]
        push ecx
        lea ecx, ds:[edx+0x28]
        mov dword ptr ss : [esp+0x24], eax
        call public_6b3a160
        mov ecx, dword ptr ss : [esp+4]
        lea eax, ss:[esp+0x14]
        push eax
        add ecx, 0x34
        call public_6b39ec0
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b3643e : nop
        pop esi
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6b36370)
    }
}

#undef public_6b3643e
