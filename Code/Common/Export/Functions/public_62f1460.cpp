#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fa70);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62f03c0);
CLANG_FORWARD_PROC_SYMBOL(public_62f1460);
CLANG_FORWARD_PROC_SYMBOL(public_62fba30);
CLANG_FORWARD_PROC_SYMBOL(public_62fd2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6316aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6316ac0);
CLANG_FORWARD_PROC_SYMBOL(public_63345a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63955a7);

#define public_62f150d _public_62f150d
#define public_62f1515 _public_62f1515
#define public_62f1520 _public_62f1520
#define public_62f1528 _public_62f1528
#define public_62f155d _public_62f155d
#define public_62f15bc _public_62f15bc
#define public_62f15e4 _public_62f15e4
#define public_62f1606 _public_62f1606
#define public_62f160a _public_62f160a
#define public_62f160d _public_62f160d
#define public_62f1620 _public_62f1620
#define public_62f1640 _public_62f1640
#define public_62f1642 _public_62f1642
#define public_62f1651 _public_62f1651

PROC_DECLARE(0x62f1460, internal_62f1460, public_62f1460);
extern "C" NAKED register_t __cdecl internal_62f1460()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63955a7 @0x62f1462*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63955a7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        xor edi, edi
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        call public_62efff0
        lea ecx, ss:[ebp+0x60]
        mov dword ptr ss : [esp+0x20], edi
        call public_63345a0
        mov al, byte ptr ss : [esp+0x28]
        mov byte ptr ss : [ebp+0x64], al
        mov dword ptr ss : [ebp+0x68], edi
        mov dword ptr ss : [ebp+0x6C], edi
        mov dword ptr ss : [ebp+0x70], edi
        mov cl, byte ptr ss : [esp+0x28]
        push 0x14
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ss : [ebp+0x74], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [ebp+0x78], eax
        mov dword ptr ss : [ebp+0x7C], edi
        mov dl, byte ptr ss : [esp+0x28]
        lea esi, ss:[ebp+0x84]
        mov byte ptr ds : [esi], dl
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        mov ebx, dword ptr ss : [esp+0x28]
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x24], 3
        mov dword ptr ss : [ebp], offset public_63a11d4
        call public_62f03c0
        lea edi, ds:[ebx+0x84]
        cmp esi, edi
        je public_62f160d
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62f150d
        xor edx, edx
        jmp public_62f1515
        public_62f150d : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, eax
        sar edx, 4
        public_62f1515 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_62f1520
        xor eax, eax
        jmp public_62f1528
        public_62f1520 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 4
        public_62f1528 : nop
        cmp edx, eax
        ja public_62f155d
        mov eax, dword ptr ds : [edi+8]
        push ecx
        push eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62fd2b0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, edi
        call public_6316ac0
        mov ecx, dword ptr ds : [esi+4]
        shl eax, 4
        add eax, ecx
        jmp public_62f160a
        public_62f155d : nop
        mov ecx, edi
        call public_6316ac0
        mov ecx, esi
        mov ebx, eax
        call public_6316aa0
        cmp ebx, eax
        ja public_62f15bc
        mov edx, dword ptr ds : [edi+4]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], edx
        call public_6316ac0
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x10]
        shl ebx, 4
        add ebx, eax
        mov eax, dword ptr ds : [edi+4]
        push ecx
        push ebx
        push eax
        call public_62fd2b0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push edx
        push eax
        push ebx
        mov ecx, esi
        call public_62fba30
        mov ecx, edi
        call public_6316ac0
        mov ecx, dword ptr ds : [esi+4]
        shl eax, 4
        add eax, ecx
        jmp public_62f1606
        public_62f15bc : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_628f050
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        add esp, 4
        mov ecx, edi
        call public_6316ac0
        test eax, eax
        jge public_62f15e4
        xor eax, eax
        public_62f15e4 : nop
        shl eax, 4
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_62fba30
        mov dword ptr ds : [esi+0xC], eax
        public_62f1606 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        public_62f160a : nop
        mov dword ptr ds : [esi+8], eax
        public_62f160d : nop
        mov edx, dword ptr ds : [ebx+0x5C]
        lea eax, ss:[ebp+0x5C]
        mov dword ptr ds : [eax], edx
        mov esi, dword ptr ds : [ebx+0x5C]
        test esi, esi
        mov edi, eax
        je public_62f1651
        mov bl, 4
        public_62f1620 : nop
        push 0x6C
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        test eax, eax
        mov byte ptr ss : [esp+0x20], bl
        je public_62f1640
        push esi
        mov ecx, eax
        call public_626fa70
        jmp public_62f1642
        public_62f1640 : nop
        xor eax, eax
        public_62f1642 : nop
        mov dword ptr ds : [edi], eax
        mov esi, dword ptr ds : [esi]
        test esi, esi
        mov byte ptr ss : [esp+0x20], 3
        mov edi, eax
        jne public_62f1620
        public_62f1651 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x62f1460)
    }
}

#undef public_62f150d
#undef public_62f1515
#undef public_62f1520
#undef public_62f1528
#undef public_62f155d
#undef public_62f15bc
#undef public_62f15e4
#undef public_62f1606
#undef public_62f160a
#undef public_62f160d
#undef public_62f1620
#undef public_62f1640
#undef public_62f1642
#undef public_62f1651
