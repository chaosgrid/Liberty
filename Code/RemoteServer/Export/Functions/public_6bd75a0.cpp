#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);
CLANG_FORWARD_PROC_SYMBOL(public_6be3120);

#define public_6bd7612 _public_6bd7612

PROC_DECLARE(0x6bd75a0, internal_6bd75a0, public_6bd75a0);
extern "C" NAKED register_t __cdecl internal_6bd75a0()
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
        call public_6be1750
        test eax, eax
        jne public_6bd7612
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
        call public_6be3120
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        pop edi
        public_6bd7612 : nop
        pop esi
        pop ecx
        ret 0x18
        UNREACHABLE_TRAP(0x6bd75a0)
    }
}

#undef public_6bd7612
