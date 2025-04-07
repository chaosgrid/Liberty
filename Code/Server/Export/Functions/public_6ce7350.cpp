#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7350);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60512);

#define public_6ce73cd _public_6ce73cd
#define public_6ce73cf _public_6ce73cf
#define public_6ce73f2 _public_6ce73f2
#define public_6ce7458 _public_6ce7458
#define public_6ce745a _public_6ce745a
#define public_6ce7488 _public_6ce7488
#define public_6ce748a _public_6ce748a
#define public_6ce74ae _public_6ce74ae
#define public_6ce74b0 _public_6ce74b0
#define public_6ce74be _public_6ce74be
#define public_6ce74d3 _public_6ce74d3
#define public_6ce74d5 _public_6ce74d5
#define public_6ce74fd _public_6ce74fd
#define public_6ce74ff _public_6ce74ff
#define public_6ce750f _public_6ce750f
#define public_6ce7541 _public_6ce7541
#define public_6ce754f _public_6ce754f
#define public_6ce756f _public_6ce756f
#define public_6ce7579 _public_6ce7579
#define public_6ce759d _public_6ce759d
#define public_6ce75b0 _public_6ce75b0
#define public_6ce75cc _public_6ce75cc
#define public_6ce75d5 _public_6ce75d5
#define public_6ce75f0 _public_6ce75f0
#define public_6ce760c _public_6ce760c

PROC_DECLARE(0x6ce7350, internal_6ce7350, public_6ce7350);
extern "C" NAKED register_t __cdecl internal_6ce7350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60512 @0x6ce7352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60512
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        mov al, byte ptr ss : [esp+0x58]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        push ebx
        mov esi, ecx
        push ebx
        lea ecx, ss:[esp+0x40]
        xor ebp, ebp
        mov byte ptr ss : [esp+0x40], al
        call dword ptr ds : [public_6d641fc]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], ebx
        mov byte ptr ss : [esp+0x44], bl
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov ecx, dword ptr ds : [public_6d6402c]
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        mov edi, 0x12
        mov dword ptr ss : [esp+0x48], edi
        mov dx, word ptr ds : [ecx]
        mov dword ptr ss : [esp+0x5C], ebx
        mov word ptr ss : [esp+0x14], dx
        je public_6ce73cd
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce73cf
        public_6ce73cd : nop
        xor eax, eax
        public_6ce73cf : nop
        mov ecx, eax
        call dword ptr ds : [public_6d641f8]
        fcomp dword ptr ds : [public_6d65520]
        fnstsw ax
        test ah, 5
        jp public_6ce73f2
        mov edx, dword ptr ds : [public_6d6401c]
        mov ax, word ptr ds : [edx]
        mov word ptr ss : [esp+0x14], ax
        public_6ce73f2 : nop
        mov ecx, dword ptr ds : [public_6d6402c]
        mov dx, word ptr ss : [esp+0x14]
        cmp dx, word ptr ds : [ecx]
        je public_6ce75d5
        mov al, byte ptr ss : [esp+0x68]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], al
        call dword ptr ds : [public_6d641fc]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], bl
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ss : [esp+0x5C], 1
        mov dword ptr ss : [esp+0x2C], edi
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6ce7458
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_6ce7458
        mov ecx, eax
        jmp public_6ce745a
        public_6ce7458 : nop
        xor ecx, ecx
        public_6ce745a : nop
        mov ecx, dword ptr ds : [ecx+0xB4]
        mov edx, dword ptr ds : [public_6d6401c]
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x34], ecx
        cmp di, word ptr ds : [edx]
        jne public_6ce74be
        cmp eax, ebx
        je public_6ce7488
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce748a
        public_6ce7488 : nop
        xor eax, eax
        public_6ce748a : nop
        mov ecx, eax
        call dword ptr ds : [public_6d641f4]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6ce74ae
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ce74b0
        public_6ce74ae : nop
        xor eax, eax
        public_6ce74b0 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d641f0]
        fstp dword ptr ss : [esp+0x10]
        jmp public_6ce750f
        public_6ce74be : nop
        cmp eax, ebx
        je public_6ce74d3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce74d5
        public_6ce74d3 : nop
        xor eax, eax
        public_6ce74d5 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0xE4]
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6ce74fd
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ce74ff
        public_6ce74fd : nop
        xor eax, eax
        public_6ce74ff : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0xEC]
        public_6ce750f : nop
        fld dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0x18]
        fdiv dword ptr ds : [edi+0x1C]
        fld st(0)
        call public_6d60150
        mov ebp, eax
        mov dword ptr ss : [esp+0x68], ebp
        fisub dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [public_6d6551c]
        fnstsw ax
        test ah, 0x41
        jne public_6ce7541
        inc ebp
        mov dword ptr ss : [esp+0x68], ebp
        public_6ce7541 : nop
        mov eax, dword ptr ss : [esp+0x6C]
        cmp eax, ebp
        jge public_6ce754f
        mov ebp, eax
        mov dword ptr ss : [esp+0x68], ebp
        public_6ce754f : nop
        cmp ebp, ebx
        jle public_6ce759d
        fild dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [edi+0x1C]
        fadd dword ptr ss : [esp+0x18]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6ce756f
        fstp dword ptr ss : [esp+0x68]
        jmp public_6ce7579
        public_6ce756f : nop
        mov edx, dword ptr ss : [esp+0x10]
        fstp st(0)
        mov dword ptr ss : [esp+0x68], edx
        public_6ce7579 : nop
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x14]
        push ebx
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d641ec]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x188]
        public_6ce759d : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov byte ptr ss : [esp+0x5C], bl
        mov edi, eax
        je public_6ce75cc
        lea ecx, ds:[ecx]
        public_6ce75b0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6d641e8]
        cmp esi, edi
        jne public_6ce75b0
        mov eax, dword ptr ss : [esp+0x20]
        public_6ce75cc : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce75d5 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x5C], 0xFFFFFFFF
        mov edi, eax
        je public_6ce760c
        lea esp, ss:[esp]
        public_6ce75f0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x6C]
        push edx
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_6d641e8]
        cmp esi, edi
        jne public_6ce75f0
        mov eax, dword ptr ss : [esp+0x3C]
        public_6ce760c : nop
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x58]
        add esp, 4
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 0xC
        UNREACHABLE_TRAP(0x6ce7350)
    }
}

#undef public_6ce73cd
#undef public_6ce73cf
#undef public_6ce73f2
#undef public_6ce7458
#undef public_6ce745a
#undef public_6ce7488
#undef public_6ce748a
#undef public_6ce74ae
#undef public_6ce74b0
#undef public_6ce74be
#undef public_6ce74d3
#undef public_6ce74d5
#undef public_6ce74fd
#undef public_6ce74ff
#undef public_6ce750f
#undef public_6ce7541
#undef public_6ce754f
#undef public_6ce756f
#undef public_6ce7579
#undef public_6ce759d
#undef public_6ce75b0
#undef public_6ce75cc
#undef public_6ce75d5
#undef public_6ce75f0
#undef public_6ce760c
