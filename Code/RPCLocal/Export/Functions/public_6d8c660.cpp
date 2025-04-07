#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8c6cc _public_6d8c6cc

PROC_DECLARE(0x6d8c660, internal_6d8c660, public_6d8c660);
extern "C" NAKED register_t __cdecl internal_6d8c660()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x57
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8c6cc
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x24], ecx
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+0x28], eax
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+0x2C], edx
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [eax+0x30], cl
        mov edx, dword ptr ss : [esp+4]
        fstp dword ptr ds : [edx+0x34]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        public_6d8c6cc : nop
        pop esi
        pop ecx
        ret 0x1C
        UNREACHABLE_TRAP(0x6d8c660)
    }
}

#undef public_6d8c6cc
