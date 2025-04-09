#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52f9a0);
CLANG_FORWARD_PROC_SYMBOL(public_533100);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_53c608 _public_53c608
#define public_53c642 _public_53c642
#define public_53c644 _public_53c644
#define public_53c64e _public_53c64e

PROC_DECLARE(0x53c5d0, internal_53c5d0, public_53c5d0);
extern "C" NAKED register_t __cdecl internal_53c5d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53c608
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        push ecx
        mov ecx, eax
        call public_533100
        test eax, eax
        je public_53c608
        movzx edx, word ptr ds : [esi+0xA]
        mov ecx, dword ptr ds : [esi]
        push edx
        push ecx
        mov ecx, eax
        call public_52f9a0
        public_53c608 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53c64e
        mov edx, dword ptr ds : [esi]
        push 0
        push edx
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53c64e
        add eax, 0xC
        test eax, eax
        je public_53c642
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_53c642
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_53c644
        public_53c642 : nop
        xor eax, eax
        public_53c644 : nop
        movzx edx, word ptr ds : [esi+0xA]
        sub dword ptr ds : [eax+0xF0], edx
        public_53c64e : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53c5d0)
    }
}

#undef public_53c608
#undef public_53c642
#undef public_53c644
#undef public_53c64e
