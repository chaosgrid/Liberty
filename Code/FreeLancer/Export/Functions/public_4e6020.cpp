#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405890);
CLANG_FORWARD_PROC_SYMBOL(public_4e6020);
CLANG_FORWARD_PROC_SYMBOL(public_51b2f0);
CLANG_FORWARD_PROC_SYMBOL(public_55dec0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_JUMP_SYMBOL(public_5be8f8);

#define public_4e6081 _public_4e6081

PROC_DECLARE(0x4e6020, internal_4e6020, public_4e6020);
extern "C" NAKED register_t __cdecl internal_4e6020()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be8f8 @0x4e6022*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be8f8
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
        xor ebx, ebx
        push edi
        lea edi, ds:[esi+0x28]
        mov ecx, edi
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+8], bl
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        push ebx
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_5c645c]
        mov dword ptr ds : [esi], offset public_5d6eac
        mov dword ptr ds : [esi+0x34], ebx
        cmp dword ptr ds : [edi], ebx
        mov dword ptr ss : [esp+0x20], 1
        je public_4e6081
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c62a8]
        public_4e6081 : nop
        mov dword ptr ds : [esi+0x30], ebx
        lea edi, ds:[esi+0x38]
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 2
        call public_59f860
        lea ebp, ds:[esi+0x364]
        mov ecx, ebp
        mov byte ptr ss : [esp+0x20], 3
        call public_55dec0
        mov dword ptr ds : [esi+0x384], offset public_5cbed8
        mov dword ptr ds : [esi+0x398], ebx
        mov dword ptr ds : [esi+0x39C], ebx
        lea ecx, ds:[esi+0x3A0]
        mov byte ptr ss : [esp+0x20], 7
        call public_405890
        lea ecx, ds:[esi+0x3B8]
        mov byte ptr ss : [esp+0x20], 8
        call public_51b2f0
        mov dword ptr ds : [esi], offset public_5d8e3c
        mov dword ptr ds : [edi], offset public_5d8d84
        mov dword ptr ds : [esi+0xB4], offset public_5d8d74
        mov dword ptr ss : [ebp], offset public_5d8d68
        mov dword ptr ds : [esi+0x384], offset public_5d8d60
        mov eax, dword ptr ds : [public_5c6368]
        mov cx, word ptr ds : [eax]
        pop edi
        mov word ptr ds : [esi+0x3B4], cx
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [esi+0x4D0], bl
        mov dword ptr ds : [esi+0x4CC], ebx
        mov byte ptr ds : [esi+0x4B0], bl
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4e6020)
    }
}

#undef public_4e6081
