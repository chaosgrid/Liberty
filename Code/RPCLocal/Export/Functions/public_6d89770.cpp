#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d897bb _public_6d897bb

PROC_DECLARE(0x6d89770, internal_6d89770, public_6d89770);
extern "C" NAKED register_t __cdecl internal_6d89770()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0xA
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d897bb
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], ecx
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
        public_6d897bb : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d89770)
    }
}

#undef public_6d897bb
