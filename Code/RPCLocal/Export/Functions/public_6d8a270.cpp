#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8a359 _public_6d8a359

PROC_DECLARE(0x6d8a270, internal_6d8a270, public_6d8a270);
extern "C" NAKED register_t __cdecl internal_6d8a270()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x2D
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8a359
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov ecx, dword ptr ds : [eax+0x44]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x2C], ecx
        mov cx, word ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+4]
        mov word ptr ds : [edx+0x30], cx
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x44], ecx
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x48], ecx
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x4C], ecx
        mov ecx, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x34], ecx
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x38], ecx
        mov ecx, dword ptr ds : [eax+0x24]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x3C], ecx
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x40], ecx
        mov ecx, dword ptr ds : [eax+0x2C]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x50], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x54], ecx
        mov ecx, dword ptr ds : [eax+0x34]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x58], ecx
        mov ecx, dword ptr ds : [eax+0x38]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x5C], ecx
        mov ecx, dword ptr ds : [eax+0x3C]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x60], ecx
        mov eax, dword ptr ds : [eax+0x40]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x64], eax
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ds : [ecx]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d8a359 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8a270)
    }
}

#undef public_6d8a359
