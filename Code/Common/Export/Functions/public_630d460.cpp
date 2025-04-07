#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d460);

#define public_630d493 _public_630d493
#define public_630d4aa _public_630d4aa
#define public_630d4d0 _public_630d4d0
#define public_630d4d7 _public_630d4d7
#define public_630d4e6 _public_630d4e6
#define public_630d4f9 _public_630d4f9

PROC_DECLARE(0x630d460, internal_630d460, public_630d460);
extern "C" NAKED register_t __cdecl internal_630d460()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov cx, word ptr ds : [eax+8]
        mov word ptr ds : [edx], cx
        mov cl, byte ptr ds : [eax+0xA]
        mov byte ptr ds : [edx+2], cl
        movzx ecx, word ptr ds : [eax+8]
        cmp ecx, 0x21
        push esi
        push edi
        je public_630d4aa
        cmp ecx, 0x4E
        je public_630d493
        mov eax, dword ptr ds : [eax+4]
        pop edi
        mov dword ptr ds : [edx+3], eax
        mov eax, 7
        pop esi
        ret 8
        public_630d493 : nop
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[edx+3]
        mov ecx, 5
        rep movsd
        pop edi
        mov eax, 0x17
        pop esi
        ret 8
        public_630d4aa : nop
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[edx+3]
        mov edx, dword ptr ds : [ecx+4]
        push ebx
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [ecx]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        add esi, 4
        xor edx, edx
        test eax, eax
        lea ebx, ss:[ebp-4]
        je public_630d4d7
        lea esp, ss:[esp]
        public_630d4d0 : nop
        mov eax, dword ptr ds : [eax]
        inc edx
        test eax, eax
        jne public_630d4d0
        public_630d4d7 : nop
        mov word ptr ds : [esi], dx
        mov edi, dword ptr ds : [ecx]
        add esi, 2
        sub ebx, 2
        test edi, edi
        je public_630d4f9
        public_630d4e6 : nop
        push ebx
        push esi
        mov ecx, edi
        call public_630d460
        mov edi, dword ptr ds : [edi]
        add esi, eax
        sub ebx, eax
        test edi, edi
        jne public_630d4e6
        public_630d4f9 : nop
        sub ebp, ebx
        add ebp, 3
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x630d460)
    }
}

#undef public_630d493
#undef public_630d4aa
#undef public_630d4d0
#undef public_630d4d7
#undef public_630d4e6
#undef public_630d4f9
