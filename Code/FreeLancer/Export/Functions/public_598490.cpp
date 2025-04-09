#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_599360);
CLANG_FORWARD_PROC_SYMBOL(public_5995c0);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_599610);
CLANG_FORWARD_PROC_SYMBOL(public_5998f0);
CLANG_FORWARD_PROC_SYMBOL(public_599a60);
CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4b58);

#define public_598507 _public_598507
#define public_59850f _public_59850f
#define public_598537 _public_598537
#define public_598554 _public_598554
#define public_598573 _public_598573
#define public_59857b _public_59857b
#define public_5985a3 _public_5985a3
#define public_5985be _public_5985be
#define public_598602 _public_598602
#define public_59861f _public_59861f
#define public_598663 _public_598663
#define public_598680 _public_598680
#define public_598692 _public_598692
#define public_5986d2 _public_5986d2
#define public_5986dd _public_5986dd
#define public_5986fe _public_5986fe
#define public_598706 _public_598706
#define public_598720 _public_598720
#define public_598754 _public_598754
#define public_598756 _public_598756
#define public_598786 _public_598786

PROC_DECLARE(0x598490, internal_598490, public_598490);
extern "C" NAKED register_t __cdecl internal_598490()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c4b58 @0x598498*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4b58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        push esi
        call public_59dd00
        push esi
        call public_59dbf0
        mov cl, byte ptr ds : [esi+0x6C]
        mov ebx, dword ptr ss : [esp+0x34]
        and cl, 0xFB
        or cl, 3
        add esp, 0xC
        test ebx, ebx
        mov byte ptr ds : [esi+0x6C], cl
        je public_598692
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [esi+0x7C], edx
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi+0x80], eax
        mov ecx, dword ptr ds : [esi+0x98]
        test ecx, ecx
        lea edi, ds:[esi+0x94]
        push ebp
        mov ebp, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x28], 0
        jne public_598507
        xor eax, eax
        jmp public_59850f
        public_598507 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_59850f : nop
        cmp eax, ebp
        jae public_598537
        mov ecx, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x2C], ecx
        push edx
        mov ecx, edi
        call public_5ad970
        sub ebp, eax
        mov eax, dword ptr ss : [esp+0x30]
        push ebp
        push eax
        mov ecx, edi
        call public_537260
        jmp public_598554
        public_598537 : nop
        mov ecx, edi
        call public_5ad970
        cmp ebp, eax
        jae public_598554
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        lea ecx, ds:[ecx+ebp*4]
        push eax
        push ecx
        mov ecx, edi
        call public_5995c0
        public_598554 : nop
        mov ecx, dword ptr ds : [esi+0xA8]
        test ecx, ecx
        mov ebp, dword ptr ds : [ebx+0xC]
        lea edi, ds:[esi+0xA4]
        mov dword ptr ss : [esp+0x28], 0
        jne public_598573
        xor eax, eax
        jmp public_59857b
        public_598573 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_59857b : nop
        cmp eax, ebp
        mov ecx, edi
        jae public_5985a3
        mov edx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x28]
        push eax
        mov dword ptr ss : [esp+0x30], edx
        call public_5ad970
        mov ecx, dword ptr ss : [esp+0x30]
        sub ebp, eax
        push ebp
        push ecx
        mov ecx, edi
        call public_537260
        jmp public_5985be
        public_5985a3 : nop
        call public_5ad970
        cmp ebp, eax
        jae public_5985be
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        lea edx, ds:[ecx+ebp*4]
        push eax
        push edx
        mov ecx, edi
        call public_5995c0
        public_5985be : nop
        mov edi, dword ptr ds : [ebx+0xC]
        imul edi, dword ptr ds : [ebx+8]
        lea ebp, ds:[esi+0x84]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], 0
        call public_5ad970
        cmp eax, edi
        jae public_598602
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], eax
        call public_5ad970
        mov edx, dword ptr ss : [esp+0x30]
        sub edi, eax
        push edi
        push edx
        mov ecx, ebp
        call public_599360
        jmp public_59861f
        public_598602 : nop
        mov ecx, ebp
        call public_5ad970
        cmp edi, eax
        jae public_59861f
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        push eax
        lea eax, ds:[ecx+edi*4]
        push eax
        mov ecx, ebp
        call public_5995c0
        public_59861f : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov byte ptr ss : [esp+0x11], 1
        mov byte ptr ss : [esp+0x10], 1
        mov ebp, dword ptr ds : [ebx+8]
        lea edi, ds:[esi+0xB4]
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call public_5995f0
        cmp eax, ebp
        jae public_598663
        mov ebx, dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call public_5995f0
        sub ebp, eax
        push ebp
        push ebx
        mov ecx, edi
        call public_599610
        jmp public_598680
        public_598663 : nop
        mov ecx, edi
        call public_5995f0
        cmp ebp, eax
        jae public_598680
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        lea edx, ds:[ecx+ebp*8]
        push eax
        push edx
        mov ecx, edi
        call public_5998f0
        public_598680 : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_599a60
        pop ebp
        public_598692 : nop
        lea edi, ds:[esi+0xA4]
        mov ecx, edi
        call public_5ad970
        test eax, eax
        jbe public_598786
        mov ecx, dword ptr ds : [esi+0x98]
        xor ebx, ebx
        cmp ecx, ebx
        je public_598786
        mov eax, dword ptr ds : [esi+0x9C]
        sub eax, ecx
        sar eax, 2
        cmp eax, ebx
        jbe public_598786
        cmp ecx, ebx
        jne public_5986d2
        xor eax, eax
        jmp public_5986dd
        public_5986d2 : nop
        mov eax, dword ptr ds : [esi+0x9C]
        sub eax, ecx
        sar eax, 2
        public_5986dd : nop
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ebx
        fild qword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        fdivr dword ptr ds : [esi+0x80]
        fstp dword ptr ss : [esp+0x24]
        jne public_5986fe
        xor eax, eax
        jmp public_598706
        public_5986fe : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_598706 : nop
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ebx
        fild qword ptr ss : [esp+0xC]
        xor ecx, ecx
        fdivr dword ptr ds : [esi+0x7C]
        fstp dword ptr ss : [esp+0x28]
        nop 
        lea esp, ss:[esp]
        public_598720 : nop
        mov edx, dword ptr ds : [esi+0x98]
        cmp edx, ebx
        je public_598754
        mov eax, dword ptr ds : [esi+0x9C]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        jae public_598754
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], ebx
        fild qword ptr ss : [esp+0xC]
        mov eax, edx
        inc ecx
        fmul dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ds : [eax+ecx*4-4]
        jmp public_598720
        public_598754 : nop
        xor ecx, ecx
        public_598756 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp edx, ebx
        je public_598786
        mov eax, dword ptr ds : [edi+8]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        jae public_598786
        mov edx, dword ptr ds : [esi+0xA8]
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], ebx
        fild qword ptr ss : [esp+0xC]
        inc ecx
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ds : [edx+ecx*4-4]
        jmp public_598756
        public_598786 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x598490)
    }
}

#undef public_598507
#undef public_59850f
#undef public_598537
#undef public_598554
#undef public_598573
#undef public_59857b
#undef public_5985a3
#undef public_5985be
#undef public_598602
#undef public_59861f
#undef public_598663
#undef public_598680
#undef public_598692
#undef public_5986d2
#undef public_5986dd
#undef public_5986fe
#undef public_598706
#undef public_598720
#undef public_598754
#undef public_598756
#undef public_598786
