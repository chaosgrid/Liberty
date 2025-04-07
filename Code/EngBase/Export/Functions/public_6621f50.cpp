#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f250);
CLANG_FORWARD_PROC_SYMBOL(public_6621f50);

#define public_6621f5b _public_6621f5b
#define public_6621f64 _public_6621f64
#define public_6621f67 _public_6621f67
#define public_6621f7c _public_6621f7c

PROC_DECLARE(0x6621f50, internal_6621f50, public_6621f50);
extern "C" NAKED register_t __cdecl internal_6621f50()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        public_6621f5b : nop
        test esi, esi
        jne public_6621f64
        mov esi, dword ptr ds : [ebx+0x1C]
        jmp public_6621f67
        public_6621f64 : nop
        mov esi, dword ptr ds : [esi+0x14]
        public_6621f67 : nop
        test esi, esi
        je public_6621f7c
        mov ecx, esi
        call public_661f250
        push esi
        mov ecx, edi
        call public_6621f50
        jmp public_6621f5b
        public_6621f7c : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6621f50)
    }
}

#undef public_6621f5b
#undef public_6621f64
#undef public_6621f67
#undef public_6621f7c
