#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f5899b);

#define public_6f32fa4 _public_6f32fa4
#define public_6f32fc8 _public_6f32fc8
#define public_6f32fcc _public_6f32fcc
#define public_6f32fd1 _public_6f32fd1
#define public_6f33007 _public_6f33007
#define public_6f33009 _public_6f33009
#define public_6f33022 _public_6f33022
#define public_6f33043 _public_6f33043
#define public_6f33050 _public_6f33050
#define public_6f33056 _public_6f33056
#define public_6f33058 _public_6f33058

PROC_DECLARE(0x6f32f70, internal_6f32f70, public_6f32f70);
extern "C" NAKED register_t __cdecl internal_6f32f70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f5899b @0x6f32f78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f5899b
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
        jne public_6f33043
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_6f32fa4 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f32fcc
        test cl, cl
        je public_6f32fc8
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f32fcc
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f32fa4
        public_6f32fc8 : nop
        xor eax, eax
        jmp public_6f32fd1
        public_6f32fcc : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f32fd1 : nop
        test eax, eax
        jne public_6f33043
        push 0x40
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_6f33007
        mov ecx, esi
        call public_6f2ffb0
        mov dword ptr ds : [esi], offset public_6f5a938
        mov dword ptr ds : [esi+0x3C], 1
        jmp public_6f33009
        public_6f33007 : nop
        xor esi, esi
        public_6f33009 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6f33022
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        jmp public_6f33058
        public_6f33022 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        mov edi, eax
        test edi, edi
        je public_6f33050
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        mov ecx, dword ptr ss : [esp+0x28]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_6f33056
        public_6f33043 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        jmp public_6f33058
        public_6f33050 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], esi
        public_6f33056 : nop
        mov eax, edi
        public_6f33058 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f32f70)
    }
}

#undef public_6f32fa4
#undef public_6f32fc8
#undef public_6f32fcc
#undef public_6f32fd1
#undef public_6f33007
#undef public_6f33009
#undef public_6f33022
#undef public_6f33043
#undef public_6f33050
#undef public_6f33056
#undef public_6f33058
