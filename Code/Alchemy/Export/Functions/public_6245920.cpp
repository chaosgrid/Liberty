#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6210900);
CLANG_FORWARD_PROC_SYMBOL(public_623f8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6245920);

#define public_6245950 _public_6245950
#define public_6245974 _public_6245974
#define public_6245998 _public_6245998
#define public_62459bc _public_62459bc
#define public_62459e0 _public_62459e0
#define public_6245a01 _public_6245a01

PROC_DECLARE(0x6245920, internal_6245920, public_6245920);
extern "C" NAKED register_t __cdecl internal_6245920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push eax
        push esi
        call public_623f8d0
        lea edi, ds:[esi+0x4C]
        mov ebx, eax
        mov dword ptr ds : [esi+0x64], 0
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6245950
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6245950 : nop
        push edi
        push 0x42C80000
        call public_6210900
        mov eax, dword ptr ds : [esi+0x50]
        lea edi, ds:[esi+0x50]
        add esp, 8
        test eax, eax
        je public_6245974
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi], 0
        public_6245974 : nop
        push edi
        push 0x461C4000
        call public_6210900
        mov eax, dword ptr ds : [esi+0x54]
        lea edi, ds:[esi+0x54]
        add esp, 8
        test eax, eax
        je public_6245998
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_6245998 : nop
        push edi
        push 0x40000000
        call public_6210900
        mov eax, dword ptr ds : [esi+0x58]
        lea edi, ds:[esi+0x58]
        add esp, 8
        test eax, eax
        je public_62459bc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi], 0
        public_62459bc : nop
        push edi
        push 0x41200000
        call public_6210900
        mov eax, dword ptr ds : [esi+0x5C]
        lea edi, ds:[esi+0x5C]
        add esp, 8
        test eax, eax
        je public_62459e0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_62459e0 : nop
        push edi
        push 0
        call public_6210900
        mov eax, dword ptr ds : [esi+0x60]
        add esi, 0x60
        add esp, 8
        test eax, eax
        je public_6245a01
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi], 0
        public_6245a01 : nop
        push esi
        push 0
        call public_6210900
        add esp, 8
        mov eax, ebx
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6245920)
    }
}

#undef public_6245950
#undef public_6245974
#undef public_6245998
#undef public_62459bc
#undef public_62459e0
#undef public_6245a01
