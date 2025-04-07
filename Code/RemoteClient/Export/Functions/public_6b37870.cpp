#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b378bd _public_6b378bd

PROC_DECLARE(0x6b37870, internal_6b37870, public_6b37870);
extern "C" NAKED register_t __cdecl internal_6b37870()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x14
        push 1
        call public_6b3b480
        test eax, eax
        jne public_6b378bd
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov cx, word ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov word ptr ds : [edx+0x24], cx
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x28], eax
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b378bd : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b37870)
    }
}

#undef public_6b378bd
