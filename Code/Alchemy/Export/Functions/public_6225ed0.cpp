#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ccc0);
CLANG_FORWARD_PROC_SYMBOL(public_6225890);
CLANG_FORWARD_PROC_SYMBOL(public_62258b0);
CLANG_FORWARD_PROC_SYMBOL(public_6226120);
CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248fbb);

#define public_6225f09 _public_6225f09
#define public_6225f29 _public_6225f29
#define public_6225f2d _public_6225f2d
#define public_6225f32 _public_6225f32
#define public_6225fad _public_6225fad
#define public_6225fb3 _public_6225fb3
#define public_6225fcf _public_6225fcf
#define public_622603f _public_622603f
#define public_622604e _public_622604e
#define public_622606b _public_622606b
#define public_622607b _public_622607b
#define public_62260b4 _public_62260b4
#define public_62260cd _public_62260cd
#define public_62260da _public_62260da
#define public_62260e0 _public_62260e0

PROC_DECLARE(0x6225ed0, internal_6225ed0, public_6225ed0);
extern "C" NAKED register_t __cdecl internal_6225ed0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6248fbb @0x6225ed8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248fbb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp ecx, 8
        jne public_62260cd
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        public_6225f09 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6225f2d
        cmp cl, bl
        je public_6225f29
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6225f2d
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6225f09
        public_6225f29 : nop
        xor eax, eax
        jmp public_6225f32
        public_6225f2d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6225f32 : nop
        cmp eax, ebx
        jne public_62260cd
        push 0xD4
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x34], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov ebp, 1
        je public_6225fad
        lea edi, ds:[esi+0xC]
        mov dword ptr ds : [esi], offset public_624b8b0
        mov ecx, edi
        call public_6244360
        mov dword ptr ds : [edi+0xB4], ebx
        mov dword ptr ds : [edi+0xB8], ebx
        mov dword ptr ds : [edi+0xBC], ebx
        mov dword ptr ds : [edi], offset public_624dd90
        mov dword ptr ds : [edi+0xBC], offset public_6257a48
        mov dword ptr ds : [esi+0xB8], esi
        mov dword ptr ds : [esi+0x24], esi
        mov dword ptr ds : [esi], offset public_624deb0
        mov dword ptr ds : [edi], offset public_624de20
        mov dword ptr ds : [esi+0xD0], ebp
        mov dword ptr ss : [esp+0x34], esi
        jmp public_6225fb3
        public_6225fad : nop
        mov dword ptr ss : [esp+0x34], ebx
        mov esi, ebx
        public_6225fb3 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        jne public_6225fcf
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        jmp public_62260e0
        public_6225fcf : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [esi+0xC]
        lea edi, ds:[esi+0xC]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_62260da
        mov dword ptr ss : [esp+0x14], edi
        lea esi, ds:[edi+0xB4]
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x18], esi
        push ecx
        mov byte ptr ss : [esp+0x30], 2
        mov ecx, esp
        mov dword ptr ss : [esp+0x20], esp
        push ecx
        mov ecx, esi
        call public_62258b0
        push ecx
        mov ecx, esi
        mov edx, esp
        mov dword ptr ss : [esp+0x28], esp
        push edx
        mov byte ptr ss : [esp+0x38], 3
        call public_6225890
        lea eax, ss:[esp+0x40]
        mov ecx, esi
        push eax
        mov byte ptr ss : [esp+0x38], 2
        call public_6226120
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x38], ebx
        cmp eax, ebx
        je public_622604e
        public_622603f : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        jne public_622603f
        public_622604e : nop
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov ebp, dword ptr ds : [edi+0xA0]
        mov esi, dword ptr ds : [edi+0x9C]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x2C], 4
        je public_622607b
        public_622606b : nop
        push esi
        call public_620ccc0
        add esi, 4
        add esp, 4
        cmp esi, ebp
        jne public_622606b
        public_622607b : nop
        mov eax, dword ptr ds : [edi+0x9C]
        push eax
        call public_62460e0
        mov dword ptr ds : [edi+0x9C], ebx
        mov dword ptr ds : [edi+0xA0], ebx
        mov dword ptr ds : [edi+0xA4], ebx
        mov eax, dword ptr ds : [edi+0x7C]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_62260b4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], ebx
        public_62260b4 : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 4
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_62260e0
        public_62260cd : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_62260e0
        public_62260da : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx], esi
        public_62260e0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x6225ed0)
    }
}

#undef public_6225f09
#undef public_6225f29
#undef public_6225f2d
#undef public_6225f32
#undef public_6225fad
#undef public_6225fb3
#undef public_6225fcf
#undef public_622603f
#undef public_622604e
#undef public_622606b
#undef public_622607b
#undef public_62260b4
#undef public_62260cd
#undef public_62260da
#undef public_62260e0
