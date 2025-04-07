#include "DALib-PCH.h"


#define public_65c27f2 _public_65c27f2
#define public_65c283b _public_65c283b

PROC_DECLARE(0x65c27e0, internal_65c27e0, public_65c27e0);
extern "C" NAKED register_t __cdecl internal_65c27e0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+8]
        sub esp, 0xC
        test al, al
        jne public_65c27f2
        xor al, al
        add esp, 0xC
        ret 8
        public_65c27f2 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        push 0x108
        mov dword ptr ss : [esp+0xC], edx
        lea edx, ss:[esp+4]
        push edx
        push 0
        push 0
        push 1
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_65c283b
        cmp eax, 0x15800E
        je public_65c283b
        xor al, al
        add esp, 0xC
        ret 8
        public_65c283b : nop
        mov al, 1
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x65c27e0)
    }
}

#undef public_65c27f2
#undef public_65c283b
