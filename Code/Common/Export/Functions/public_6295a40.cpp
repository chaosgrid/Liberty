#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393763);

#define public_6295b01 _public_6295b01
#define public_6295b07 _public_6295b07
#define public_6295b28 _public_6295b28
#define public_6295b3b _public_6295b3b
#define public_6295b47 _public_6295b47

PROC_DECLARE(0x6295a40, internal_6295a40, public_6295a40);
extern "C" NAKED register_t __cdecl internal_6295a40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393763 @0x6295a42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393763
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
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
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ds : [ebx+0x1C], edx
        mov dword ptr ds : [ebx], offset public_639ca04
        mov dword ptr ds : [ebx+0x20], offset public_639b62c
        mov eax, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [ebx+0x24], eax
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [ebx+0x28], ecx
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [ebx+0x20], offset public_639b60c
        mov dword ptr ds : [ebx+0x2C], edx
        mov al, byte ptr ss : [ebp+0x30]
        mov dword ptr ss : [esp+0x14], 0
        mov byte ptr ds : [ebx+0x30], al
        mov dword ptr ds : [ebx+0x20], offset public_639be28
        mov cl, byte ptr ss : [ebp+0x34]
        mov byte ptr ds : [ebx+0x34], cl
        mov eax, dword ptr ss : [ebp+0x38]
        test eax, eax
        mov byte ptr ss : [esp+0x14], 1
        je public_6295b01
        mov ecx, dword ptr ss : [ebp+0x3C]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6295b01 : nop
        test eax, eax
        jge public_6295b07
        xor eax, eax
        public_6295b07 : nop
        imul eax, 0x3C
        push eax
        call public_6391d9c
        mov dword ptr ds : [ebx+0x38], eax
        mov ecx, dword ptr ss : [ebp+0x3C]
        mov edx, eax
        mov eax, dword ptr ss : [ebp+0x38]
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6295b47
        push esi
        push edi
        public_6295b28 : nop
        test edx, edx
        je public_6295b3b
        mov ecx, 0xF
        mov esi, eax
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x24]
        public_6295b3b : nop
        add eax, 0x3C
        add edx, 0x3C
        cmp eax, ecx
        jne public_6295b28
        pop edi
        pop esi
        public_6295b47 : nop
        mov dword ptr ds : [ebx+0x3C], edx
        mov dword ptr ds : [ebx+0x40], edx
        mov ecx, dword ptr ss : [ebp+0x44]
        mov dword ptr ds : [ebx+0x44], ecx
        mov edx, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [ebx+0x48], edx
        mov eax, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [ebx+0x4C], eax
        mov ecx, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [ebx+0x50], ecx
        mov dl, byte ptr ss : [ebp+0x54]
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [ebx+0x54], dl
        mov dword ptr ds : [ebx], offset public_639ce6c
        mov dword ptr ds : [ebx+0x20], offset public_639ce3c
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6295a40)
    }
}

#undef public_6295b01
#undef public_6295b07
#undef public_6295b28
#undef public_6295b3b
#undef public_6295b47
