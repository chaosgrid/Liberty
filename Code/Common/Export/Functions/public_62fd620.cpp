#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c29b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e60);
CLANG_FORWARD_PROC_SYMBOL(public_62d6750);
CLANG_FORWARD_PROC_SYMBOL(public_62d9bf0);
CLANG_FORWARD_PROC_SYMBOL(public_62dae20);
CLANG_FORWARD_PROC_SYMBOL(public_62fd620);
CLANG_FORWARD_PROC_SYMBOL(public_63327e0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6395bd3);

#define public_62fd71c _public_62fd71c

PROC_DECLARE(0x62fd620, internal_62fd620, public_62fd620);
extern "C" NAKED register_t __cdecl internal_62fd620()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395bd3 @0x62fd622*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395bd3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x10], esi
        call public_62d2020
        xor ebx, ebx
        lea ecx, ds:[esi+0x2C]
        mov dword ptr ss : [esp+0x18], ebx
        call public_62d4e60
        lea ecx, ds:[esi+0xA4]
        mov byte ptr ss : [esp+0x18], 1
        call public_62d6750
        lea ecx, ds:[esi+0x164]
        mov byte ptr ss : [esp+0x18], 2
        call public_62d9bf0
        lea edi, ds:[esi+0x310]
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        lea ecx, ds:[esi+0x318]
        mov byte ptr ss : [esp+0x18], 5
        call public_63327e0
        lea ecx, ds:[esi+0x370]
        call public_62c29b0
        lea ecx, ds:[esi+0x38C]
        mov byte ptr ss : [esp+0x18], 6
        call public_62dae20
        mov dword ptr ds : [esi], offset public_63a2284
        mov byte ptr ds : [esi+0x2E9], 1
        mov byte ptr ds : [esi+0x2EA], bl
        mov dword ptr ds : [esi+0x2D8], ebx
        mov dword ptr ds : [esi+0x2DC], ebx
        mov dword ptr ds : [esi+0x2E0], ebx
        mov byte ptr ds : [esi+0x2E8], bl
        mov dword ptr ds : [esi+0x2E4], ebx
        mov byte ptr ds : [esi+0x2EB], bl
        mov byte ptr ds : [esi+0x2EC], bl
        mov dword ptr ds : [esi+0x2F0], 0x3FC00000
        mov dword ptr ds : [esi+0x2F4], 3
        mov dword ptr ds : [esi+0x304], ebx
        mov dword ptr ds : [esi+0x308], ebx
        mov dword ptr ds : [esi+0x30C], ebx
        cmp dword ptr ds : [edi], ebx
        je public_62fd71c
        push ebx
        mov ecx, edi
        call public_6341610
        public_62fd71c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0x369], bl
        mov byte ptr ds : [esi+0x366], bl
        mov byte ptr ds : [esi+0x368], bl
        mov byte ptr ds : [esi+0x36A], bl
        mov byte ptr ds : [esi+0x36B], bl
        pop edi
        mov dword ptr ds : [esi+0x358], 0x43480000
        mov dword ptr ds : [esi+0x35C], 0xBF800000
        mov dword ptr ds : [esi+0x360], 0x3F800000
        mov byte ptr ds : [esi+0x365], 1
        mov byte ptr ds : [esi+0x36C], 1
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62fd620)
    }
}

#undef public_62fd71c
