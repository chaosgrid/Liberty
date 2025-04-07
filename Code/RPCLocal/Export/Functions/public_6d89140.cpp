#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d89181 _public_6d89181

PROC_DECLARE(0x6d89140, internal_6d89140, public_6d89140);
extern "C" NAKED register_t __cdecl internal_6d89140()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 6
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d89181
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov al, byte ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x24], al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d89181 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d89140)
    }
}

#undef public_6d89181
