#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68052b0);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

#define public_68052ba _public_68052ba
#define public_68052f3 _public_68052f3

PROC_DECLARE(0x68052b0, internal_68052b0, public_68052b0);
extern "C" NAKED register_t __cdecl internal_68052b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_68052f3
        push edi
        public_68052ba : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [public_680e604]
        mov edi, dword ptr ds : [esi]
        cdq 
        and edx, 0xF
        add eax, edx
        sar eax, 4
        or edx, 0xFFFFFFFF
        sub edx, eax
        add dword ptr ds : [ecx+0x78], edx
        mov eax, dword ptr ds : [esi+8]
        push 0
        push eax
        call public_68065d0
        push 0
        push esi
        call public_68065d0
        add esp, 0x10
        test edi, edi
        mov esi, edi
        jne public_68052ba
        pop edi
        public_68052f3 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68052b0)
    }
}

#undef public_68052ba
#undef public_68052f3
