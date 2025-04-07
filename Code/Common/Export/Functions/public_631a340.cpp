#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62baf00);
CLANG_FORWARD_PROC_SYMBOL(public_6316e20);
CLANG_FORWARD_PROC_SYMBOL(public_631a340);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6396a1b);

#define public_631a3c6 _public_631a3c6
#define public_631a3ce _public_631a3ce
#define public_631a3d4 _public_631a3d4
#define public_631a3f3 _public_631a3f3
#define public_631a40b _public_631a40b
#define public_631a457 _public_631a457
#define public_631a45f _public_631a45f
#define public_631a465 _public_631a465
#define public_631a4e9 _public_631a4e9

PROC_DECLARE(0x631a340, internal_631a340, public_631a340);
extern "C" NAKED register_t __cdecl internal_631a340()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396a1b @0x631a342*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396a1b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+4], edi
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0
        je public_631a4e9
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        add edi, 4
        mov dword ptr ds : [edi], ecx
        mov dl, byte ptr ds : [esi+8]
        lea ebp, ds:[esi+8]
        lea ebx, ds:[edi+4]
        push 0
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], edi
        mov byte ptr ds : [ebx], dl
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991a8]
        mov dl, byte ptr ds : [esi+0x18]
        mov byte ptr ds : [edi+0x14], dl
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x20], 1
        jne public_631a3c6
        xor eax, eax
        jmp public_631a3ce
        public_631a3c6 : nop
        mov eax, dword ptr ds : [esi+0x20]
        sub eax, ecx
        sar eax, 4
        public_631a3ce : nop
        test eax, eax
        jge public_631a3d4
        xor eax, eax
        public_631a3d4 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        mov dword ptr ds : [edi+0x18], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov ebp, dword ptr ds : [esi+0x1C]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov ebx, eax
        je public_631a40b
        public_631a3f3 : nop
        push ebp
        push ebx
        call public_62baf00
        mov eax, dword ptr ss : [esp+0x34]
        add ebp, 0x10
        add esp, 8
        add ebx, 0x10
        cmp ebp, eax
        jne public_631a3f3
        public_631a40b : nop
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x20], ebx
        mov al, byte ptr ds : [esi+0x28]
        lea ebp, ds:[esi+0x28]
        lea ebx, ds:[edi+0x24]
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ds : [ebx], al
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ds : [esi+0x38]
        lea ebx, ds:[edi+0x34]
        mov byte ptr ds : [ebx], al
        mov ecx, dword ptr ds : [esi+0x3C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x20], 3
        jne public_631a457
        xor eax, eax
        jmp public_631a45f
        public_631a457 : nop
        mov eax, dword ptr ds : [esi+0x40]
        sub eax, ecx
        sar eax, 4
        public_631a45f : nop
        test eax, eax
        jge public_631a465
        xor eax, eax
        public_631a465 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [esi+0x3C]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_6316e20
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov cl, byte ptr ds : [esi+0x48]
        lea ebp, ds:[esi+0x48]
        lea ebx, ds:[edi+0x44]
        mov byte ptr ds : [ebx], cl
        push 0
        mov ecx, ebx
        mov byte ptr ss : [esp+0x24], 4
        call dword ptr ds : [public_63991b8]
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991a8]
        mov cl, byte ptr ds : [esi+0x58]
        lea ebx, ds:[esi+0x58]
        lea esi, ds:[edi+0x54]
        mov byte ptr ds : [esi], cl
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 5
        call dword ptr ds : [public_63991b8]
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_63991a8]
        pop esi
        pop ebp
        pop ebx
        public_631a4e9 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x631a340)
    }
}

#undef public_631a3c6
#undef public_631a3ce
#undef public_631a3d4
#undef public_631a3f3
#undef public_631a40b
#undef public_631a457
#undef public_631a45f
#undef public_631a465
#undef public_631a4e9
