#include "DALib-PCH.h"


#define public_65c5513 _public_65c5513
#define public_65c5542 _public_65c5542

PROC_DECLARE(0x65c5500, internal_65c5500, public_65c5500);
extern "C" NAKED register_t __cdecl internal_65c5500()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        cmp edx, 0x400
        mov eax, ecx
        jbe public_65c5513
        xor al, al
        ret 8
        public_65c5513 : nop
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_65c5542
        push ebx
        push edi
        mov ecx, edx
        mov ebx, ecx
        shr ecx, 2
        lea edi, ds:[eax+0x598]
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        pop ebx
        mov dword ptr ds : [eax+0x998], edx
        mov al, 1
        pop esi
        ret 8
        public_65c5542 : nop
        mov dword ptr ds : [eax+0x998], 0
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x65c5500)
    }
}

#undef public_65c5513
#undef public_65c5542
