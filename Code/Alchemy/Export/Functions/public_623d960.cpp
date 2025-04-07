#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a64b);

#define public_623d997 _public_623d997
#define public_623d9b7 _public_623d9b7
#define public_623d9bb _public_623d9bb
#define public_623d9c0 _public_623d9c0
#define public_623da33 _public_623da33
#define public_623da35 _public_623da35
#define public_623da4e _public_623da4e
#define public_623da6f _public_623da6f
#define public_623da82 _public_623da82
#define public_623da8f _public_623da8f
#define public_623da95 _public_623da95
#define public_623da97 _public_623da97

PROC_DECLARE(0x623d960, internal_623d960, public_623d960);
extern "C" NAKED register_t __cdecl internal_623d960()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a64b @0x623d968*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a64b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov eax, dword ptr ss : [ebp]
        xor ebx, ebx
        xor edi, edi
        cmp eax, 8
        jne public_623da82
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_623d997 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_623d9bb
        cmp cl, bl
        je public_623d9b7
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_623d9bb
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_623d997
        public_623d9b7 : nop
        xor eax, eax
        jmp public_623d9c0
        public_623d9bb : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_623d9c0 : nop
        cmp eax, ebx
        jne public_623da82
        push 0xB4
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_623da33
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624bf40
        mov ecx, esi
        call public_623fb80
        mov eax, 1
        mov dword ptr ds : [esi+0x98], ebx
        mov byte ptr ds : [esi+0x96], al
        mov dword ptr ds : [esi], offset public_624f6f8
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [edi+0x1C], edi
        mov dword ptr ds : [edi], offset public_624f650
        mov dword ptr ds : [esi], offset public_624f5f0
        mov dword ptr ds : [edi+0xB0], eax
        jmp public_623da35
        public_623da33 : nop
        xor edi, edi
        public_623da35 : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_623da4e
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_623da97
        public_623da4e : nop
        mov edx, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        mov ebp, eax
        cmp ebp, ebx
        je public_623da8f
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, ebx
        je public_623da6f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_623da6f : nop
        push edi
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edx], eax
        jmp public_623da95
        public_623da82 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_623da97
        public_623da8f : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], edi
        public_623da95 : nop
        mov eax, ebp
        public_623da97 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x623d960)
    }
}

#undef public_623d997
#undef public_623d9b7
#undef public_623d9bb
#undef public_623d9c0
#undef public_623da33
#undef public_623da35
#undef public_623da4e
#undef public_623da6f
#undef public_623da82
#undef public_623da8f
#undef public_623da95
#undef public_623da97
