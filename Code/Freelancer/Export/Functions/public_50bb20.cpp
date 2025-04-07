#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50bb20);

#define public_50bb35 _public_50bb35
#define public_50bb50 _public_50bb50

PROC_DECLARE(0x50bb20, internal_50bb20, public_50bb20);
extern "C" NAKED register_t __cdecl internal_50bb20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_50bb50
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        public_50bb35 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push ebx
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_50bb35
        pop edi
        pop ebx
        public_50bb50 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x50bb20)
    }
}

#undef public_50bb35
#undef public_50bb50
