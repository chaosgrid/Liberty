#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac1b4);

#define public_6ef3e90 _public_6ef3e90
#define public_6ef3eb3 _public_6ef3eb3

PROC_DECLARE(0x6ef3e30, internal_6ef3e30, public_6ef3e30);
extern "C" NAKED register_t __cdecl internal_6ef3e30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac1b4 @0x6ef3e32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac1b4
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
        mov eax, dword ptr ds : [esi+0x64]
        xor ebx, ebx
        push eax
        mov dword ptr ss : [esp+0x24], ebx
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov eax, dword ptr ds : [esi+0x48]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov edi, dword ptr ds : [esi+0x2C]
        mov ebp, dword ptr ds : [esi+0x30]
        add esp, 8
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], edi
        je public_6ef3eb3
        lea ecx, ds:[ecx]
        public_6ef3e90 : nop
        lea ecx, ds:[edi+0x24]
        mov byte ptr ss : [esp+0x20], 1
        call public_6eec8d0
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], bl
        call public_6eec8d0
        add edi, 0x38
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], edi
        jne public_6ef3e90
        public_6ef3eb3 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov ecx, dword ptr ds : [esi+0x18]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6ef3e30)
    }
}

#undef public_6ef3e90
#undef public_6ef3eb3
