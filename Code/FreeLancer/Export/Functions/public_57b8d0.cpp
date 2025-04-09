#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_564280);
CLANG_FORWARD_PROC_SYMBOL(public_5793e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b8d0);
CLANG_FORWARD_PROC_SYMBOL(public_57f7c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3e12);

#define public_57baf1 _public_57baf1
#define public_57baf3 _public_57baf3
#define public_57baf9 _public_57baf9

PROC_DECLARE(0x57b8d0, internal_57b8d0, public_57b8d0);
extern "C" NAKED register_t __cdecl internal_57b8d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3e12 @0x57b8d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3e12
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        call public_5793e0
        lea eax, ss:[esp+0xF]
        xor ebx, ebx
        lea ecx, ds:[esi+0x488]
        push eax
        mov dword ptr ss : [esp+0x24], ebx
        call public_46ba60
        mov dword ptr ds : [esi], offset public_5e476c
        mov dword ptr ds : [esi+0x7C], offset public_5e4760
        mov byte ptr ds : [esi+0x401], bl
        mov byte ptr ds : [esi+0x400], bl
        mov byte ptr ds : [esi+0x494], 1
        mov dword ptr ss : [esp+0x20], 1
        mov dword ptr ds : [esi+0x498], offset public_5cbed8
        mov cl, byte ptr ss : [esp+0xF]
        mov byte ptr ds : [esi+0x4BB], bl
        mov byte ptr ds : [esi+0x4BA], bl
        mov byte ptr ds : [esi+0x4B9], bl
        mov byte ptr ds : [esi+0x4B8], bl
        mov byte ptr ds : [esi+0x4C4], cl
        mov dword ptr ds : [esi+0x4C8], ebx
        mov dword ptr ds : [esi+0x4CC], ebx
        mov dword ptr ds : [esi+0x4D0], ebx
        mov dl, byte ptr ss : [esp+0xF]
        push 0xC
        mov byte ptr ss : [esp+0x24], 3
        mov byte ptr ds : [esi+0x4DC], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x4E0], eax
        mov dword ptr ds : [esi+0x4E4], ebx
        mov al, byte ptr ss : [esp+0xF]
        lea edi, ds:[esi+0x4E8]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 4
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0xF]
        push 0xC
        mov byte ptr ss : [esp+0x24], 5
        mov byte ptr ds : [esi+0x4FC], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x500], eax
        mov dword ptr ds : [esi+0x504], ebx
        mov dl, byte ptr ss : [esp+0xF]
        mov al, byte ptr ss : [esp+0xF]
        lea ecx, ds:[esi+0x514]
        mov byte ptr ss : [esp+0x20], 6
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_57f7c0
        mov byte ptr ss : [esp+0x20], 7
        mov dword ptr ds : [esi+0x52C], ebx
        mov dword ptr ds : [esi], offset public_5e4844
        mov dword ptr ds : [esi+0x7C], offset public_5e4838
        mov dword ptr ds : [esi+0x498], offset public_5e4830
        mov dword ptr ds : [esi+0x4A4], ebx
        mov dword ptr ds : [esi+0x4A0], ebx
        mov dword ptr ds : [esi+0x49C], ebx
        mov byte ptr ds : [esi+0x4AC], 1
        mov ecx, dword ptr ds : [public_5e4564]
        mov dword ptr ds : [esi+0x4B4], ecx
        mov edx, dword ptr ds : [public_5e4564]
        mov dword ptr ds : [esi+0x4B0], edx
        mov dword ptr ds : [esi+0x4A8], 4
        mov dword ptr ds : [esi+0x4B8], 0xFFFFFFFF
        mov eax, dword ptr ds : [public_67c40c]
        mov dword ptr ds : [esi+0x4D4], eax
        mov ecx, dword ptr ds : [public_5e4568]
        mov dword ptr ds : [esi+0x4BC], ecx
        mov dword ptr ds : [esi+0x4F4], 0xFFFFFFFF
        mov byte ptr ds : [esi+0x508], bl
        mov byte ptr ds : [esi+0x4F8], bl
        mov dword ptr ds : [esi+0x510], ebx
        mov byte ptr ds : [esi+0x4C0], 1
        mov word ptr ds : [esi+0x528], 0x5F
        mov byte ptr ds : [esi+0x52A], bl
        mov dword ptr ds : [esi+0x50C], ebx
        mov byte ptr ds : [esi+0x52B], 1
        call dword ptr ds : [public_5c6e80]
        test eax, eax
        je public_57baf9
        push 0xA0
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x20], 8
        je public_57baf1
        push esi
        mov ecx, eax
        call public_564280
        jmp public_57baf3
        public_57baf1 : nop
        xor eax, eax
        public_57baf3 : nop
        mov dword ptr ds : [esi+0x52C], eax
        public_57baf9 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x57b8d0)
    }
}

#undef public_57baf1
#undef public_57baf3
#undef public_57baf9
