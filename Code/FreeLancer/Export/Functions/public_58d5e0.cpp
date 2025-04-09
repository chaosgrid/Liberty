#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_4963a0);
CLANG_FORWARD_PROC_SYMBOL(public_58d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_58f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_58fa90);
CLANG_FORWARD_PROC_SYMBOL(public_590500);
CLANG_FORWARD_PROC_SYMBOL(public_5908a0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c47b8);

#define public_58d6bb _public_58d6bb
#define public_58d6d8 _public_58d6d8
#define public_58d6f8 _public_58d6f8
#define public_58d747 _public_58d747
#define public_58d76e _public_58d76e
#define public_58d78d _public_58d78d
#define public_58d7aa _public_58d7aa
#define public_58d7fa _public_58d7fa
#define public_58d805 _public_58d805
#define public_58d810 _public_58d810
#define public_58d826 _public_58d826
#define public_58d849 _public_58d849
#define public_58d868 _public_58d868
#define public_58d886 _public_58d886
#define public_58d896 _public_58d896
#define public_58d8b0 _public_58d8b0
#define public_58d8ca _public_58d8ca

PROC_DECLARE(0x58d5e0, internal_58d5e0, public_58d5e0);
extern "C" NAKED register_t __cdecl internal_58d5e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c47b8 @0x58d5e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c47b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x12C
        push ebx
        push ebp
        mov ebx, ecx
        cmp eax, dword ptr ds : [ebx+0x55C]
        push esi
        push edi
        je public_58d8ca
        lea esi, ds:[ebx+0x560]
        mov dword ptr ds : [ebx+0x55C], eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_5908a0
        mov eax, dword ptr ds : [ebx+0x55C]
        dec eax
        je public_58d7aa
        dec eax
        je public_58d6f8
        dec eax
        jne public_58d896
        xor eax, eax
        mov dword ptr ss : [esp+0x7C], eax
        mov dword ptr ss : [esp+0x80], eax
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x144], 8
        call public_4144b0
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x144], 9
        call public_4963a0
        lea ecx, ds:[ebx+0x490]
        mov dword ptr ss : [esp+0x144], 0xA
        call public_58f9e0
        mov ecx, esi
        mov edi, eax
        call public_58fa90
        cmp eax, edi
        mov ecx, esi
        jae public_58d6bb
        mov ebp, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x74]
        push eax
        call public_58fa90
        sub edi, eax
        push edi
        push ebp
        mov ecx, esi
        call public_590500
        jmp public_58d6d8
        public_58d6bb : nop
        call public_58fa90
        cmp edi, eax
        jae public_58d6d8
        mov ecx, dword ptr ds : [esi+4]
        imul edi, 0x64
        mov eax, dword ptr ds : [esi+8]
        add edi, ecx
        push eax
        push edi
        mov ecx, esi
        call public_5908a0
        public_58d6d8 : nop
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x144], 0xB
        call public_444e50
        lea ecx, ss:[esp+0x7C]
        jmp public_58d886
        public_58d6f8 : nop
        xor edi, edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x144], 4
        call public_4144b0
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x144], 5
        call public_4963a0
        mov eax, dword ptr ds : [ebx+0x4A4]
        cmp eax, edi
        mov dword ptr ss : [esp+0x144], 6
        je public_58d747
        mov edi, dword ptr ds : [ebx+0x4A8]
        sub edi, eax
        sar edi, 2
        public_58d747 : nop
        mov ecx, esi
        call public_58fa90
        cmp eax, edi
        jae public_58d76e
        mov ebp, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_58fa90
        sub edi, eax
        push edi
        push ebp
        mov ecx, esi
        call public_590500
        jmp public_58d78d
        public_58d76e : nop
        mov ecx, esi
        call public_58fa90
        cmp edi, eax
        jae public_58d78d
        mov ecx, dword ptr ds : [esi+4]
        imul edi, 0x64
        mov eax, dword ptr ds : [esi+8]
        add edi, ecx
        push eax
        push edi
        mov ecx, esi
        call public_5908a0
        public_58d78d : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x144], 7
        call public_444e50
        lea ecx, ss:[esp+0x18]
        jmp public_58d886
        public_58d7aa : nop
        xor ebp, ebp
        mov dword ptr ss : [esp+0xE0], ebp
        mov dword ptr ss : [esp+0xE4], ebp
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x144], ebp
        call public_4144b0
        lea ecx, ss:[esp+0xD8]
        mov byte ptr ss : [esp+0x144], 1
        call public_4963a0
        mov eax, dword ptr ds : [ebx+0x4B4]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x144], 2
        jne public_58d7fa
        xor edi, edi
        jmp public_58d805
        public_58d7fa : nop
        mov edi, dword ptr ds : [ebx+0x4B8]
        sub edi, eax
        sar edi, 2
        public_58d805 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebp
        jne public_58d810
        xor edx, edx
        jmp public_58d826
        public_58d810 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x51EB851F
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_58d826 : nop
        cmp edx, edi
        jae public_58d849
        mov ebp, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0xD8]
        push ecx
        mov ecx, esi
        call public_58fa90
        sub edi, eax
        push edi
        push ebp
        mov ecx, esi
        call public_590500
        jmp public_58d868
        public_58d849 : nop
        mov ecx, esi
        call public_58fa90
        cmp edi, eax
        jae public_58d868
        mov ecx, dword ptr ds : [esi+4]
        imul edi, 0x64
        mov eax, dword ptr ds : [esi+8]
        add edi, ecx
        push eax
        push edi
        mov ecx, esi
        call public_5908a0
        public_58d868 : nop
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x144], 3
        call public_444e50
        lea ecx, ss:[esp+0xE0]
        public_58d886 : nop
        mov dword ptr ss : [esp+0x144], 0xFFFFFFFF
        call public_444e20
        public_58d896 : nop
        mov esi, dword ptr ds : [ebx+0x564]
        cmp esi, dword ptr ds : [ebx+0x568]
        lea edi, ds:[ebx+1]
        je public_58d8ca
        xor ebp, ebp
        lea esp, ss:[esp]
        public_58d8b0 : nop
        mov ecx, esi
        call public_4963a0
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], ebp
        mov eax, dword ptr ds : [ebx+0x568]
        add esi, 0x64
        inc edi
        cmp esi, eax
        jne public_58d8b0
        public_58d8ca : nop
        mov ecx, dword ptr ss : [esp+0x13C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x138
        ret 4
        UNREACHABLE_TRAP(0x58d5e0)
    }
}

#undef public_58d6bb
#undef public_58d6d8
#undef public_58d6f8
#undef public_58d747
#undef public_58d76e
#undef public_58d78d
#undef public_58d7aa
#undef public_58d7fa
#undef public_58d805
#undef public_58d810
#undef public_58d826
#undef public_58d849
#undef public_58d868
#undef public_58d886
#undef public_58d896
#undef public_58d8b0
#undef public_58d8ca
