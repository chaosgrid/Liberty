#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_57b8d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb8ad);

#define public_46bf2e _public_46bf2e
#define public_46bf30 _public_46bf30
#define public_46bf71 _public_46bf71

PROC_DECLARE(0x46be00, internal_46be00, public_46be00);
extern "C" NAKED register_t __cdecl internal_46be00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb8ad @0x46be02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb8ad
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push 0x5A8
        mov ebp, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_46bf2e
        mov ecx, esi
        call public_57b8d0
        lea eax, ss:[esp+0xF]
        push eax
        lea ecx, ds:[esi+0x540]
        mov byte ptr ss : [esp+0x20], 1
        call dword ptr ds : [public_5c6f98]
        mov dword ptr ds : [esi+0x53C], offset public_5cef80
        mov byte ptr ds : [esi+0x551], bl
        mov dword ptr ds : [esi+0x560], ebx
        mov dword ptr ds : [esi+0x55C], ebx
        mov dword ptr ds : [esi+0x558], ebx
        mov dword ptr ds : [esi+0x554], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x564], offset public_5cff9c
        mov ecx, dword ptr ds : [public_5c631c]
        mov dword ptr ds : [esi+0x564], ecx
        lea edx, ss:[esp+0x28]
        lea ecx, ds:[esi+0x56C]
        push edx
        mov byte ptr ss : [esp+0x20], 2
        mov word ptr ds : [esi+0x568], bx
        mov byte ptr ds : [esi+0x56A], bl
        mov byte ptr ds : [esi+0x56B], bl
        call public_46ba60
        lea eax, ss:[esp+0x28]
        lea ecx, ds:[esi+0x578]
        push eax
        mov byte ptr ss : [esp+0x20], 3
        call public_46ba60
        lea edx, ss:[esp+0x28]
        lea ecx, ds:[esi+0x584]
        push edx
        mov byte ptr ss : [esp+0x20], 4
        call public_46ba60
        lea eax, ss:[esp+0x28]
        lea ecx, ds:[esi+0x590]
        push eax
        mov byte ptr ss : [esp+0x20], 5
        call public_46ba60
        lea ecx, ds:[esi+0x59C]
        mov byte ptr ss : [esp+0x1C], 6
        call dword ptr ds : [public_5c62dc]
        mov dword ptr ds : [esi], offset public_5cfec4
        mov dword ptr ds : [esi+0x7C], offset public_5cfeb8
        mov dword ptr ds : [esi+0x498], offset public_5cfeb0
        jmp public_46bf30
        public_46bf2e : nop
        xor esi, esi
        public_46bf30 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        add ebp, 0xC
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], ebp
        call dword ptr ds : [edx+0x24]
        test al, al
        jne public_46bf71
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        public_46bf71 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x46be00)
    }
}

#undef public_46bf2e
#undef public_46bf30
#undef public_46bf71
