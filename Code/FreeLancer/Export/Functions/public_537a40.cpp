#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411690);
CLANG_FORWARD_PROC_SYMBOL(public_537a40);

#define public_537a57 _public_537a57
#define public_537a78 _public_537a78

PROC_DECLARE(0x537a40, internal_537a40, public_537a40);
extern "C" NAKED register_t __cdecl internal_537a40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_5c669c]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
        mov ecx, esi
        call ebx
        test al, al
        je public_537a78
        public_537a57 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6698]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c60b8]
        push eax
        mov ecx, edi
        call public_411690
        mov ecx, esi
        call ebx
        test al, al
        jne public_537a57
        public_537a78 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x537a40)
    }
}

#undef public_537a57
#undef public_537a78
