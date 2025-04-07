#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2aef0);

#define public_6c29bcd _public_6c29bcd
#define public_6c29bd2 _public_6c29bd2
#define public_6c29bf9 _public_6c29bf9
#define public_6c29c04 _public_6c29c04
#define public_6c29c15 _public_6c29c15

PROC_DECLARE(0x6c29bc0, internal_6c29bc0, public_6c29bc0);
extern "C" NAKED register_t __cdecl internal_6c29bc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6c29bcd
        test ecx, ecx
        jne public_6c29bd2
        public_6c29bcd : nop
        xor al, al
        ret 0x20
        public_6c29bd2 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call public_6c2aef0
        test eax, eax
        jge public_6c29bf9
        xor al, al
        ret 0x20
        public_6c29bf9 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6c29c04
        or eax, 0xFFFFFFFF
        public_6c29c04 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jne public_6c29c15
        or eax, 0xFFFFFFFF
        public_6c29c15 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], eax
        mov al, 1
        ret 0x20
        UNREACHABLE_TRAP(0x6c29bc0)
    }
}

#undef public_6c29bcd
#undef public_6c29bd2
#undef public_6c29bf9
#undef public_6c29c04
#undef public_6c29c15
