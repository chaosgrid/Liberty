#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f117a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f117f0);

#define public_6f11821 _public_6f11821

PROC_DECLARE(0x6f117f0, internal_6f117f0, public_6f117f0);
extern "C" NAKED register_t __cdecl internal_6f117f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        jne public_6f11821
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov dword ptr ds : [public_6f13198], eax
        call dword ptr ds : [public_6f1200c]
        mov esi, dword ptr ds : [public_6f12000]
        call esi
        mov dword ptr ds : [public_6f13194], eax
        call esi
        push eax
        call public_6f117a0
        add esp, 4
        pop esi
        public_6f11821 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6f117f0)
    }
}

#undef public_6f11821
