#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_426de0);
CLANG_FORWARD_PROC_SYMBOL(public_4fee30);
CLANG_FORWARD_PROC_SYMBOL(public_4ff090);
CLANG_FORWARD_PROC_SYMBOL(public_501720);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf624);

PROC_DECLARE(0x4fee30, internal_4fee30, public_4fee30);
extern "C" NAKED register_t __cdecl internal_4fee30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf624 @0x4fee32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf624
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+4]
        mov dword ptr ss : [esp+0x10], esi
        call dword ptr ds : [public_5c6030]
/*FIXUP push offset _public_426de0 @0x4fee5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_426de0
/*FIXUP push offset _public_4ff090 @0x4fee60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4ff090
        push 2
        push 0x34
        lea eax, ds:[esi+0xC]
        push eax
        call public_5b7fba
        lea ebx, ds:[esi+0xC8]
        xor edi, edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x28], edi
        call public_501720
        mov ebp, 0x3F800000
        mov dword ptr ds : [ebx+0x20], edi
        mov dword ptr ds : [ebx+0x24], ebp
        lea ebx, ds:[esi+0xF0]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 1
        call public_501720
        mov dword ptr ds : [ebx+0x20], edi
        mov dword ptr ds : [ebx+0x24], ebp
        lea ebx, ds:[esi+0x118]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 2
        call public_501720
        mov dword ptr ds : [ebx+0x20], edi
        mov dword ptr ds : [ebx+0x24], ebp
        lea ebx, ds:[esi+0x140]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 3
        call public_501720
        mov dword ptr ds : [ebx+0x20], edi
        mov dword ptr ds : [ebx+0x24], ebp
        lea ebx, ds:[esi+0x168]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 4
        call public_501720
        mov dword ptr ds : [ebx+0x20], edi
        mov dword ptr ds : [ebx+0x24], ebp
        lea ebx, ds:[esi+0x190]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 5
        call public_501720
        mov dword ptr ds : [ebx+0x20], edi
        mov dword ptr ds : [ebx+0x24], ebp
        lea ebx, ds:[esi+0x1B8]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 6
        call public_501720
        mov dword ptr ds : [ebx+0x20], edi
        mov dword ptr ds : [ebx+0x24], ebp
        lea ebx, ds:[esi+0x1E0]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 7
        call public_501720
        mov dword ptr ds : [ebx+0x20], edi
        mov dword ptr ds : [ebx+0x24], ebp
        lea ebx, ds:[esi+0x208]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 8
        call public_501720
        mov dword ptr ds : [ebx+0x20], edi
        mov dword ptr ds : [ebx+0x24], ebp
        lea ebx, ds:[esi+0x230]
        mov ecx, ebx
        mov byte ptr ss : [esp+0x28], 9
        call public_4215b0
        mov dword ptr ds : [ebx+0x2C], edi
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x24], edi
        mov dword ptr ds : [esi+0x2AC], edi
        mov dword ptr ds : [esi+0x2B0], ebp
        mov dword ptr ds : [esi+0x2B4], edi
/*FIXUP push offset public_5da730 @0x4fef7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da730
        mov dword ptr ds : [esi], offset public_5da71c
        call dword ptr ds : [public_5c6020]
        mov dword ptr ds : [esi+4], eax
        mov eax, 0x42480000
        mov dword ptr ds : [esi+0x8C], eax
        mov dword ptr ds : [esi+0x88], eax
        mov edx, edi
        lea ecx, ds:[esi+0xB0]
        mov dword ptr ds : [ecx], edx
        mov eax, edi
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov ecx, edi
        lea eax, ds:[esi+0xBC]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax+8], ecx
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov ecx, esi
        mov byte ptr ds : [esi+0x74], 1
        mov dword ptr ds : [esi+0x78], 0xB
        mov dword ptr ds : [esi+0x84], edi
        mov dword ptr ds : [esi+0x80], edi
        mov dword ptr ds : [esi+0x7C], edi
        mov dword ptr ds : [esi+0x90], ebp
        mov dword ptr ds : [esi+0x94], 0x37FBA882
        mov dword ptr ds : [esi+0x98], 0x3D75C28F
        mov dword ptr ds : [esi+0x9C], 0x41000000
        mov dword ptr ds : [esi+0xA0], 0x43480000
        mov dword ptr ds : [esi+0xA4], 0x41400000
        mov dword ptr ds : [esi+0xA8], 0xC0490FDB
        mov dword ptr ds : [esi+0xAC], 0x40490FDB
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ds : [esi+0x2A4], edi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x2A8], edi
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x4fee30)
    }
}
