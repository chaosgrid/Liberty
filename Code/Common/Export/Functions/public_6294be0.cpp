#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63936db);

#define public_6294c60 _public_6294c60
#define public_6294c8f _public_6294c8f
#define public_6294cdb _public_6294cdb
#define public_6294ce6 _public_6294ce6
#define public_6294cec _public_6294cec
#define public_6294d10 _public_6294d10
#define public_6294d4a _public_6294d4a
#define public_6294d54 _public_6294d54

PROC_DECLARE(0x6294be0, internal_6294be0, public_6294be0);
extern "C" NAKED register_t __cdecl internal_6294be0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63936db @0x6294be2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63936db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov cx, word ptr ds : [edi+8]
        mov word ptr ds : [esi+8], cx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov al, byte ptr ds : [edi+0x10]
        mov byte ptr ds : [esi+0x10], al
        mov cl, byte ptr ds : [edi+0x11]
        mov byte ptr ds : [esi+0x11], cl
        mov dl, byte ptr ds : [edi+0x12]
        mov byte ptr ds : [esi+0x12], dl
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi+0x1C], edx
        mov dword ptr ds : [esi], offset public_639ca04
        lea ebp, ds:[esi+0x24]
        mov dword ptr ss : [esp+0x20], 0
        lea ebx, ds:[edi+0x24]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x28], 0x100
        mov edi, edi
        public_6294c60 : nop
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+4], 0
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov byte ptr ss : [esp+0x20], 1
        je public_6294c8f
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_6294c8f
        add eax, 8
        test eax, eax
        je public_6294c8f
        push eax
        mov ecx, ebp
        call public_6341610
        public_6294c8f : nop
        mov eax, dword ptr ss : [esp+0x28]
        add ebp, 8
        add ebx, 8
        dec eax
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x28], eax
        jne public_6294c60
        mov eax, dword ptr ds : [edi+0x824]
        mov dword ptr ds : [esi+0x824], eax
        mov ecx, dword ptr ds : [edi+0x828]
        mov dword ptr ds : [esi+0x828], ecx
        mov dl, byte ptr ds : [edi+0x82C]
        mov byte ptr ds : [esi+0x82C], dl
        mov ecx, dword ptr ds : [edi+0x830]
        test ecx, ecx
        mov byte ptr ss : [esp+0x20], 2
        jne public_6294cdb
        xor eax, eax
        jmp public_6294ce6
        public_6294cdb : nop
        mov eax, dword ptr ds : [edi+0x834]
        sub eax, ecx
        sar eax, 5
        public_6294ce6 : nop
        test eax, eax
        jge public_6294cec
        xor eax, eax
        public_6294cec : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov dword ptr ds : [esi+0x830], eax
        mov ebp, dword ptr ds : [edi+0x834]
        mov ecx, eax
        mov eax, dword ptr ds : [edi+0x830]
        add esp, 4
        cmp eax, ebp
        je public_6294d54
        public_6294d10 : nop
        test ecx, ecx
        je public_6294d4a
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [ecx], dl
        mov dx, word ptr ds : [eax+2]
        mov word ptr ds : [ecx+2], dx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov dl, byte ptr ds : [eax+0xC]
        mov byte ptr ds : [ecx+0xC], dl
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [ecx+0x10], edx
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [ecx+0x14], edx
        mov dl, byte ptr ds : [eax+0x18]
        mov byte ptr ds : [ecx+0x18], dl
        mov edx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [ecx+0x1C], edx
        public_6294d4a : nop
        add eax, 0x20
        add ecx, 0x20
        cmp eax, ebp
        jne public_6294d10
        public_6294d54 : nop
        mov dword ptr ds : [esi+0x834], ecx
        mov dword ptr ds : [esi+0x838], ecx
        mov eax, dword ptr ds : [edi+0x83C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x83C], eax
        pop edi
        mov dword ptr ds : [esi], offset public_639cacc
        mov dword ptr ds : [esi+0x20], offset public_639cac0
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6294be0)
    }
}

#undef public_6294c60
#undef public_6294c8f
#undef public_6294cdb
#undef public_6294ce6
#undef public_6294cec
#undef public_6294d10
#undef public_6294d4a
#undef public_6294d54
