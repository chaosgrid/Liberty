#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_42cc30);
CLANG_FORWARD_PROC_SYMBOL(public_42cc50);
CLANG_FORWARD_PROC_SYMBOL(public_42d4c0);
CLANG_FORWARD_PROC_SYMBOL(public_42d4f0);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_4a5580);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcc23);

#define public_4a56a5 _public_4a56a5
#define public_4a5726 _public_4a5726
#define public_4a574b _public_4a574b
#define public_4a574f _public_4a574f
#define public_4a5754 _public_4a5754
#define public_4a575c _public_4a575c
#define public_4a57ca _public_4a57ca
#define public_4a57dd _public_4a57dd
#define public_4a57ff _public_4a57ff
#define public_4a5843 _public_4a5843
#define public_4a586e _public_4a586e
#define public_4a5877 _public_4a5877

PROC_DECLARE(0x4a5580, internal_4a5580, public_4a5580);
extern "C" NAKED register_t __cdecl internal_4a5580()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bcc23 @0x4a5588*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcc23
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x2020
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x580]
        cmp eax, 0xFFFFFFFF
        je public_4a5877
        push ebx
        mov ebx, dword ptr ds : [esi+0x584]
        push ebp
        push edi
        lea edi, ds:[eax+eax*2]
        shl edi, 5
        push 0x1000
        lea eax, ss:[esp+0x34]
        add edi, ebx
        push eax
        lea ecx, ds:[edi+0x28]
        call public_41c970
        mov ecx, dword ptr ds : [esi+0x64C]
        mov edx, dword ptr ds : [ecx]
        xor ebx, ebx
        push ebx
        lea eax, ss:[esp+0x34]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        push 0x1000
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ds:[edi+0x40]
        call public_41c970
        mov dl, byte ptr ss : [esp+0x17]
        push 0xC
        mov byte ptr ss : [esp+0x1C], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x203C], ebx
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 1
        mov ecx, eax
        mov byte ptr ss : [esp+0x2038], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+4]
        lea ebp, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x2040], 2
        call public_42a7e0
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov byte ptr ss : [esp+0x2038], bl
        je public_4a56a5
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], 0
        public_4a56a5 : nop
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x2038], 0
        call dword ptr ds : [public_5c62b4]
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        lea eax, ss:[esp+0x3C]
        push eax
        call public_57e2c0
        mov ebp, dword ptr ds : [esi+0x650]
        add esp, 0x10
        push 0
        push 0
        mov ecx, ebp
        call public_5798b0
        mov ecx, ebp
        call public_57b370
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call public_57b3e0
        mov ecx, dword ptr ds : [esi+0x580]
        mov edx, dword ptr ds : [esi+0x584]
        lea ecx, ds:[ecx+ecx*2]
        shl ecx, 5
        add ecx, edx
        call dword ptr ds : [public_5c63f0]
        mov ebp, dword ptr ds : [esi+0x560]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_4a575c
        public_4a5726 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ss : [ebp]
        mov cl, dl
        cmp dl, bl
        jne public_4a574f
        test cl, cl
        je public_4a574b
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ss : [ebp+1]
        mov cl, dl
        cmp dl, bl
        jne public_4a574f
        add eax, 2
        add ebp, 2
        test cl, cl
        jne public_4a5726
        public_4a574b : nop
        xor eax, eax
        jmp public_4a5754
        public_4a574f : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_4a5754 : nop
        test eax, eax
        je public_4a57dd
        public_4a575c : nop
        lea ebx, ds:[esi+0x560]
        push ebx
        call dword ptr ds : [public_5c60c8]
        lea ebp, ds:[esi+0x564]
        add esp, 4
        mov ecx, ebp
        call public_42cc50
        mov ecx, ebp
        mov dword ptr ds : [ebx], 0
        call public_42cc30
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ebx
        call dword ptr ds : [public_5c60cc]
        add esp, 8
/*FIXUP push offset public_5d2d7c @0x4a5795*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2d7c
        mov ecx, ebp
        call public_42d4c0
        test al, al
        jne public_4a57ca
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5d2d7c @0x4a57ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2d7c
        push 0x426
/*FIXUP push offset public_5d4384 @0x4a57b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4384
        mov eax, 0x100001
/*FIXUP push offset public_5d4348 @0x4a57bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4348
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4a57ca : nop
        mov edx, dword ptr ds : [esi+0x560]
/*FIXUP push offset public_5d4318 @0x4a57d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4318
        push edx
        mov ecx, ebp
        call public_42d4f0
        public_4a57dd : nop
        mov edi, dword ptr ds : [edi+0xC]
        cmp edi, dword ptr ds : [esi+0x590]
        mov ecx, dword ptr ds : [esi+0x58C]
        mov eax, dword ptr ds : [ecx]
        mov ebp, 0x42B
        jae public_4a57ff
        mov eax, dword ptr ds : [ecx+edi*4]
        mov ebp, dword ptr ds : [esi+edi*4+0x594]
        public_4a57ff : nop
        mov ecx, dword ptr ds : [esi+0x658]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 4
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x658]
        mov eax, dword ptr ds : [ecx]
        push 0
        push ebp
        push 3
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        pop edi
        pop ebp
        mov dword ptr ss : [esp+0x2030], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+8], ecx
        pop ebx
        je public_4a586e
        public_4a5843 : nop
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0xC]
        call public_53ab20
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_46d680
        cmp dword ptr ss : [esp+4], esi
        jne public_4a5843
        mov eax, dword ptr ss : [esp+0x10]
        public_4a586e : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4a5877 : nop
        mov ecx, dword ptr ss : [esp+0x2024]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x202C
        ret 
        UNREACHABLE_TRAP(0x4a5580)
    }
}

#undef public_4a56a5
#undef public_4a5726
#undef public_4a574b
#undef public_4a574f
#undef public_4a5754
#undef public_4a575c
#undef public_4a57ca
#undef public_4a57dd
#undef public_4a57ff
#undef public_4a5843
#undef public_4a586e
#undef public_4a5877
