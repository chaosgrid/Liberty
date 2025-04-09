#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_506600);
CLANG_FORWARD_PROC_SYMBOL(public_5524a0);

#define public_509ad6 _public_509ad6
#define public_509ae6 _public_509ae6

PROC_DECLARE(0x509ac0, internal_509ac0, public_509ac0);
extern "C" NAKED register_t __cdecl internal_509ac0()
{
    __asm
    {
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [ebp+0xF8]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_509ae6
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        public_509ad6 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        call public_5524a0
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_509ad6
        pop ebx
        public_509ae6 : nop
        mov ecx, ebp
        call public_506600
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x509ac0)
    }
}

#undef public_509ad6
#undef public_509ae6
