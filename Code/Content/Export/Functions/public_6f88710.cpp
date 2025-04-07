#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f84e60);
CLANG_FORWARD_PROC_SYMBOL(public_6f88710);
CLANG_FORWARD_PROC_SYMBOL(public_6f88940);
CLANG_FORWARD_PROC_SYMBOL(public_6f89230);
CLANG_FORWARD_PROC_SYMBOL(public_6f933c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93740);
CLANG_FORWARD_PROC_SYMBOL(public_6f93cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f800);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0f72);

#define public_6f88866 _public_6f88866
#define public_6f8888f _public_6f8888f

PROC_DECLARE(0x6f88710, internal_6f88710, public_6f88710);
extern "C" NAKED register_t __cdecl internal_6f88710()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0f72 @0x6f88712*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0f72
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebx, ds:[esi-4]
        push edi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ds : [ebx], offset public_6fbc898
        mov dword ptr ds : [esi], offset public_6fbc88c
        mov ecx, ebx
        mov dword ptr ss : [esp+0x30], 5
        call public_6f88940
        lea edi, ds:[esi+0x1DC]
        mov dword ptr ss : [esp+0x18], edi
        mov ebp, dword ptr ds : [public_6fb3034]
        lea ecx, ds:[edi+0x18]
        mov byte ptr ss : [esp+0x30], 6
        call ebp
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 4
        call ebp
        lea edi, ds:[esi+0x18C]
        mov dword ptr ss : [esp+0x18], edi
        lea ecx, ds:[edi+0x34]
        mov byte ptr ss : [esp+0x30], 7
        call public_6f933c0
        lea ecx, ds:[edi+0x1C]
        mov byte ptr ss : [esp+0x30], 9
        call public_6f89230
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x30], 8
        call public_6f9f800
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 3
        call dword ptr ds : [public_6fb325c]
        lea edi, ds:[esi+0x140]
        mov dword ptr ss : [esp+0x10], edi
        mov eax, dword ptr ds : [edi+0x44]
        mov ecx, dword ptr ds : [eax]
        add edi, 0x40
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x3C], 0xA
        call public_6f93740
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x14]
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ss : [esp+0x30], 2
        call public_6f84e60
        lea edi, ds:[esi+0xE8]
        mov dword ptr ss : [esp+0x18], edi
        lea ecx, ds:[edi+0x34]
        mov byte ptr ss : [esp+0x30], 0xB
        call public_6f933c0
        lea ecx, ds:[edi+0x1C]
        mov byte ptr ss : [esp+0x30], 0xD
        call public_6f89230
        mov byte ptr ss : [esp+0x30], 0xC
        lea ecx, ds:[edi+0x10]
        call public_6f9f800
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 1
        call dword ptr ds : [public_6fb325c]
        lea edi, ds:[esi+0xB4]
        mov dword ptr ss : [esp+0x18], edi
        lea ecx, ds:[edi+0x1C]
        mov byte ptr ss : [esp+0x30], 0xF
        call public_6f89230
        mov ecx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [ecx]
        add edi, 0x10
        cmp eax, ecx
        mov byte ptr ss : [esp+0x30], 0xE
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f8888f
        public_6f88866 : nop
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_6f93cd0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp dword ptr ss : [esp+0x10], ecx
        jne public_6f88866
        public_6f8888f : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov byte ptr ss : [esp+0x30], al
        call dword ptr ds : [public_6fb325c]
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ds : [ebx], offset public_6fbc908
        mov dword ptr ds : [esi], offset public_6fbc8fc
        mov ebx, 0x10
        mov dword ptr ss : [esp+0x30], ebx
        lea edi, ds:[esi+0x84]
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ds : [edi], offset public_6fbc700
        lea ecx, ds:[edi+0x20]
        mov byte ptr ss : [esp+0x30], 0x13
        call public_6eec8d0
        lea ecx, ds:[edi+4]
        mov byte ptr ss : [esp+0x30], 0x12
        call ebp
        lea edi, ds:[esi+0x54]
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ds : [edi], offset public_6fbc700
        lea ecx, ds:[edi+0x20]
        mov byte ptr ss : [esp+0x30], 0x14
        call public_6eec8d0
        lea ecx, ds:[edi+4]
        mov byte ptr ss : [esp+0x30], 0x11
        call ebp
        lea ecx, ds:[esi+0x38]
        mov byte ptr ss : [esp+0x30], bl
        call ebp
        mov ecx, dword ptr ss : [esp+0x28]
        lea eax, ds:[esi-4]
        neg eax
        pop edi
        sbb eax, eax
        and eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], offset public_6fb43f8
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6f88710)
    }
}

#undef public_6f88866
#undef public_6f8888f
