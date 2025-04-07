#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b37348 _public_6b37348

PROC_DECLARE(0x6b37300, internal_6b37300, public_6b37300);
extern "C" NAKED register_t __cdecl internal_6b37300()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x1C
        push 1
        call public_6b3b480
        test eax, eax
        jne public_6b37348
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x24], ecx
        mov edx, dword ptr ss : [esp+4]
        mov byte ptr ds : [edx+0x28], 1
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        public_6b37348 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b37300)
    }
}

#undef public_6b37348
