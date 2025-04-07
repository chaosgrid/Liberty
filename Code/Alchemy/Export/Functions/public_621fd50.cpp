#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62212c0);
CLANG_FORWARD_PROC_SYMBOL(public_6221300);
CLANG_FORWARD_JUMP_SYMBOL(public_6248b38);

#define public_621fdc4 _public_621fdc4
#define public_621fde4 _public_621fde4
#define public_621fde8 _public_621fde8
#define public_621fded _public_621fded
#define public_621fe15 _public_621fe15
#define public_621fe2b _public_621fe2b
#define public_621fe42 _public_621fe42
#define public_621fe4c _public_621fe4c
#define public_621fead _public_621fead
#define public_621fec4 _public_621fec4
#define public_621fee2 _public_621fee2
#define public_621fef9 _public_621fef9
#define public_621ff13 _public_621ff13
#define public_621ff19 _public_621ff19
#define public_621ff39 _public_621ff39

PROC_DECLARE(0x621fd50, internal_621fd50, public_621fd50);
extern "C" NAKED register_t __cdecl internal_621fd50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248b38 @0x621fd52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248b38
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        mov eax, dword ptr ds : [public_6257a3c]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ds : [eax]
        push edi
        mov ecx, dword ptr ds : [edi]
        call dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [public_6257a3c]
        push eax
        push edx
        call dword ptr ds : [esi+0x14]
        mov ebp, eax
        mov dword ptr ss : [esp+0x44], 0
        mov esi, dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x44]
        push ecx
        push ebp
        mov eax, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x44], 0
        call dword ptr ds : [eax+0x2C]
        test eax, eax
        jl public_621fe42
        mov edx, dword ptr ds : [edi]
        mov ebp, dword ptr ss : [esp+0x44]
        push edi
        call dword ptr ds : [edx+0x14]
        mov esi, eax
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+0x14]
        public_621fdc4 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_621fde8
        test cl, cl
        je public_621fde4
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_621fde8
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_621fdc4
        public_621fde4 : nop
        xor eax, eax
        jmp public_621fded
        public_621fde8 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_621fded : nop
        test eax, eax
        je public_621fe15
/*FIXUP push offset public_625614c @0x621fdf1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625614c
        push 0x2D3
        mov eax, 0x100001
/*FIXUP push offset public_62560b8 @0x621fe00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62560b8
/*FIXUP push offset public_625506c @0x621fe05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_621fe15 : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        test eax, eax
        je public_621fe2b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_621fe2b : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebp
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 0xC
        public_621fe42 : nop
        mov eax, dword ptr ss : [esp+0x48]
        test eax, eax
        je public_621fe4c
        mov dword ptr ds : [eax], ebp
        public_621fe4c : nop
        mov dword ptr ss : [esp+0x1C], edi
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x28], ecx
        push edx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x3C], 1
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], eax
        call public_62212c0
        lea eax, ss:[esp+0x20]
        lea ecx, ss:[esp+0xC]
        push eax
        push ecx
        lea ecx, ds:[esi+4]
        mov byte ptr ss : [esp+0x40], 2
        call public_6221300
        xor edi, edi
        mov byte ptr ss : [esp+0x38], 1
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, edi
        je public_621fead
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x2C], edi
        public_621fead : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+0x38], 0
        cmp eax, edi
        je public_621fec4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x1C], edi
        public_621fec4 : nop
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        jne public_621fef9
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        cmp eax, edi
        je public_621fee2
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_621fee2 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebp
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 0xC
        public_621fef9 : nop
        mov eax, dword ptr ss : [esp+0xC]
        add eax, 0x10
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ds : [esi+0x1C]
        cmp ecx, edi
        je public_621ff13
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+4], ecx
        jmp public_621ff19
        public_621ff13 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+0x18], eax
        public_621ff19 : nop
        mov dword ptr ds : [esi+0x1C], eax
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ss : [esp+0x44]
        inc edx
        cmp eax, edi
        mov dword ptr ds : [esi+0x20], edx
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        je public_621ff39
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_621ff39 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 0xC
        UNREACHABLE_TRAP(0x621fd50)
    }
}

#undef public_621fdc4
#undef public_621fde4
#undef public_621fde8
#undef public_621fded
#undef public_621fe15
#undef public_621fe2b
#undef public_621fe42
#undef public_621fe4c
#undef public_621fead
#undef public_621fec4
#undef public_621fee2
#undef public_621fef9
#undef public_621ff13
#undef public_621ff19
#undef public_621ff39
