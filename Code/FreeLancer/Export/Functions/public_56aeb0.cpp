#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_56aeb0);
CLANG_FORWARD_PROC_SYMBOL(public_591ba0);
CLANG_FORWARD_PROC_SYMBOL(public_591ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5c27c7);

PROC_DECLARE(0x56aeb0, internal_56aeb0, public_56aeb0);
extern "C" NAKED register_t __cdecl internal_56aeb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c27c7 @0x56aeb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c27c7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_5e2934
        mov dword ptr ds : [esi+0x7C], offset public_5e291c
        mov dword ptr ds : [esi+0x80], offset public_5e2914
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        lea edi, ds:[esi+0x5A0]
        mov dword ptr ss : [esp+0x10], edi
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x1C], 0x17
        call public_4de730
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0x16
        call public_4de730
        lea ecx, ds:[esi+0x374]
        mov byte ptr ss : [esp+0x1C], 0x15
        call public_46ba90
        lea ecx, ds:[esi+0x368]
        mov byte ptr ss : [esp+0x1C], 0x14
        call public_46ba90
        lea ecx, ds:[esi+0x35C]
        mov byte ptr ss : [esp+0x1C], 0x13
        call public_46ba90
        lea ecx, ds:[esi+0x350]
        mov byte ptr ss : [esp+0x1C], 0x12
        call public_46ba90
        lea ecx, ds:[esi+0x344]
        mov byte ptr ss : [esp+0x1C], 0x11
        call public_46ba90
        lea ecx, ds:[esi+0x338]
        mov byte ptr ss : [esp+0x1C], 0x10
        call public_46ba90
        lea ecx, ds:[esi+0x32C]
        mov byte ptr ss : [esp+0x1C], 0xF
        call public_46ba90
        mov eax, dword ptr ds : [public_5c62c4]
        push eax
        push 5
        push 0xC
        lea ecx, ds:[esi+0x2F0]
        push ecx
        mov byte ptr ss : [esp+0x2C], 0xE
        call public_5b7ec6
        mov dword ptr ds : [esi+0x2E8], ebx
        mov dword ptr ds : [esi+0x2E4], ebx
        mov dword ptr ds : [esi+0x2E0], ebx
        mov dword ptr ds : [esi+0x2DC], ebx
        mov dword ptr ds : [esi+0x2D8], ebx
        mov dword ptr ds : [esi+0x2D4], ebx
        mov dword ptr ds : [esi+0x2D0], ebx
        mov dword ptr ds : [esi+0x2CC], ebx
        mov dword ptr ds : [esi+0x2C8], ebx
        mov dword ptr ds : [esi+0x2C4], ebx
        lea ecx, ds:[esi+0x28C]
        mov dword ptr ds : [esi+0x2C0], ebx
        mov dword ptr ds : [esi+0x2BC], ebx
        mov dword ptr ds : [esi+0x2B8], ebx
        mov byte ptr ss : [esp+0x1C], bl
        call public_591ef0
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_591ba0
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x56aeb0)
    }
}
