#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fd500);

#define public_4fd510 _public_4fd510
#define public_4fd514 _public_4fd514
#define public_4fd534 _public_4fd534
#define public_4fd538 _public_4fd538
#define public_4fd53d _public_4fd53d
#define public_4fd54d _public_4fd54d

PROC_DECLARE(0x4fd500, internal_4fd500, public_4fd500);
extern "C" NAKED register_t __cdecl internal_4fd500()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        mov edi, offset public_612a68
        nop 
        public_4fd510 : nop
        mov ecx, dword ptr ds : [edi]
        mov esi, eax
        public_4fd514 : nop
        mov bl, byte ptr ds : [ecx]
        mov dl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_4fd538
        test dl, dl
        je public_4fd534
        mov bl, byte ptr ds : [ecx+1]
        mov dl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_4fd538
        add ecx, 2
        add esi, 2
        test dl, dl
        jne public_4fd514
        public_4fd534 : nop
        xor ecx, ecx
        jmp public_4fd53d
        public_4fd538 : nop
        sbb ecx, ecx
        sbb ecx, 0xFFFFFFFF
        public_4fd53d : nop
        test ecx, ecx
        je public_4fd54d
        add edi, 0x28
        inc ebp
        cmp edi, offset public_6131c0
        jl public_4fd510
        public_4fd54d : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4fd500)
    }
}

#undef public_4fd510
#undef public_4fd514
#undef public_4fd534
#undef public_4fd538
#undef public_4fd53d
#undef public_4fd54d
