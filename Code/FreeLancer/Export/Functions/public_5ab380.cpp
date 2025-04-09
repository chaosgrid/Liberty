#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4680);
CLANG_FORWARD_PROC_SYMBOL(public_5ab380);

#define public_5ab3c9 _public_5ab3c9

PROC_DECLARE(0x5ab380, internal_5ab380, public_5ab380);
extern "C" NAKED register_t __cdecl internal_5ab380()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov byte ptr ds : [ecx+0x21C], 1
        mov eax, dword ptr ds : [esi]
        push eax
        call public_4c4680
        add esp, 4
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5ab3c9
        mov ecx, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
        call dword ptr ds : [public_5c6cac]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 8
        mov dword ptr ds : [public_67ecd8], eax
        mov dword ptr ds : [public_67ecdc], ecx
        pop esi
        ret 4
        public_5ab3c9 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [public_67ecd8], edx
        mov dword ptr ds : [public_67ecdc], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5ab380)
    }
}

#undef public_5ab3c9
