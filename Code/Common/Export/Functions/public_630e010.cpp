#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d5a0);
CLANG_FORWARD_PROC_SYMBOL(public_630e010);
CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_639633b);

#define public_630e034 _public_630e034
#define public_630e04a _public_630e04a
#define public_630e059 _public_630e059
#define public_630e061 _public_630e061
#define public_630e071 _public_630e071
#define public_630e0a7 _public_630e0a7
#define public_630e0d6 _public_630e0d6
#define public_630e0d8 _public_630e0d8
#define public_630e0f5 _public_630e0f5
#define public_630e0f9 _public_630e0f9

PROC_DECLARE(0x630e010, internal_630e010, public_630e010);
extern "C" NAKED register_t __cdecl internal_630e010()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639633b @0x630e018*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639633b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx]
        test esi, esi
        push edi
        je public_630e071
        public_630e034 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        mov ebp, dword ptr ds : [esi]
        je public_630e04a
        cmp eax, 0x4E
        jne public_630e061
        mov eax, dword ptr ds : [esi+4]
        push eax
        jmp public_630e059
        public_630e04a : nop
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_630e061
        mov ecx, edi
        call public_630e270
        push edi
        public_630e059 : nop
        call public_6391d5a
        add esp, 4
        public_630e061 : nop
        push esi
        call dword ptr ds : [public_639932c]
        add esp, 4
        test ebp, ebp
        mov esi, ebp
        jne public_630e034
        public_630e071 : nop
        xor eax, eax
        mov ecx, 6
        mov edi, ebx
        mov dword ptr ds : [ebx], 0
        rep stosd
        mov ecx, dword ptr ss : [esp+0x28]
        test ecx, ecx
        je public_630e0f9
        mov eax, dword ptr ds : [ecx]
        lea edi, ds:[ecx+4]
        mov dword ptr ds : [ebx+4], eax
        mov ax, word ptr ds : [edi]
        movzx eax, ax
        add edi, 2
        test eax, eax
        jle public_630e0f5
        mov ebp, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x10], eax
        public_630e0a7 : nop
        push 0xC
        call dword ptr ds : [public_6399328]
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov dword ptr ss : [esp+0x20], 0
        je public_630e0d6
        push edi
        mov ecx, esi
        mov dword ptr ds : [esi], 0
        call public_630d5a0
        mov ebp, eax
        jmp public_630e0d8
        public_630e0d6 : nop
        xor esi, esi
        public_630e0d8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add edi, ebp
        dec eax
        mov dword ptr ds : [ebx], esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov ebx, esi
        mov dword ptr ss : [esp+0x10], eax
        jne public_630e0a7
        mov ecx, dword ptr ss : [esp+0x28]
        public_630e0f5 : nop
        mov eax, edi
        sub eax, ecx
        public_630e0f9 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x630e010)
    }
}

#undef public_630e034
#undef public_630e04a
#undef public_630e059
#undef public_630e061
#undef public_630e071
#undef public_630e0a7
#undef public_630e0d6
#undef public_630e0d8
#undef public_630e0f5
#undef public_630e0f9
