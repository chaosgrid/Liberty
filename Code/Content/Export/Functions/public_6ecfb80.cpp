#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfb80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ecfbae _public_6ecfbae
#define public_6ecfbb4 _public_6ecfbb4
#define public_6ecfbd2 _public_6ecfbd2
#define public_6ecfbec _public_6ecfbec

PROC_DECLARE(0x6ecfb80, internal_6ecfb80, public_6ecfb80);
extern "C" NAKED register_t __cdecl internal_6ecfb80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi]
        mov ebp, ecx
        mov byte ptr ss : [ebp], al
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_6ecfbae
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6ecfbae : nop
        test eax, eax
        jge public_6ecfbb4
        xor eax, eax
        public_6ecfbb4 : nop
        imul eax, 0x88
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6ecfbec
        public_6ecfbd2 : nop
        push esi
        push edi
        call public_6ed2a60
        add esi, 0x88
        add esp, 8
        add edi, 0x88
        cmp esi, ebx
        jne public_6ecfbd2
        public_6ecfbec : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ecfb80)
    }
}

#undef public_6ecfbae
#undef public_6ecfbb4
#undef public_6ecfbd2
#undef public_6ecfbec
