#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac7c9);

#define public_6efb650 _public_6efb650
#define public_6efb677 _public_6efb677

PROC_DECLARE(0x6efb550, internal_6efb550, public_6efb550);
extern "C" NAKED register_t __cdecl internal_6efb550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac7c9 @0x6efb552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac7c9
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
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi], offset public_6fb43f8
        mov ebp, dword ptr ds : [public_6fb3030]
        xor ebx, ebx
        lea edi, ds:[esi+0x18]
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0x14], 0xFFFFFFFF
        call ebp
        mov al, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ds : [esi+0x1C], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], ebx
        mov cl, byte ptr ss : [esp+0x17]
        push 0x18
        mov byte ptr ss : [esp+0x28], 1
        mov byte ptr ds : [esi+0x28], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x30], ebx
        mov dl, byte ptr ss : [esp+0x1B]
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        push 0x30
        mov byte ptr ss : [esp+0x2C], 2
        mov byte ptr ds : [esi+0x44], dl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 0xC
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov byte ptr ds : [esi+0x54], bl
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 3
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x90], 0x3FC90FDB
        mov dword ptr ds : [esi+0x94], 0x451C4000
        mov dword ptr ds : [esi+0x98], 7
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi], offset public_6fb7ae4
        call ebp
        mov ebx, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6efb677
        mov edi, edi
        public_6efb650 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+0x24]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x24], ecx
        jne public_6efb650
        public_6efb677 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6efb550)
    }
}

#undef public_6efb650
#undef public_6efb677
