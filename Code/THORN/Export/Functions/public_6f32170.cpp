#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f5887b);

#define public_6f321a4 _public_6f321a4
#define public_6f321c8 _public_6f321c8
#define public_6f321cc _public_6f321cc
#define public_6f321d1 _public_6f321d1
#define public_6f32207 _public_6f32207
#define public_6f32209 _public_6f32209
#define public_6f32222 _public_6f32222
#define public_6f32243 _public_6f32243
#define public_6f32250 _public_6f32250
#define public_6f32256 _public_6f32256
#define public_6f32258 _public_6f32258

PROC_DECLARE(0x6f32170, internal_6f32170, public_6f32170);
extern "C" NAKED register_t __cdecl internal_6f32170()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f5887b @0x6f32178*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f5887b
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
        jne public_6f32243
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_6f321a4 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f321cc
        test cl, cl
        je public_6f321c8
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f321cc
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f321a4
        public_6f321c8 : nop
        xor eax, eax
        jmp public_6f321d1
        public_6f321cc : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f321d1 : nop
        test eax, eax
        jne public_6f32243
        push 0x2C
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_6f32207
        mov ecx, esi
        call public_6f2edf0
        mov dword ptr ds : [esi], offset public_6f5a6b0
        mov dword ptr ds : [esi+0x28], 1
        jmp public_6f32209
        public_6f32207 : nop
        xor esi, esi
        public_6f32209 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6f32222
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        jmp public_6f32258
        public_6f32222 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        mov edi, eax
        test edi, edi
        je public_6f32250
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        mov ecx, dword ptr ss : [esp+0x28]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        jmp public_6f32256
        public_6f32243 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        jmp public_6f32258
        public_6f32250 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], esi
        public_6f32256 : nop
        mov eax, edi
        public_6f32258 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f32170)
    }
}

#undef public_6f321a4
#undef public_6f321c8
#undef public_6f321cc
#undef public_6f321d1
#undef public_6f32207
#undef public_6f32209
#undef public_6f32222
#undef public_6f32243
#undef public_6f32250
#undef public_6f32256
#undef public_6f32258
