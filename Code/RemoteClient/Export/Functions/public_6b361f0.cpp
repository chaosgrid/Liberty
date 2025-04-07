#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b362b3 _public_6b362b3

PROC_DECLARE(0x6b361f0, internal_6b361f0, public_6b361f0);
extern "C" NAKED register_t __cdecl internal_6b361f0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x37
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b362b3
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x2C]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], ecx
        mov cx, word ptr ds : [eax+0x34]
        mov edx, dword ptr ss : [esp+4]
        mov word ptr ds : [edx+0x2C], cx
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x30], ecx
        mov cx, word ptr ds : [eax+0x24]
        mov edx, dword ptr ss : [esp+4]
        mov word ptr ds : [edx+0x34], cx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x38], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x3C], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x40], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x44], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x48], ecx
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x4C], ecx
        mov ecx, dword ptr ds : [eax+0x18]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x50], ecx
        mov eax, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x54], eax
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ds : [ecx]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b362b3 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b361f0)
    }
}

#undef public_6b362b3
