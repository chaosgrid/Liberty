#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_577d60);
CLANG_FORWARD_PROC_SYMBOL(public_577dd0);

#define public_577de6 _public_577de6
#define public_577e04 _public_577e04
#define public_577e0a _public_577e0a

PROC_DECLARE(0x577dd0, internal_577dd0, public_577dd0);
extern "C" NAKED register_t __cdecl internal_577dd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67c21c]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_577e04
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x10]
        public_577de6 : nop
        mov eax, dword ptr ds : [esi+8]
        push 0
        push edi
        push ebx
        push eax
        call public_577d60
        add esp, 0x10
        test al, al
        jne public_577e0a
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_67c21c]
        jne public_577de6
        public_577e04 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 
        public_577e0a : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x577dd0)
    }
}

#undef public_577de6
#undef public_577e04
#undef public_577e0a
