#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4dae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4df60);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf026);

#define public_6f4b154 _public_6f4b154
#define public_6f4b230 _public_6f4b230
#define public_6f4b259 _public_6f4b259
#define public_6f4b271 _public_6f4b271

PROC_DECLARE(0x6f4b0d0, internal_6f4b0d0, public_6f4b0d0);
extern "C" NAKED register_t __cdecl internal_6f4b0d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf026 @0x6f4b0d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf026
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x2C]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x18], esi
        call public_6f0e3e0
        mov ecx, dword ptr ds : [public_6fcf254]
        lea ebp, ds:[esi+0x1B0]
        push ecx
        xor ebx, ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [public_6fb3204]
        mov dl, byte ptr ss : [esp+0x40]
        mov al, byte ptr ss : [esp+0x40]
        lea ecx, ds:[esi+0x1E4]
        mov byte ptr ss : [esp+0x34], 1
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], 1
        call public_6f4df60
        cmp edi, ebx
        mov byte ptr ss : [esp+0x34], 2
        mov dword ptr ds : [esi+0x1F8], edi
        je public_6f4b154
        mov edx, dword ptr ds : [edi+4]
        lea ecx, ds:[edi+4]
        call dword ptr ds : [edx]
        public_6f4b154 : nop
        mov al, byte ptr ss : [esp+0x40]
        mov byte ptr ds : [esi+0x1FC], al
        mov dword ptr ds : [esi+0x200], ebx
        mov dword ptr ds : [esi+0x204], ebx
        mov dword ptr ds : [esi+0x208], ebx
        mov dl, byte ptr ss : [esp+0x40]
        mov al, byte ptr ss : [esp+0x40]
        lea ecx, ds:[esi+0x20C]
        mov byte ptr ss : [esp+0x34], 4
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_6f4dae0
        mov cl, byte ptr ss : [esp+0x40]
        mov dword ptr ds : [esi+0x220], ebx
        mov byte ptr ds : [esi+0x224], cl
        mov dword ptr ds : [esi+0x228], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        mov dword ptr ds : [esi+0x230], ebx
        mov eax, dword ptr ds : [esi+0x1F8]
        add eax, 0x24
        lea ecx, ds:[esi+0x68]
        push eax
        mov byte ptr ss : [esp+0x38], 6
        mov dword ptr ds : [esi+0x234], ebx
        mov dword ptr ds : [esi+0x23C], ebx
        mov dword ptr ds : [esi], offset public_6fbb288
        mov dword ptr ss : [ebp], offset public_6fbb26c
        mov dword ptr ds : [esi+0x1C0], offset public_6fbb258
        call dword ptr ds : [public_6fb3088]
        lea edx, ds:[esi+4]
        push 0x3F800000
        push edx
        mov dword ptr ds : [esi+0x14], 0x3F800000
        call dword ptr ds : [public_6fb36a4]
        mov eax, dword ptr ds : [edi+0xC]
        lea ebp, ds:[edi+0xC]
        add esp, 8
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x40], ebp
        call public_6f4c3b0
        inc dword ptr ds : [public_6fd0c8c]
        mov edi, dword ptr ds : [esi+0x200]
        cmp edi, dword ptr ds : [esi+0x204]
        je public_6f4b271
        lea esp, ss:[esp]
        public_6f4b230 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+0xC]
        push eax
        mov ecx, esi
        call public_6f1b6d0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x40], eax
        call dword ptr ds : [edx+8]
        test al, al
        mov ebp, dword ptr ss : [esp+0x40]
        je public_6f4b259
        mov eax, dword ptr ss : [ebp]
        push ebx
        mov ecx, ebp
        call dword ptr ds : [eax+4]
        public_6f4b259 : nop
        mov ecx, ebp
        call public_6f1cee0
        mov eax, dword ptr ds : [esi+0x204]
        add edi, 4
        cmp edi, eax
        jne public_6f4b230
        mov ebp, dword ptr ss : [esp+0x3C]
        public_6f4b271 : nop
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1D], bl
        mov byte ptr ss : [esp+0x1E], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov byte ptr ss : [esp+0x26], bl
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov edi, dword ptr ds : [public_6fb369c]
        push 1
        push 0xA
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ebp
        mov byte ptr ss : [esp+0x44], 7
        call edi
        add esp, 0x10
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x34], 6
        call dword ptr ds : [public_6fb3034]
        push 1
        push 8
        lea eax, ds:[esi+0x68]
        push eax
        push ebp
        call edi
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 0x10
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x6f4b0d0)
    }
}

#undef public_6f4b154
#undef public_6f4b230
#undef public_6f4b259
#undef public_6f4b271
