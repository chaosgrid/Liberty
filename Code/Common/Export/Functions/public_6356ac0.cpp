#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356ac0);

#define public_6356ada _public_6356ada
#define public_6356af6 _public_6356af6
#define public_6356b05 _public_6356b05
#define public_6356b1a _public_6356b1a
#define public_6356b24 _public_6356b24

PROC_DECLARE(0x6356ac0, internal_6356ac0, public_6356ac0);
extern "C" NAKED register_t __cdecl internal_6356ac0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp]
        lea ecx, ds:[ebx-1]
        push esi
        or eax, 0xFFFFFFFF
        test ecx, ecx
        push edi
        jl public_6356af6
        lea esi, ds:[ecx+1]
        public_6356ada : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [edx]
        inc edx
        xor ecx, eax
        and ecx, 0xFF
        mov ecx, dword ptr ds : [ecx*4+public_63edcdc]
        shr eax, 8
        xor eax, ecx
        dec esi
        jne public_6356ada
        public_6356af6 : nop
        xor edx, edx
        div dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [eax+edx*4]
        test edx, edx
        je public_6356b1a
        public_6356b05 : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, ebx
        lea esi, ds:[edx+8]
        xor eax, eax
        repe cmpsb
        je public_6356b24
        mov edx, dword ptr ds : [edx]
        test edx, edx
        jne public_6356b05
        public_6356b1a : nop
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6356b24 : nop
        test edx, edx
        je public_6356b1a
        mov eax, dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6356ac0)
    }
}

#undef public_6356ada
#undef public_6356af6
#undef public_6356b05
#undef public_6356b1a
#undef public_6356b24
