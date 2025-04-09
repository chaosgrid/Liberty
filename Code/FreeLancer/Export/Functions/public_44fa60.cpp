#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fa60);

#define public_44fa70 _public_44fa70
#define public_44fa85 _public_44fa85

PROC_DECLARE(0x44fa60, internal_44fa60, public_44fa60);
extern "C" NAKED register_t __cdecl internal_44fa60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jle public_44fa85
        lea ecx, ds:[ecx]
        public_44fa70 : nop
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xD4]
        dec esi
        jne public_44fa70
        public_44fa85 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x44fa60)
    }
}

#undef public_44fa70
#undef public_44fa85
