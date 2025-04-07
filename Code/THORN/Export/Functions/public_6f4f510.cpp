#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f510);

#define public_6f4f526 _public_6f4f526
#define public_6f4f528 _public_6f4f528
#define public_6f4f548 _public_6f4f548
#define public_6f4f54c _public_6f4f54c
#define public_6f4f551 _public_6f4f551
#define public_6f4f560 _public_6f4f560
#define public_6f4f568 _public_6f4f568

PROC_DECLARE(0x6f4f510, internal_6f4f510, public_6f4f510);
extern "C" NAKED register_t __cdecl internal_6f4f510()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edx]
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        test ecx, ecx
        push edi
        je public_6f4f560
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, edx
        public_6f4f526 : nop
        mov esi, eax
        public_6f4f528 : nop
        mov bl, byte ptr ds : [ecx]
        mov dl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6f4f54c
        test dl, dl
        je public_6f4f548
        mov bl, byte ptr ds : [ecx+1]
        mov dl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6f4f54c
        add ecx, 2
        add esi, 2
        test dl, dl
        jne public_6f4f528
        public_6f4f548 : nop
        xor ecx, ecx
        jmp public_6f4f551
        public_6f4f54c : nop
        sbb ecx, ecx
        sbb ecx, 0xFFFFFFFF
        public_6f4f551 : nop
        test ecx, ecx
        je public_6f4f568
        mov ecx, dword ptr ds : [edi+4]
        add edi, 4
        inc ebp
        test ecx, ecx
        jne public_6f4f526
        public_6f4f560 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 
        public_6f4f568 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4f510)
    }
}

#undef public_6f4f526
#undef public_6f4f528
#undef public_6f4f548
#undef public_6f4f54c
#undef public_6f4f551
#undef public_6f4f560
#undef public_6f4f568
