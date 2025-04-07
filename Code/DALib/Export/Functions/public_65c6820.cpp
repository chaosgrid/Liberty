#include "DALib-PCH.h"


#define public_65c6840 _public_65c6840
#define public_65c686c _public_65c686c

PROC_DECLARE(0x65c6820, internal_65c6820, public_65c6820);
extern "C" NAKED register_t __cdecl internal_65c6820()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        jbe public_65c686c
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, 0xFFFFFFFE
        lea eax, ds:[edx+2]
        sub esi, edx
        lea ecx, ds:[ecx]
        public_65c6840 : nop
        movzx ebx, byte ptr ds : [eax-1]
        xor edx, edx
        mov dh, byte ptr ds : [eax+1]
        add eax, 4
        add ecx, 4
        mov dl, byte ptr ds : [eax-4]
        shl edx, 8
        or edx, ebx
        movzx ebx, byte ptr ds : [eax-6]
        shl edx, 8
        or edx, ebx
        mov dword ptr ds : [ecx-4], edx
        lea edx, ds:[esi+eax]
        cmp edx, edi
        jb public_65c6840
        pop esi
        pop ebx
        public_65c686c : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x65c6820)
    }
}

#undef public_65c6840
#undef public_65c686c
