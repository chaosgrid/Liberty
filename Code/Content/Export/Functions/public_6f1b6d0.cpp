#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ca70);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadc36);

#define public_6f1b720 _public_6f1b720
#define public_6f1b728 _public_6f1b728
#define public_6f1b767 _public_6f1b767
#define public_6f1b7dd _public_6f1b7dd
#define public_6f1b7df _public_6f1b7df
#define public_6f1b804 _public_6f1b804
#define public_6f1b808 _public_6f1b808
#define public_6f1b80d _public_6f1b80d
#define public_6f1b80f _public_6f1b80f

PROC_DECLARE(0x6f1b6d0, internal_6f1b6d0, public_6f1b6d0);
extern "C" NAKED register_t __cdecl internal_6f1b6d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fadc36 @0x6f1b6d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadc36
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x18]
        lea ebp, ds:[edi+0x3C]
        push ecx
        mov ecx, ebp
        xor ebx, ebx
        xor esi, esi
        call public_6f2e220
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f1b720
        mov edx, dword ptr ss : [esp+0x38]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6f1b720
        lea eax, ss:[esp+0x14]
        jmp public_6f1b728
        public_6f1b720 : nop
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        public_6f1b728 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x40]
        jne public_6f1b808
        lea eax, ss:[esp+0x38]
        push eax
        call public_6f49b00
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_6f1b804
        call dword ptr ds : [public_6fb36a0]
        test al, al
        jne public_6f1b767
        mov ecx, dword ptr ss : [esp+0x18]
        call public_6f478c0
        test eax, eax
        je public_6f1b80d
        public_6f1b767 : nop
        push 0x3C
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], ebx
        je public_6f1b7dd
        mov eax, dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [esi+4], eax
        call public_6f93460
        mov dword ptr ds : [esi+8], offset public_6fb478c
        mov dword ptr ds : [esi+0x18], ebx
        lea edx, ss:[esp+0x18]
        push edx
        mov byte ptr ss : [esp+0x34], 1
        mov dword ptr ds : [esi+0x1C], edi
        call public_6f49b00
        lea edi, ds:[esi+0x28]
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [esi+0x20], eax
        mov byte ptr ds : [esi+0x24], bl
        mov byte ptr ds : [esi+0x25], bl
        call public_6f1ca70
        mov dword ptr ds : [edi], offset public_6fb478c
        mov dword ptr ds : [edi+0x10], ebx
        mov dword ptr ds : [esi], offset public_6fb85b8
        mov dword ptr ds : [esi+0x18], esi
        jmp public_6f1b7df
        public_6f1b7dd : nop
        xor esi, esi
        public_6f1b7df : nop
        mov eax, dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], esi
        call public_6f003e0
        public_6f1b804 : nop
        mov eax, esi
        jmp public_6f1b80f
        public_6f1b808 : nop
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_6f1b80f
        public_6f1b80d : nop
        xor eax, eax
        public_6f1b80f : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6f1b6d0)
    }
}

#undef public_6f1b720
#undef public_6f1b728
#undef public_6f1b767
#undef public_6f1b7dd
#undef public_6f1b7df
#undef public_6f1b804
#undef public_6f1b808
#undef public_6f1b80d
#undef public_6f1b80f
