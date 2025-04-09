#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_524880);
CLANG_FORWARD_PROC_SYMBOL(public_5267f0);
CLANG_FORWARD_PROC_SYMBOL(public_54bd50);

#define public_526812 _public_526812
#define public_526822 _public_526822

PROC_DECLARE(0x5267f0, internal_5267f0, public_5267f0);
extern "C" NAKED register_t __cdecl internal_5267f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov dword ptr ds : [public_613844], eax
        call public_54bd50
        mov eax, dword ptr ds : [public_6753c4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_526822
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_526812 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        call public_524880
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_526812
        pop ebx
        public_526822 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5267f0)
    }
}

#undef public_526812
#undef public_526822
