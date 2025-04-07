#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8e763 _public_6d8e763

PROC_DECLARE(0x6d8e710, internal_6d8e710, public_6d8e710);
extern "C" NAKED register_t __cdecl internal_6d8e710()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0xF
        push 1
        call public_6d96300
        test eax, eax
        jne public_6d8e763
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
        mov al, byte ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x2C], al
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6d8e763 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8e710)
    }
}

#undef public_6d8e763
