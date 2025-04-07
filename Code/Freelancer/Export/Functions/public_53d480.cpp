#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_53d4b2 _public_53d4b2
#define public_53d4b4 _public_53d4b4
#define public_53d4e1 _public_53d4e1

PROC_DECLARE(0x53d480, internal_53d480, public_53d480);
extern "C" NAKED register_t __cdecl internal_53d480()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi]
        push 8
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53d4e1
        lea ecx, ds:[eax+0xC]
        test ecx, ecx
        je public_53d4b2
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        je public_53d4b2
        mov ecx, dword ptr ds : [edx+0x4C]
        and ecx, 1
        cmp cl, 1
        je public_53d4b4
        public_53d4b2 : nop
        xor edx, edx
        public_53d4b4 : nop
        fld dword ptr ds : [edx+0x34]
        lea ecx, ss:[esp+4]
        fadd dword ptr ds : [esi+0xC]
        push ecx
        fld dword ptr ds : [edx+0x30]
        mov ecx, eax
        fadd dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fadd dword ptr ds : [edx+0x2C]
        mov edx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        call dword ptr ds : [edx+0x1B0]
        public_53d4e1 : nop
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x53d480)
    }
}

#undef public_53d4b2
#undef public_53d4b4
#undef public_53d4e1
