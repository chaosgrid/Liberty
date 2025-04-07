#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8dd65 _public_6d8dd65

PROC_DECLARE(0x6d8dcf0, internal_6d8dcf0, public_6d8dcf0);
extern "C" NAKED register_t __cdecl internal_6d8dcf0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x20
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8dd65
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], ecx
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x2C], eax
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x30], eax
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+0x34], edx
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+0x38], ecx
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6d8dd65 : nop
        pop esi
        pop ecx
        ret 0x18
        UNREACHABLE_TRAP(0x6d8dcf0)
    }
}

#undef public_6d8dd65
