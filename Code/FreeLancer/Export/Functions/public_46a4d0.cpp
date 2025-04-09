#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_4683b0);
CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_468bf0);
CLANG_FORWARD_PROC_SYMBOL(public_46a4d0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_46bb00);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb784);

#define public_46a51c _public_46a51c
#define public_46a531 _public_46a531
#define public_46a536 _public_46a536
#define public_46a5a1 _public_46a5a1
#define public_46a628 _public_46a628
#define public_46a690 _public_46a690
#define public_46a742 _public_46a742
#define public_46a750 _public_46a750

PROC_DECLARE(0x46a4d0, internal_46a4d0, public_46a4d0);
extern "C" NAKED register_t __cdecl internal_46a4d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bb784 @0x46a4d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb784
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ds : [public_66d44c]
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        test al, 1
        push ebx
        push ebp
        push esi
        push edi
        jne public_46a51c
        mov bl, al
        lea eax, ss:[esp+0x13]
        or bl, 1
        push eax
        mov ecx, offset public_66d440
        mov byte ptr ds : [public_66d44c], bl
        call public_46ba60
/*FIXUP push offset _public_468bf0 @0x46a50f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_468bf0
        call public_5b7e6c
        add esp, 4
        public_46a51c : nop
        mov ecx, dword ptr ds : [public_66da60]
        xor ebx, ebx
        cmp ecx, ebx
        je public_46a531
        call public_4683b0
        mov esi, eax
        jmp public_46a536
        public_46a531 : nop
        mov esi, offset public_66d440
        public_46a536 : nop
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x24], offset public_66d400
        mov dword ptr ss : [esp+0x20], eax
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x4C], 1
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x44], 0
        je public_46a5a1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ebx
        public_46a5a1 : nop
        mov ebp, dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call ebp
        mov ecx, dword ptr ss : [esp+0x4C]
        push 0xFFFFFFFF
        push ecx
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 2
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x4C], 3
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x14]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov byte ptr ss : [esp+0x44], bl
        je public_46a628
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], 0
        public_46a628 : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        mov edi, dword ptr ds : [public_66da60]
        test edi, edi
        je public_46a750
        mov ebx, dword ptr ds : [edi+0x20]
        lea esi, ds:[edi+0x1C]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        call public_46c860
        lea eax, ss:[esp+0x4C]
        push eax
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, ecx
        je public_46a742
        mov ebx, 6
        lea ebx, ds:[ebx]
        public_46a690 : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62e4]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x48], 5
        call public_46bb00
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x44], 4
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call ebp
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62e0]
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x48], 7
        call public_46bb00
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x44], bl
        call public_45eeb0
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call dword ptr ds : [public_5c62d4]
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, dword ptr ds : [edi+4]
        jne public_46a690
        public_46a742 : nop
        mov eax, dword ptr ds : [edi+0x18]
        inc eax
        mov ecx, edi
        mov dword ptr ds : [edi+0x18], eax
        call public_4684e0
        public_46a750 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x46a4d0)
    }
}

#undef public_46a51c
#undef public_46a531
#undef public_46a536
#undef public_46a5a1
#undef public_46a628
#undef public_46a690
#undef public_46a742
#undef public_46a750
