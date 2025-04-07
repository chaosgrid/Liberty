#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630df60);

#define public_630df80 _public_630df80
#define public_630df87 _public_630df87
#define public_630dfa0 _public_630dfa0
#define public_630dfc9 _public_630dfc9
#define public_630dfe1 _public_630dfe1
#define public_630dff1 _public_630dff1
#define public_630e000 _public_630e000

PROC_DECLARE(0x630df60, internal_630df60, public_630df60);
extern "C" NAKED register_t __cdecl internal_630df60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [ecx]
        push esi
        lea esi, ds:[edx-4]
        add ebp, 4
        xor edx, edx
        test eax, eax
        je public_630df87
        nop 
        public_630df80 : nop
        mov eax, dword ptr ds : [eax]
        inc edx
        test eax, eax
        jne public_630df80
        public_630df87 : nop
        mov word ptr ss : [ebp], dx
        mov ebx, dword ptr ds : [ecx]
        sub esi, 2
        add ebp, 2
        test ebx, ebx
        mov dword ptr ss : [esp+0x10], esi
        je public_630e000
        push edi
        lea esp, ss:[esp]
        public_630dfa0 : nop
        mov ax, word ptr ds : [ebx+8]
        mov word ptr ss : [ebp], ax
        mov cl, byte ptr ds : [ebx+0xA]
        mov byte ptr ss : [ebp+2], cl
        movzx eax, word ptr ds : [ebx+8]
        cmp eax, 0x21
        je public_630dfe1
        cmp eax, 0x4E
        je public_630dfc9
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+3], edx
        mov eax, 7
        jmp public_630dff1
        public_630dfc9 : nop
        mov esi, dword ptr ds : [ebx+4]
        lea edi, ss:[ebp+3]
        mov ecx, 5
        rep movsd
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, 0x17
        jmp public_630dff1
        public_630dfe1 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push esi
        lea eax, ss:[ebp+3]
        push eax
        call public_630df60
        add eax, 3
        public_630dff1 : nop
        mov ebx, dword ptr ds : [ebx]
        sub esi, eax
        add ebp, eax
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], esi
        jne public_630dfa0
        pop edi
        public_630e000 : nop
        mov eax, dword ptr ss : [esp+0x14]
        sub eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x630df60)
    }
}

#undef public_630df80
#undef public_630df87
#undef public_630dfa0
#undef public_630dfc9
#undef public_630dfe1
#undef public_630dff1
#undef public_630e000
