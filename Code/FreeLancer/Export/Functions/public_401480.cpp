#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401130);
CLANG_FORWARD_PROC_SYMBOL(public_401480);
CLANG_FORWARD_PROC_SYMBOL(public_401b90);
CLANG_FORWARD_PROC_SYMBOL(public_401dd0);
CLANG_FORWARD_PROC_SYMBOL(public_401e30);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_471640);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_4014a0 _public_4014a0
#define public_4014bf _public_4014bf
#define public_4014c2 _public_4014c2
#define public_4014c7 _public_4014c7
#define public_401530 _public_401530
#define public_401549 _public_401549
#define public_401553 _public_401553
#define public_401557 _public_401557
#define public_401565 _public_401565
#define public_4015a3 _public_4015a3
#define public_4015b2 _public_4015b2
#define public_4015d3 _public_4015d3
#define public_4015f4 _public_4015f4
#define public_401602 _public_401602
#define public_401621 _public_401621
#define public_40162d _public_40162d
#define public_40164b _public_40164b
#define public_40167f _public_40167f
#define public_401688 _public_401688
#define public_4016bb _public_4016bb
#define public_4016c9 _public_4016c9

PROC_DECLARE(0x401480, internal_401480, public_401480);
extern "C" NAKED register_t __cdecl internal_401480()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ds : [edi+8]
        mov al, 1
        je public_4014c7
        lea ebx, ds:[ebx]
        public_4014a0 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [ebx]
        push eax
        push ecx
        mov ebp, esi
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        setl al
        test al, al
        je public_4014bf
        mov esi, dword ptr ds : [esi]
        jmp public_4014c2
        public_4014bf : nop
        mov esi, dword ptr ds : [esi+8]
        public_4014c2 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_4014a0
        public_4014c7 : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_40164b
        push 0
        push ebp
        mov ecx, edi
        call public_471640
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_401e30
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp ebp, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_401530
        cmp esi, dword ptr ds : [edi+8]
        jne public_401530
        lea eax, ss:[ebp+0xC]
        push eax
        push ebx
        lea ecx, ds:[edi+1]
        call public_401130
        test al, al
        jne public_401530
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [eax+8]
        jne public_401557
        mov dword ptr ds : [eax+8], ebx
        jmp public_401557
        public_401530 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp ebp, eax
        jne public_401549
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_401553
        public_401549 : nop
        cmp ebp, dword ptr ds : [eax]
        jne public_401553
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        public_401553 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        public_401557 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_40162d
        public_401565 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        jne public_40162d
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_4015d3
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_4015a3
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [ecx+0x18], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_401621
        public_4015a3 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_4015b2
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_4015b2 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x18], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x18], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_401621
        public_4015d3 : nop
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_4015f4
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x18], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_401621
        public_4015f4 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_401602
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_401602 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x18], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_401621 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_401565
        public_40162d : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x18], 1
        mov eax, dword ptr ss : [esp+0x18]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        add esp, 8
        ret 8
        public_40164b : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebp
        je public_401688
        mov ecx, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [ecx]
        jne public_40167f
        push ebx
        push ebp
        push esi
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, edi
        call public_401b90
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        add esp, 8
        ret 8
        public_40167f : nop
        lea ecx, ss:[esp+0x10]
        call public_401dd0
        public_401688 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+0xC]
        push eax
        push ecx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jge public_4016bb
        lea eax, ss:[esp+0x20]
        push eax
        push ebx
        push ebp
        push esi
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], 1
        call public_401b90
        jmp public_4016c9
        public_4016bb : nop
        lea edx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x20], 0
        push edx
        lea eax, ss:[esp+0x14]
        public_4016c9 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, esi
        push eax
        call public_46d660
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x401480)
    }
}

#undef public_4014a0
#undef public_4014bf
#undef public_4014c2
#undef public_4014c7
#undef public_401530
#undef public_401549
#undef public_401553
#undef public_401557
#undef public_401565
#undef public_4015a3
#undef public_4015b2
#undef public_4015d3
#undef public_4015f4
#undef public_401602
#undef public_401621
#undef public_40162d
#undef public_40164b
#undef public_40167f
#undef public_401688
#undef public_4016bb
#undef public_4016c9
