#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4350);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d190d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d19180);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d54890);
CLANG_FORWARD_PROC_SYMBOL(public_6d55bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b920);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c530);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c810);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63d4a);

#define public_6d5b962 _public_6d5b962
#define public_6d5b9c0 _public_6d5b9c0
#define public_6d5ba02 _public_6d5ba02
#define public_6d5bb2a _public_6d5bb2a
#define public_6d5bb32 _public_6d5bb32
#define public_6d5bb43 _public_6d5bb43
#define public_6d5bb67 _public_6d5bb67

PROC_DECLARE(0x6d5b920, internal_6d5b920, public_6d5b920);
extern "C" NAKED register_t __cdecl internal_6d5b920()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d63d4a @0x6d5b928*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63d4a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x74]
        push eax
        lea ecx, ss:[esp+0x18]
        lea ebx, ds:[edi+8]
        push ecx
        mov ecx, ebx
        call public_6d15d10
        mov eax, dword ptr ds : [edi+0xC]
        cmp dword ptr ss : [esp+0x14], eax
        jne public_6d5b962
        xor al, al
        jmp public_6d5bb67
        public_6d5b962 : nop
        mov edx, dword ptr ss : [esp+0x74]
        lea eax, ss:[esp+0x1C]
        push eax
        push 9
        mov dword ptr ss : [esp+0x24], edx
        call public_6d43650
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebx
        call public_6ce3ea0
        mov ebp, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ds : [public_6d90260]
        mov eax, ebp
        imul eax, 0x418
        lea edx, ss:[esp+0x10]
        lea esi, ds:[eax+ecx-0x418]
        push edx
        mov ecx, ebx
        call public_6d5c540
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        cmp ecx, eax
        je public_6d5ba02
        lea esp, ss:[esp]
        public_6d5b9c0 : nop
        push ecx
        mov eax, esp
        lea ecx, ss:[esp+0x14]
        mov word ptr ds : [eax], bp
        mov byte ptr ds : [eax+2], bl
        mov byte ptr ds : [eax+3], bl
        call public_6d5c530
        mov eax, dword ptr ds : [eax]
        push 8
        push ecx
        mov ecx, esp
        push eax
        call public_6d19180
        call public_6d190d0
        add esp, 0xC
        push ebx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6ce4350
        mov eax, dword ptr ds : [edi+0xC]
        cmp dword ptr ss : [esp+0x10], eax
        jne public_6d5b9c0
        public_6d5ba02 : nop
        mov dx, word ptr ss : [esp+0x74]
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+0x24], esp
        push 7
        push ecx
        mov word ptr ds : [eax], dx
        mov byte ptr ds : [eax+2], bl
        mov byte ptr ds : [eax+3], bl
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, esp
        mov dword ptr ss : [esp+0x2C], esp
        push eax
        call public_6d19180
        call public_6d190d0
        add esp, 0xC
        mov dword ptr ds : [esi+0x408], ebx
        mov dword ptr ds : [esi+0x40C], ebx
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push eax
        call dword ptr ds : [edx+0x1C8]
        lea ecx, ss:[esp+0x30]
        call public_6d55bc0
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x6C], ebx
        call public_6d55bc0
        mov ecx, dword ptr ds : [public_6d8fb14]
        lea eax, ss:[esp+0x24]
        push eax
        lea eax, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov byte ptr ss : [esp+0x64], bl
        mov dword ptr ss : [esp+0x2C], ebx
        mov edx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0x74], 1
        call dword ptr ds : [edx+0x120]
        mov ecx, dword ptr ss : [esp+0x74]
        push ebx
        push ecx
        mov ecx, offset public_6d90260
        call public_6d54890
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea edi, ds:[esi+0x3E4]
        push edi
        mov dword ptr ds : [esi+0x404], ebx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6d5bb43
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        je public_6d5bb43
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        cmp eax, ebx
        je public_6d5bb43
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6d5bb43
        add esi, 0x3E0
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, offset public_6d8da2c
        mov dword ptr ds : [eax+0x1B4], ebx
        call public_6d5c810
        mov eax, dword ptr ds : [public_6d8da30]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        je public_6d5bb2a
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6d5bb2a
        lea ecx, ss:[esp+0x18]
        jmp public_6d5bb32
        public_6d5bb2a : nop
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x10]
        public_6d5bb32 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, eax
        je public_6d5bb43
        mov eax, dword ptr ds : [edi]
        push eax
        add ecx, 0x10
        call public_6d0f1c0
        public_6d5bb43 : nop
        mov esi, dword ptr ds : [public_6d64694]
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x6C], 2
        call esi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        call esi
        mov al, 1
        public_6d5bb67 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x6d5b920)
    }
}

#undef public_6d5b962
#undef public_6d5b9c0
#undef public_6d5ba02
#undef public_6d5bb2a
#undef public_6d5bb32
#undef public_6d5bb43
#undef public_6d5bb67
