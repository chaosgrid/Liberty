#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d6c0);
CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639631b);

#define public_630d71a _public_630d71a
#define public_630d749 _public_630d749
#define public_630d74b _public_630d74b
#define public_630d74e _public_630d74e

PROC_DECLARE(0x630d6c0, internal_630d6c0, public_630d6c0);
extern "C" NAKED register_t __cdecl internal_630d6c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639631b @0x630d6c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639631b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, ebp
        mov edx, dword ptr ds : [eax]
        mov ebx, ecx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        movzx eax, word ptr ds : [ebx+8]
        cmp eax, 0x21
        push esi
        push edi
        je public_630d71a
        cmp eax, 0x4E
        jne public_630d74e
        push 0x14
        call public_6391d9c
        mov dword ptr ds : [ebx+4], eax
        mov esi, dword ptr ss : [ebp+4]
        mov ecx, 5
        mov edi, eax
        add esp, 4
        rep movsd
        jmp public_630d74e
        public_630d71a : nop
        push 0x18
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_630d749
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi], 0
        call public_630dda0
        jmp public_630d74b
        public_630d749 : nop
        xor esi, esi
        public_630d74b : nop
        mov dword ptr ds : [ebx+4], esi
        public_630d74e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x630d6c0)
    }
}

#undef public_630d71a
#undef public_630d749
#undef public_630d74b
#undef public_630d74e
