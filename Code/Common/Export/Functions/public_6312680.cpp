#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312680);
CLANG_FORWARD_PROC_SYMBOL(public_6312770);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6396441);

#define public_63126d2 _public_63126d2
#define public_63126da _public_63126da
#define public_63126e0 _public_63126e0
#define public_6312700 _public_6312700
#define public_6312744 _public_6312744
#define public_631274e _public_631274e
#define public_631275f _public_631275f

PROC_DECLARE(0x6312680, internal_6312680, public_6312680);
extern "C" NAKED register_t __cdecl internal_6312680()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396441 @0x6312682*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396441
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], 0
        je public_631275f
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], ecx
        mov dl, byte ptr ds : [ebx+8]
        mov byte ptr ss : [ebp+8], dl
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        push esi
        push edi
        jne public_63126d2
        xor eax, eax
        jmp public_63126da
        public_63126d2 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        sub eax, ecx
        sar eax, 5
        public_63126da : nop
        test eax, eax
        jge public_63126e0
        xor eax, eax
        public_63126e0 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [ebx+0xC]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov edi, eax
        je public_631274e
        nop 
        public_6312700 : nop
        test edi, edi
        je public_6312744
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [edi], al
        mov cx, word ptr ds : [esi+2]
        mov word ptr ds : [edi+2], cx
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edi+4], edx
        call public_6312770
        mov cl, byte ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+0xC], cl
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], eax
        mov cl, byte ptr ds : [esi+0x18]
        mov byte ptr ds : [edi+0x18], cl
        mov edx, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi+0x1C], edx
        public_6312744 : nop
        add esi, 0x20
        add edi, 0x20
        cmp esi, ecx
        jne public_6312700
        public_631274e : nop
        mov dword ptr ss : [ebp+0x10], edi
        mov dword ptr ss : [ebp+0x14], edi
        mov ax, word ptr ds : [ebx+0x18]
        pop edi
        pop esi
        mov word ptr ss : [ebp+0x18], ax
        pop ebx
        public_631275f : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6312680)
    }
}

#undef public_63126d2
#undef public_63126da
#undef public_63126e0
#undef public_6312700
#undef public_6312744
#undef public_631274e
#undef public_631275f
