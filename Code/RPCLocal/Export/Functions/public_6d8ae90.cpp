#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8af19 _public_6d8af19

PROC_DECLARE(0x6d8ae90, internal_6d8ae90, public_6d8ae90);
extern "C" NAKED register_t __cdecl internal_6d8ae90()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x4B
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8af19
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x2C], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x30], ecx
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x34], ecx
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x38], ecx
        mov ecx, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x3C], ecx
        mov eax, dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x40], eax
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ds : [ecx]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d8af19 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8ae90)
    }
}

#undef public_6d8af19
