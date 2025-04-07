#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202070);

#define public_620207d _public_620207d
#define public_6202097 _public_6202097
#define public_62020c9 _public_62020c9
#define public_62020d7 _public_62020d7

PROC_DECLARE(0x6202070, internal_6202070, public_6202070);
extern "C" NAKED register_t __cdecl internal_6202070()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        test esi, esi
        je public_62020d7
        push edi
        public_620207d : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ds : [esi]
        push esi
        mov edi, eax
        call dword ptr ds : [ecx+0x2C]
        test eax, eax
        je public_6202097
        push eax
        mov ecx, ebx
        call public_6202070
        public_6202097 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi]
        or eax, 0x80000000
        push eax
        push esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [public_6257914]
        test eax, eax
        je public_62020c9
        push 0
        push esi
        push 0
        call eax
        add esp, 0xC
        public_62020c9 : nop
        mov edx, dword ptr ds : [ebx]
        push esi
        push ebx
        call dword ptr ds : [edx+0x58]
        test edi, edi
        mov esi, edi
        jne public_620207d
        pop edi
        public_62020d7 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6202070)
    }
}

#undef public_620207d
#undef public_6202097
#undef public_62020c9
#undef public_62020d7
