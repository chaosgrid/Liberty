#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d460f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d466f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d467b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46850);
CLANG_FORWARD_PROC_SYMBOL(public_6d52040);
CLANG_FORWARD_PROC_SYMBOL(public_6d523e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d56940);
CLANG_FORWARD_PROC_SYMBOL(public_6d56e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d59b00);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63886);

#define public_6d52416 _public_6d52416
#define public_6d52482 _public_6d52482
#define public_6d52499 _public_6d52499
#define public_6d52538 _public_6d52538
#define public_6d52560 _public_6d52560
#define public_6d52574 _public_6d52574
#define public_6d52590 _public_6d52590
#define public_6d525a6 _public_6d525a6
#define public_6d525e3 _public_6d525e3
#define public_6d525fe _public_6d525fe
#define public_6d52684 _public_6d52684
#define public_6d52686 _public_6d52686
#define public_6d526fb _public_6d526fb
#define public_6d52705 _public_6d52705
#define public_6d52707 _public_6d52707

PROC_DECLARE(0x6d523e0, internal_6d523e0, public_6d523e0);
extern "C" NAKED register_t __cdecl internal_6d523e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63886 @0x6d523e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63886
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB34
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xB4C]
        push esi
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6d52416
        mov esi, offset public_6d64efc
        public_6d52416 : nop
        call dword ptr ds : [public_6d647e8]
        test al, al
        mov ebx, dword ptr ds : [public_6d64c80]
        je public_6d52482
        push esi
        call dword ptr ds : [public_6d64c98]
        mov esi, eax
        push esi
        call dword ptr ds : [public_6d64ca0]
        push esi
        call ebx
        mov edi, eax
        mov eax, dword ptr ds : [public_6d90144]
        add esp, 0xC
        lea ecx, ds:[edi+edi]
        push ecx
        push esi
        mov ecx, offset public_6d8fd38
        mov dword ptr ds : [public_6d90150], eax
        call public_6d46850
        mov ecx, offset public_6d8fd38
        call public_6d467b0
        push eax
        push edi
        lea edx, ss:[esp+0x144]
