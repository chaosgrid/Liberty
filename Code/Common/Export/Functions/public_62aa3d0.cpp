#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2530);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62aa3ed _public_62aa3ed
#define public_62aa3ef _public_62aa3ef
#define public_62aa409 _public_62aa409
#define public_62aa413 _public_62aa413

PROC_DECLARE(0x62aa3d0, internal_62aa3d0, public_62aa3d0);
extern "C" NAKED register_t __cdecl internal_62aa3d0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x194]
        test esi, esi
        je public_62aa413
        mov eax, dword ptr ds : [esi+0xF0]
        test eax, eax
        je public_62aa3ed
        add eax, 0xFFFFFFF8
        jmp public_62aa3ef
        public_62aa3ed : nop
        xor eax, eax
        public_62aa3ef : nop
        cmp eax, dword ptr ss : [esp+0xC]
        jne public_62aa413
        test esi, esi
        je public_62aa409
        mov ecx, esi
        call public_62d2530
        push esi
        call public_6391d5a
        add esp, 4
        public_62aa409 : nop
        mov dword ptr ds : [edi+0x194], 0
        public_62aa413 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62aa3d0)
    }
}

#undef public_62aa3ed
#undef public_62aa3ef
#undef public_62aa409
#undef public_62aa413
