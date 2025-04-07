#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8c161 _public_6d8c161

PROC_DECLARE(0x6d8c0f0, internal_6d8c0f0, public_6d8c0f0);
extern "C" NAKED register_t __cdecl internal_6d8c0f0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x55
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8c161
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], edx
        mov cx, word ptr ds : [eax+2]
        mov edx, dword ptr ss : [esp+4]
        mov word ptr ds : [edx+0x28], cx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov cx, word ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov word ptr ds : [edx+0x2A], cx
        fld dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx+0x2C]
        mov dl, byte ptr ds : [eax+0x18]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [eax+0x30], dl
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ds : [ecx]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d8c161 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d8c0f0)
    }
}

#undef public_6d8c161