/*FIXUP push offset public_6d6aec0 @0x6d5246a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push edx
        call dword ptr ds : [public_6d64c74]
        push esi
        call dword ptr ds : [public_6d64c94]
        add esp, 0x14
        jmp public_6d52499
        public_6d52482 : nop
        push 0x104
        lea edx, ss:[esp+0x140]
        push esi
        push edx
        call dword ptr ds : [public_6d64be0]
        add esp, 0xC
        public_6d52499 : nop
        lea eax, ss:[esp+0x13C]
        push 0
        push eax
        call public_6d460f0
        mov esi, dword ptr ds : [public_6d64bc0]
        push eax
        lea ecx, ss:[esp+0x44]
        push 0
        push ecx
        call esi
        mov edi, dword ptr ds : [public_6d64c00]
        add esp, 0x14
        lea edx, ss:[esp+0x38]
        push 6
        push edx
        call edi
        add esp, 8
        test eax, eax
        je public_6d52705
        lea eax, ss:[esp+0x38]
        push eax
        call dword ptr ds : [public_6d6497c]
        lea ecx, ss:[esp+0x3C]
        push 6
        push ecx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_6d52705
        push eax
/*FIXUP push offset public_6d6b2e8 @0x6d524f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b2e8
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        lea eax, ss:[esp+0x250]
        push eax
        call esi
        lea ecx, ss:[esp+0x254]
/*FIXUP push offset public_6d6b4e4 @0x6d52511*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4e4
        push ecx
        call dword ptr ds : [public_6d64bd8]
        add esp, 0x1C
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d526fb
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        jne public_6d52538
        mov esi, offset public_6d64efc
        public_6d52538 : nop
        mov ebp, dword ptr ds : [public_6d8d158]
        push ebp
        lea edi, ss:[esp+0x348]
        call ebx
        mov edx, dword ptr ds : [public_6d90144]
        shl eax, 1
        add esp, 4
        test eax, eax
        mov dword ptr ds : [public_6d90150], edx
        jle public_6d52574
        mov ebx, eax
        nop 
        public_6d52560 : nop
        xor eax, eax
        mov al, byte ptr ss : [ebp]
        mov ecx, offset public_6d8fd38
        inc ebp
        push eax
        call public_6d466f0
        dec ebx
        jne public_6d52560
        public_6d52574 : nop
        mov ecx, offset public_6d8fd38
        call public_6d467b0
        xor ecx, ecx
        mov cx, word ptr ds : [esi]
        xor edx, edx
        test cx, cx
        je public_6d525a6
        lea ebx, ds:[ebx]
        public_6d52590 : nop
        xor ecx, eax
        mov word ptr ds : [edi], cx
        add esi, 2
        xor ecx, ecx
        mov cx, word ptr ds : [esi]
        add edi, 2
        inc edx
        test cx, cx
        jne public_6d52590
        public_6d525a6 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        push esi
        push edx
        lea eax, ss:[esp+0x34C]
        push 2
        push eax
        call dword ptr ds : [public_6d64c04]
        push esi
        call dword ptr ds : [public_6d64bd0]
        add esp, 0x14
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d525fe
        mov ecx, dword ptr ss : [esp+0xB54]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6d525e3
        mov eax, offset public_6d64efc
        public_6d525e3 : nop
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        mov ecx, 0x100003
/*FIXUP push offset public_6d6b8d8 @0x6d525f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b8d8
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x10
        public_6d525fe : nop
        push 0x38
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        xor edi, edi
        cmp esi, edi
        mov dword ptr ss : [esp+0xB4C], 0
        mov ebx, 1
        je public_6d52684
        mov dl, byte ptr ss : [esp+0x13]
        lea ecx, ds:[esi+4]
        push edi
        mov byte ptr ds : [ecx], dl
        call public_6ce3b20
        mov al, byte ptr ss : [esp+0x13]
        lea ecx, ds:[esi+0x14]
        push edi
        mov byte ptr ss : [esp+0xB50], bl
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_6d64b74]
        mov cl, byte ptr ss : [esp+0x13]
        push 0x18
        mov byte ptr ss : [esp+0xB50], 2
        mov byte ptr ds : [esi+0x24], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], edi
        add esp, 4
        mov dword ptr ds : [esi], offset public_6d64ef8
        mov byte ptr ds : [esi+0x31], bl
        mov byte ptr ds : [esi+0x32], 0
        mov byte ptr ds : [esi+0x30], 0
        mov dword ptr ds : [esi+0x34], edi
        jmp public_6d52686
        public_6d52684 : nop
        xor esi, esi
        public_6d52686 : nop
        lea edx, ss:[esp+0x38]
        or ebp, 0xFFFFFFFF
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0xB50], ebp
        call public_6d56940
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6d56e50
        mov dword ptr ss : [esp+0x34], edi
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_6d902a4
        mov dword ptr ss : [esp+0xB54], 3
        call public_6d59b00
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6d0f600
        mov edi, dword ptr ss : [esp+0x1C]
        push ebx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0xB50], ebp
        call public_6ce3b20
        mov dword ptr ds : [edi+0x1C], esi
        mov al, bl
        jmp public_6d52707
        public_6d526fb : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ebp
        call public_6d52040
        public_6d52705 : nop
        xor al, al
        public_6d52707 : nop
        mov ecx, dword ptr ss : [esp+0xB44]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xB40
        ret 4
        UNREACHABLE_TRAP(0x6d523e0)
    }
}

#undef public_6d52416
#undef public_6d52482
#undef public_6d52499
#undef public_6d52538
#undef public_6d52560
#undef public_6d52574
#undef public_6d52590
#undef public_6d525a6
#undef public_6d525e3
#undef public_6d525fe
#undef public_6d52684
#undef public_6d52686
#undef public_6d526fb
#undef public_6d52705
#undef public_6d52707
