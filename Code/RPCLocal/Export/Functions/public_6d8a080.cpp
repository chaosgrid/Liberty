#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8a124 _public_6d8a124

PROC_DECLARE(0x6d8a080, internal_6d8a080, public_6d8a080);
extern "C" NAKED register_t __cdecl internal_6d8a080()
{
    __asm
    {
        sub esp, 0x20
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 7
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8a124
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], ecx
        mov ecx, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [eax+0x24]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [esp+4]
        lea ecx, ss:[esp+8]
        push ecx
        lea ecx, ds:[edx+0x2C]
        mov dword ptr ss : [esp+0x24], eax
        call public_6d8f510
        mov ecx, dword ptr ss : [esp+4]
        lea eax, ss:[esp+0x14]
        push eax
        add ecx, 0x38
        call public_6d8f4f0
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d8a124 : nop
        pop esi
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6d8a080)
    }
}

#undef public_6d8a124
