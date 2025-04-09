#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ca80);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8cf1);

#define public_42cba3 _public_42cba3

PROC_DECLARE(0x42ca80, internal_42ca80, public_42ca80);
extern "C" NAKED register_t __cdecl internal_42ca80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8cf1 @0x42ca82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8cf1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_42cba3
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi+4]
        lea ebx, ds:[esi+8]
        mov ecx, ebx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], offset public_5ca604
        call dword ptr ds : [public_5c69a0]
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov dl, byte ptr ds : [edi+0x18]
        mov byte ptr ds : [esi+0x18], dl
        mov al, byte ptr ds : [edi+0x19]
        mov byte ptr ds : [esi+0x19], al
        mov eax, dword ptr ds : [esi+0x18]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x1A]
        and eax, 0xFFF0FFFF
        and ecx, 0xF
        shl ecx, 0x10
        xor ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [edi+0x18]
        xor eax, ecx
        and eax, 0xF00000
        xor eax, ecx
        mov dword ptr ds : [esi+0x18], eax
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x1B]
        and eax, 0xFEFFFFFF
        and ecx, 1
        shl ecx, 0x18
        xor ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [edi+0x18]
        xor eax, ecx
        and eax, 0x2000000
        xor eax, ecx
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [edi+0x18]
        xor ecx, eax
        and ecx, 0x4000000
        xor ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [edi+0x18]
        xor eax, ecx
        and eax, 0x8000000
        xor eax, ecx
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [edi+0x18]
        xor ecx, eax
        and ecx, 0x10000000
        xor ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [edi+0x18]
        xor edx, ecx
        and edx, 0x20000000
        xor edx, ecx
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x24], edx
        mov ax, word ptr ds : [edi+0x28]
        mov word ptr ds : [esi+0x28], ax
        mov cx, word ptr ds : [edi+0x2A]
        pop edi
        mov word ptr ds : [esi+0x2A], cx
        mov dword ptr ds : [esi], offset public_5ca36c
        pop ebx
        public_42cba3 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x42ca80)
    }
}

#undef public_42cba3
