#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed01c0);

#define public_6ed01d6 _public_6ed01d6
#define public_6ed01e0 _public_6ed01e0
#define public_6ed0204 _public_6ed0204
#define public_6ed0214 _public_6ed0214

PROC_DECLARE(0x6ed01c0, internal_6ed01c0, public_6ed01c0);
extern "C" NAKED register_t __cdecl internal_6ed01c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_6ed01d6
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test edx, edx
        sete al
        pop esi
        ret 4
        public_6ed01d6 : nop
        lea eax, ds:[ecx+4]
        push ebx
        lea ebx, ds:[ebx]
        public_6ed01e0 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ed0214
        test cl, cl
        je public_6ed0204
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ed0214
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ed01e0
        public_6ed0204 : nop
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        pop ebx
        mov al, cl
        pop esi
        ret 4
        public_6ed0214 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        xor ecx, ecx
        test eax, eax
        sete cl
        pop ebx
        mov al, cl
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ed01c0)
    }
}

#undef public_6ed01d6
#undef public_6ed01e0
#undef public_6ed0204
#undef public_6ed0214
