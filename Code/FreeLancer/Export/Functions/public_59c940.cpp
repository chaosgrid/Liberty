#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_492250);
CLANG_FORWARD_PROC_SYMBOL(public_4b5140);
CLANG_FORWARD_PROC_SYMBOL(public_4b6790);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4dab);

#define public_59c9e8 _public_59c9e8
#define public_59c9ea _public_59c9ea
#define public_59ca2e _public_59ca2e

PROC_DECLARE(0x59c940, internal_59c940, public_59c940);
extern "C" NAKED register_t __cdecl internal_59c940()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4dab @0x59c942*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4dab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push 0x100
        mov dword ptr ss : [esp+0xC], ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_59c9e8
        push edi
        mov ecx, esi
        call public_4b6790
        lea edi, ds:[esi+0x7C]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 1
        mov dword ptr ss : [esp+0x14], edi
        call public_420d40
        lea ecx, ds:[edi+0x14]
        mov byte ptr ss : [esp+0x20], 2
        call public_492250
        lea ecx, ds:[esi+0xA5]
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        call public_4b5140
        mov al, byte ptr ds : [esi+0xA4]
        and al, 0xF8
        lea edi, ds:[esi+0xB8]
        mov ecx, edi
        mov byte ptr ds : [esi+0xA4], al
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov dword ptr ds : [esi], offset public_5e5d34
        pop edi
        jmp public_59c9ea
        public_59c9e8 : nop
        xor esi, esi
        public_59c9ea : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi]
        add eax, 0xC
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call dword ptr ds : [edx+0x24]
        test al, al
        jne public_59ca2e
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        public_59ca2e : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x59c940)
    }
}

#undef public_59c9e8
#undef public_59c9ea
#undef public_59ca2e
