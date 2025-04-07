#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202070);

#define public_62020f7 _public_62020f7
#define public_6202111 _public_6202111
#define public_6202143 _public_6202143
#define public_6202153 _public_6202153

PROC_DECLARE(0x62020e0, internal_62020e0, public_62020e0);
extern "C" NAKED register_t __cdecl internal_62020e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x2C]
        test eax, eax
        je public_6202153
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov esi, eax
        public_62020f7 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x34]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x2C]
        test eax, eax
        je public_6202111
        push eax
        mov ecx, ebx
        call public_6202070
        public_6202111 : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        call dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x14]
        or eax, 0x80000000
        push eax
        push esi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [public_6257914]
        test eax, eax
        je public_6202143
        push 0
        push esi
        push 0
        call eax
        add esp, 0xC
        public_6202143 : nop
        mov edx, dword ptr ds : [ebx]
        push esi
        push ebx
        call dword ptr ds : [edx+0x58]
        test edi, edi
        mov esi, edi
        jne public_62020f7
        pop edi
        pop esi
        pop ebx
        public_6202153 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62020e0)
    }
}

#undef public_62020f7
#undef public_6202111
#undef public_6202143
#undef public_6202153
