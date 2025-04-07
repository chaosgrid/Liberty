#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9d50);
CLANG_FORWARD_PROC_SYMBOL(public_6301ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6301cd1 _public_6301cd1
#define public_6301ce6 _public_6301ce6

PROC_DECLARE(0x6301ca0, internal_6301ca0, public_6301ca0);
extern "C" NAKED register_t __cdecl internal_6301ca0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+4], ecx
        mov ebp, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea ebx, ds:[edi+8]
        je public_6301ce6
        public_6301cd1 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebx
        call public_62b9d50
        cmp esi, ebp
        jne public_6301cd1
        public_6301ce6 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        xor eax, eax
        push edi
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        pop edi
        dec ecx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6301ca0)
    }
}

#undef public_6301cd1
#undef public_6301ce6
