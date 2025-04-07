#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd8df7 _public_6bd8df7

PROC_DECLARE(0x6bd8da0, internal_6bd8da0, public_6bd8da0);
extern "C" NAKED register_t __cdecl internal_6bd8da0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 4
        push 1
        call public_6be1750
        test eax, eax
        jne public_6bd8df7
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov cx, word ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov word ptr ds : [edx+0x28], cx
        mov ax, word ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov word ptr ds : [ecx+0x2A], ax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd8df7 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bd8da0)
    }
}

#undef public_6bd8df7
