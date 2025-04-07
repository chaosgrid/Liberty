#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67120f0);
CLANG_FORWARD_PROC_SYMBOL(public_6712480);

#define public_67125ca _public_67125ca

PROC_DECLARE(0x6712560, internal_6712560, public_6712560);
extern "C" NAKED register_t __cdecl internal_6712560()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], 0
        test edi, edi
        mov esi, ecx
        mov dword ptr ss : [ebp], 0
        je public_67125ca
        cmp word ptr ds : [edi], 0
        je public_67125ca
        call public_6712480
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_67125ca
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_67125ca
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        call dword ptr ds : [public_671937c]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push edi
        push ecx
        call public_67120f0
        add esp, 0x10
        test eax, eax
        je public_67125ca
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp], edx
        mov dword ptr ds : [ebx], eax
        public_67125ca : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6712560)
    }
}

#undef public_67125ca
