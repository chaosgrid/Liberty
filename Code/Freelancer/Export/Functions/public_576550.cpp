#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576550);

#define public_57656f _public_57656f
#define public_576588 _public_576588
#define public_576593 _public_576593

PROC_DECLARE(0x576550, internal_576550, public_576550);
extern "C" NAKED register_t __cdecl internal_576550()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        mov bl, byte ptr ds : [ecx+0x18]
        xor edx, edx
        test bl, bl
        sete dl
        push esi
        inc edx
        test eax, edx
        jne public_57656f
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_57656f : nop
        mov dl, byte ptr ds : [ecx+0x19]
        neg dl
        mov esi, eax
        not esi
        sbb edx, edx
        and edx, 4
        test esi, edx
        je public_576588
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_576588 : nop
        test al, 8
        je public_576593
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_576593 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+4]
        sub eax, dword ptr ds : [ecx+8]
        neg eax
        sbb eax, eax
        pop esi
        inc eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x576550)
    }
}

#undef public_57656f
#undef public_576588
#undef public_576593
