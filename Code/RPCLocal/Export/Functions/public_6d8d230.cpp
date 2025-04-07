#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6d9a160);

#define public_6d8d2a2 _public_6d8d2a2

PROC_DECLARE(0x6d8d230, internal_6d8d230, public_6d8d230);
extern "C" NAKED register_t __cdecl internal_6d8d230()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x18
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8d2a2
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x24], ecx
        mov edx, dword ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+0x1C]
        fstp dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x30], cl
        push edi
        mov edi, edx
        xor eax, eax
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        call public_6d9a160
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        pop edi
        public_6d8d2a2 : nop
        pop esi
        pop ecx
        ret 0x18
        UNREACHABLE_TRAP(0x6d8d230)
    }
}

#undef public_6d8d2a2
