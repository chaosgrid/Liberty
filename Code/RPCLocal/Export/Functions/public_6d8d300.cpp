#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6d9a5f0);

#define public_6d8d373 _public_6d8d373

PROC_DECLARE(0x6d8d300, internal_6d8d300, public_6d8d300);
extern "C" NAKED register_t __cdecl internal_6d8d300()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x1A
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8d373
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        movzx ecx, word ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+0x28], ecx
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x20], ecx
        mov edx, dword ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+0x1C]
        push edi
        fstp dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+0x30], cl
        mov edi, edx
        xor eax, eax
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        call public_6d9a5f0
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        pop edi
        public_6d8d373 : nop
        pop esi
        pop ecx
        ret 0x18
        UNREACHABLE_TRAP(0x6d8d300)
    }
}

#undef public_6d8d373
