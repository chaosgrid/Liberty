#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd8a7b _public_6bd8a7b

PROC_DECLARE(0x6bd8a30, internal_6bd8a30, public_6bd8a30);
extern "C" NAKED register_t __cdecl internal_6bd8a30()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 8
        push 1
        call public_6be1750
        test eax, eax
        jne public_6bd8a7b
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov cx, word ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov word ptr ds : [edx+0x26], cx
        mov al, byte ptr ds : [eax+6]
        mov ecx, dword ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x24], al
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd8a7b : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bd8a30)
    }
}

#undef public_6bd8a7b
