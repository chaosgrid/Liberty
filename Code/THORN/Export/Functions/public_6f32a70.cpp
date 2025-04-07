#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fdd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f5893b);

#define public_6f32aa4 _public_6f32aa4
#define public_6f32ac8 _public_6f32ac8
#define public_6f32acc _public_6f32acc
#define public_6f32ad1 _public_6f32ad1
#define public_6f32b07 _public_6f32b07
#define public_6f32b09 _public_6f32b09
#define public_6f32b22 _public_6f32b22
#define public_6f32b43 _public_6f32b43
#define public_6f32b50 _public_6f32b50
#define public_6f32b56 _public_6f32b56
#define public_6f32b58 _public_6f32b58

PROC_DECLARE(0x6f32a70, internal_6f32a70, public_6f32a70);
extern "C" NAKED register_t __cdecl internal_6f32a70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f5893b @0x6f32a78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f5893b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp eax, 0x14
        jne public_6f32b43
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_6f32aa4 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f32acc
        test cl, cl
        je public_6f32ac8
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f32acc
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f32aa4
        public_6f32ac8 : nop
        xor eax, eax
        jmp public_6f32ad1
        public_6f32acc : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f32ad1 : nop
        test eax, eax
        jne public_6f32b43
        push 0x40
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_6f32b07
        mov ecx, esi
        call public_6f2fdd0
        mov dword ptr ds : [esi], offset public_6f5a860
        mov dword ptr ds : [esi+0x3C], 1
        jmp public_6f32b09
        public_6f32b07 : nop
        xor esi, esi
        public_6f32b09 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6f32b22
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        jmp public_6f32b58
        public_6f32b22 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        mov edi, eax
        test edi, edi
        je public_6f32b50
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        mov ecx, dword ptr ss : [esp+0x28]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_6f32b56
        public_6f32b43 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        jmp public_6f32b58
        public_6f32b50 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], esi
        public_6f32b56 : nop
        mov eax, edi
        public_6f32b58 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f32a70)
    }
}

#undef public_6f32aa4
#undef public_6f32ac8
#undef public_6f32acc
#undef public_6f32ad1
#undef public_6f32b07
#undef public_6f32b09
#undef public_6f32b22
#undef public_6f32b43
#undef public_6f32b50
#undef public_6f32b56
#undef public_6f32b58
