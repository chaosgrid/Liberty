#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393a31);

#define public_629da3e _public_629da3e
#define public_629da44 _public_629da44
#define public_629da71 _public_629da71
#define public_629dabf _public_629dabf
#define public_629dae1 _public_629dae1
#define public_629dafb _public_629dafb

PROC_DECLARE(0x629d9a0, internal_629d9a0, public_629d9a0);
extern "C" NAKED register_t __cdecl internal_629d9a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393a31 @0x629d9a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393a31
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], eax
        mov cx, word ptr ss : [ebp+8]
        mov word ptr ds : [ebx+8], cx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        mov al, byte ptr ss : [ebp+0x10]
        mov byte ptr ds : [ebx+0x10], al
        mov cl, byte ptr ss : [ebp+0x11]
        mov byte ptr ds : [ebx+0x11], cl
        mov dl, byte ptr ss : [ebp+0x12]
        mov byte ptr ds : [ebx+0x12], dl
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [ebx+0x14], eax
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ebx+0x18], ecx
        mov edx, dword ptr ss : [ebp+0x1C]
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [ebx+0x1C], edx
        mov dword ptr ds : [ebx], offset public_639ca04
        lea edi, ds:[ebx+0x20]
        lea esi, ss:[ebp+0x20]
        mov ecx, 0xC
        rep movsd
        mov al, byte ptr ss : [ebp+0x50]
        mov byte ptr ds : [ebx+0x50], al
        mov eax, dword ptr ss : [ebp+0x54]
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0
        je public_629da3e
        mov ecx, dword ptr ss : [ebp+0x58]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_629da3e : nop
        test eax, eax
        jge public_629da44
        xor eax, eax
        public_629da44 : nop
        lea edx, ds:[eax+eax*8]
        shl edx, 2
        push edx
        call public_6391d9c
        mov dword ptr ds : [ebx+0x54], eax
        mov edx, dword ptr ss : [ebp+0x58]
        mov ebp, dword ptr ss : [ebp+0x54]
        add esp, 4
        cmp ebp, edx
        mov esi, eax
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x10], esi
        je public_629dafb
        lea edi, ss:[ebp+8]
        public_629da71 : nop
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        je public_629dae1
        mov eax, dword ptr ds : [edi-8]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi-4]
        mov dword ptr ds : [esi+4], ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [ecx+4], 0
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov byte ptr ss : [esp+0x28], 2
        je public_629dabf
        add eax, 0xFFFFFF64
        test eax, eax
        je public_629dabf
        add eax, 0x9C
        test eax, eax
        je public_629dabf
        push eax
        call public_6341610
        mov edx, dword ptr ss : [esp+0x30]
        public_629dabf : nop
        lea eax, ds:[edi+8]
        mov ebp, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x10]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x1C], ecx
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x20], eax
        public_629dae1 : nop
        add edi, 0x24
        add esi, 0x24
        lea ecx, ds:[edi-8]
        cmp ecx, edx
        mov byte ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x10], esi
        jne public_629da71
        public_629dafb : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ebx+0x58], esi
        mov dword ptr ds : [ebx+0x5C], esi
        pop edi
        pop esi
        mov dword ptr ds : [ebx], offset public_639d8c4
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x629d9a0)
    }
}

#undef public_629da3e
#undef public_629da44
#undef public_629da71
#undef public_629dabf
#undef public_629dae1
#undef public_629dafb
