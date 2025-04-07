#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d5a0);
CLANG_FORWARD_PROC_SYMBOL(public_630e010);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_630d5d2 _public_630d5d2
#define public_630d5f7 _public_630d5f7
#define public_630d638 _public_630d638
#define public_630d63a _public_630d63a

PROC_DECLARE(0x630d5a0, internal_630d5a0, public_630d5a0);
extern "C" NAKED register_t __cdecl internal_630d5a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov ax, word ptr ds : [ebx]
        push esi
        mov esi, ecx
        mov word ptr ds : [esi+8], ax
        mov cl, byte ptr ds : [ebx+2]
        movzx eax, ax
        cmp eax, 0x21
        mov byte ptr ds : [esi+0xA], cl
        je public_630d5f7
        cmp eax, 0x4E
        je public_630d5d2
        mov edx, dword ptr ds : [ebx+3]
        mov dword ptr ds : [esi+4], edx
        pop esi
        mov eax, 7
        pop ebx
        ret 4
        public_630d5d2 : nop
        push edi
        push 0x14
        call public_6391d9c
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        lea esi, ds:[ebx+3]
        mov edi, eax
        mov ecx, 5
        rep movsd
        pop edi
        pop esi
        mov eax, 0x17
        pop ebx
        ret 4
        public_630d5f7 : nop
        push 0x18
        call public_6391d9c
        xor edx, edx
        add esp, 4
        cmp eax, edx
        je public_630d638
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+8], dl
        mov byte ptr ds : [eax+9], dl
        mov byte ptr ds : [eax+0xA], dl
        mov byte ptr ds : [eax+0xB], dl
        mov byte ptr ds : [eax+0xC], dl
        mov byte ptr ds : [eax+0xD], dl
        mov byte ptr ds : [eax+0xE], dl
        mov byte ptr ds : [eax+0xF], dl
        mov byte ptr ds : [eax+0x10], dl
        mov byte ptr ds : [eax+0x11], dl
        mov byte ptr ds : [eax+0x12], dl
        mov byte ptr ds : [eax+0x13], dl
        mov byte ptr ds : [eax+0x14], dl
        mov byte ptr ds : [eax+0x15], dl
        jmp public_630d63a
        public_630d638 : nop
        xor eax, eax
        public_630d63a : nop
        push edx
        add ebx, 3
        push ebx
        mov ecx, eax
        mov dword ptr ds : [esi+4], eax
        call public_630e010
        pop esi
        add eax, 3
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x630d5a0)
    }
}

#undef public_630d5d2
#undef public_630d5f7
#undef public_630d638
#undef public_630d63a
