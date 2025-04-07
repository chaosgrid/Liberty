#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_590500);
CLANG_FORWARD_PROC_SYMBOL(public_590b40);
CLANG_FORWARD_PROC_SYMBOL(public_590d70);
CLANG_FORWARD_PROC_SYMBOL(public_590f30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_590552 _public_590552
#define public_590554 _public_590554
#define public_59055c _public_59055c
#define public_59056f _public_59056f
#define public_59057c _public_59057c
#define public_5905a0 _public_5905a0
#define public_5905b8 _public_5905b8
#define public_5905c2 _public_5905c2
#define public_5905e2 _public_5905e2
#define public_5905fa _public_5905fa
#define public_590600 _public_590600
#define public_590613 _public_590613
#define public_590620 _public_590620
#define public_59062e _public_59062e
#define public_59066a _public_59066a
#define public_590697 _public_590697
#define public_5906d1 _public_5906d1
#define public_5906d5 _public_5906d5
#define public_5906ec _public_5906ec
#define public_590710 _public_590710
#define public_590720 _public_590720
#define public_590730 _public_590730
#define public_59073f _public_59073f
#define public_590755 _public_590755
#define public_590770 _public_590770
#define public_590794 _public_590794
#define public_5907a0 _public_5907a0
#define public_59080b _public_59080b
#define public_590820 _public_590820
#define public_59088f _public_59088f
#define public_590892 _public_590892

PROC_DECLARE(0x590500, internal_590500, public_590500);
extern "C" NAKED register_t __cdecl internal_590500()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x51EB851F
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_590697
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_590552
        mov edx, esi
        sub edx, ecx
        mov eax, 0x51EB851F
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        mov edi, edx
        jb public_590554
        public_590552 : nop
        mov edi, ebp
        public_590554 : nop
        test ecx, ecx
        jne public_59055c
        xor edx, edx
        jmp public_59056f
        public_59055c : nop
        sub esi, ecx
        mov eax, 0x51EB851F
        imul esi
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_59056f : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_59057c
        xor eax, eax
        public_59057c : nop
        imul eax, 0x64
        push eax
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_5905b8
        lea ecx, ds:[ecx]
        public_5905a0 : nop
        push esi
        push ebx
        call public_590b40
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x64
        add esp, 8
        add ebx, 0x64
        cmp esi, eax
        jne public_5905a0
        public_5905b8 : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_5905e2
        mov dword ptr ss : [esp+0x24], ebp
        public_5905c2 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_590b40
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x64
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_5905c2
        mov eax, dword ptr ss : [esp+0x20]
        public_5905e2 : nop
        mov ecx, ebp
        imul ecx, 0x64
        add ecx, ebx
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_590613
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_590600
        public_5905fa : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_590600 : nop
        add ecx, esi
        push esi
        push ecx
        call public_590b40
        add esi, 0x64
        add esp, 8
        cmp esi, ebx
        jne public_5905fa
        public_590613 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_59062e
        lea ecx, ds:[ecx]
        public_590620 : nop
        mov ecx, esi
        call public_444ee0
        add esi, 0x64
        cmp esi, ebx
        jne public_590620
        public_59062e : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x64
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_59066a
        xor edx, edx
        mov edx, ebp
        imul edx, 0x64
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_59066a : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x51EB851F
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, ebp
        imul edx, 0x64
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_590697 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x51EB851F
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_590755
        mov eax, ebp
        imul eax, 0x64
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov edi, ebx
        je public_5906ec
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_5906d5
        public_5906d1 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_5906d5 : nop
        add eax, edi
        push edi
        push eax
        call public_590b40
        add edi, 0x64
        add esp, 8
        cmp edi, esi
        jne public_5906d1
        mov ecx, dword ptr ss : [esp+0x10]
        public_5906ec : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x51EB851F
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_590720
        lea esp, ss:[esp]
        public_590710 : nop
        push edi
        push esi
        call public_590b40
        add esp, 8
        add esi, 0x64
        dec ebp
        jne public_590710
        public_590720 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [ebp+8]
        cmp ebx, esi
        je public_59073f
        nop 
        lea esp, ss:[esp]
        public_590730 : nop
        push edi
        mov ecx, ebx
        call public_590d70
        add ebx, 0x64
        cmp ebx, esi
        jne public_590730
        public_59073f : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        add eax, edx
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_590755 : nop
        test ebp, ebp
        jbe public_590892
        imul ebp, 0x64
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], ebp
        je public_590794
        public_590770 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        push eax
        call public_590b40
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x64
        add edi, 0x64
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_590770
        mov ecx, dword ptr ss : [esp+0x10]
        public_590794 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_59080b
        nop 
        public_5907a0 : nop
        mov ecx, dword ptr ds : [esi-0x64]
        sub esi, 0x64
        sub edi, 0x64
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [esi+8]
        push 0xFFFFFFFF
        push eax
        lea ecx, ds:[edi+8]
        call public_413df0
        lea ecx, ds:[esi+0x10]
        push ecx
        lea ecx, ds:[edi+0x10]
        call public_590f30
        cmp esi, ebx
        mov edx, dword ptr ds : [esi+0x44]
        mov dword ptr ds : [edi+0x44], edx
        lea eax, ds:[esi+0x48]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+0x48]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ds:[esi+0x54]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[edi+0x54]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov dl, byte ptr ds : [esi+0x60]
        mov byte ptr ds : [edi+0x60], dl
        jne public_5907a0
        mov ecx, dword ptr ss : [esp+0x10]
        public_59080b : nop
        lea eax, ds:[ebx+ebp]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_59088f
        mov edi, dword ptr ss : [esp+0x28]
        lea ebp, ds:[edi+0x10]
        lea esi, ds:[ebx+8]
        public_590820 : nop
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi-8], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi-4], ecx
        mov edx, dword ptr ds : [edi+8]
        push 0xFFFFFFFF
        push edx
        mov ecx, esi
        call public_413df0
        push ebp
        lea ecx, ds:[esi+8]
        call public_590f30
        mov eax, dword ptr ds : [edi+0x44]
        mov dword ptr ds : [esi+0x3C], eax
        lea eax, ds:[edi+0x48]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x40]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea eax, ds:[edi+0x54]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x4C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ds : [edi+0x60]
        mov eax, dword ptr ss : [esp+0x20]
        mov byte ptr ds : [esi+0x58], cl
        add esi, 0x64
        lea edx, ds:[esi-8]
        cmp edx, eax
        jne public_590820
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x24]
        public_59088f : nop
        add dword ptr ds : [ecx+8], ebp
        public_590892 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x590500)
    }
}

#undef public_590552
#undef public_590554
#undef public_59055c
#undef public_59056f
#undef public_59057c
#undef public_5905a0
#undef public_5905b8
#undef public_5905c2
#undef public_5905e2
#undef public_5905fa
#undef public_590600
#undef public_590613
#undef public_590620
#undef public_59062e
#undef public_59066a
#undef public_590697
#undef public_5906d1
#undef public_5906d5
#undef public_5906ec
#undef public_590710
#undef public_590720
#undef public_590730
#undef public_59073f
#undef public_590755
#undef public_590770
#undef public_590794
#undef public_5907a0
#undef public_59080b
#undef public_590820
#undef public_59088f
#undef public_590892
