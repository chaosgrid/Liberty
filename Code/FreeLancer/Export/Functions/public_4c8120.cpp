#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8120);

#define public_4c8145 _public_4c8145
#define public_4c815a _public_4c815a
#define public_4c8184 _public_4c8184

PROC_DECLARE(0x4c8120, internal_4c8120, public_4c8120);
extern "C" NAKED register_t __cdecl internal_4c8120()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        sub esp, 0x80
        test al, al
        je public_4c8145
        mov ecx, dword ptr ds : [public_612274]
        mov eax, dword ptr ss : [esp+0x84]
        or ecx, eax
        mov dword ptr ds : [public_612274], ecx
        jmp public_4c815a
        public_4c8145 : nop
        mov ecx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ds : [public_612274]
        not ecx
        and eax, ecx
        mov dword ptr ds : [public_612274], eax
        public_4c815a : nop
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        mov edx, dword ptr ds : [public_612274]
        mov dword ptr ss : [esp], edx
        je public_4c8184
        mov eax, dword ptr ds : [ecx]
        push 4
        lea edx, ss:[esp+4]
        push edx
        mov edx, dword ptr ds : [public_673344]
        push edx
        call dword ptr ds : [eax+0x134]
        public_4c8184 : nop
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4c8120)
    }
}

#undef public_4c8145
#undef public_4c815a
#undef public_4c8184
