#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec99e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eca3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eca530);
CLANG_FORWARD_PROC_SYMBOL(public_6eca750);
CLANG_FORWARD_PROC_SYMBOL(public_6eca760);
CLANG_FORWARD_PROC_SYMBOL(public_6eca770);
CLANG_FORWARD_PROC_SYMBOL(public_6eca7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eca7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecaa00);
CLANG_FORWARD_PROC_SYMBOL(public_6ecaa70);
CLANG_FORWARD_PROC_SYMBOL(public_6ecaab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecad00);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb450);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb530);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0b10);

#define public_6ec9623 _public_6ec9623
#define public_6ec966a _public_6ec966a
#define public_6ec9678 _public_6ec9678
#define public_6ec9770 _public_6ec9770
#define public_6ec9796 _public_6ec9796
#define public_6ec97e2 _public_6ec97e2
#define public_6ec97f9 _public_6ec97f9
#define public_6ec9800 _public_6ec9800
#define public_6ec9818 _public_6ec9818
#define public_6ec98d6 _public_6ec98d6
#define public_6ec994f _public_6ec994f
#define public_6ec9956 _public_6ec9956
#define public_6ec9963 _public_6ec9963
#define public_6ec9976 _public_6ec9976
#define public_6ec9993 _public_6ec9993

PROC_DECLARE(0x6ec9570, internal_6ec9570, public_6ec9570);
extern "C" NAKED register_t __cdecl internal_6ec9570()
{
    __asm
    {
        sub esp, 0x154
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x160]
        mov eax, dword ptr ss : [ebp+0x70]
        mov ecx, dword ptr ds : [eax]
        xor ebx, ebx
        cmp ecx, ebx
        push esi
        jge public_6ec9678
        mov eax, dword ptr ss : [esp+0x168]
        lea edx, ss:[esp+0xC]
        push edx
/*FIXUP push offset public_6ed428c @0x6ec959b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed428c
        mov dword ptr ss : [esp+0x14], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_6ec9623
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ss : [esp+0x16C]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ss : [esp+0x188]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x184]
        push ecx
        mov ecx, dword ptr ss : [esp+0x184]
        push ecx
        mov ecx, dword ptr ss : [esp+0x184]
        push ecx
        mov ecx, dword ptr ss : [esp+0x184]
        push ecx
        mov ecx, dword ptr ss : [esp+0x184]
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x1C]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        je public_6ec966a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x154
        ret 0x28
        public_6ec9623 : nop
        mov ecx, dword ptr ss : [esp+0x188]
        mov eax, dword ptr ss : [esp+0x168]
        push ecx
        mov ecx, dword ptr ss : [esp+0x184]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x184]
        push ecx
        mov ecx, dword ptr ss : [esp+0x184]
        push ecx
        mov ecx, dword ptr ss : [esp+0x184]
        push ecx
        mov ecx, dword ptr ss : [esp+0x184]
        push ecx
        mov ecx, dword ptr ss : [esp+0x184]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov esi, eax
        public_6ec966a : nop
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x154
        ret 0x28
        public_6ec9678 : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        push edi
        inc ecx
        lea edi, ds:[eax+8]
        mov dword ptr ds : [eax+0x1C], ecx
        lea edx, ss:[esp+0x16C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6ecaa00
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, dword ptr ds : [edi+4]
        jne public_6ec9796
        mov cl, byte ptr ss : [esp+0x1B]
        mov byte ptr ss : [esp+0x20], cl
        push 0xF8
        lea ecx, ss:[esp+0x24]
        call public_6ecad00
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov edx, dword ptr ss : [esp+0x16C]
        mov dword ptr ss : [esp+0x24], eax
        mov al, byte ptr ss : [esp+0x20]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], edx
        mov byte ptr ss : [esp+0x38], al
        call public_6ecaab0
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ebx
        call public_6eca7e0
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x34]
        mov esi, eax
        call public_6eca7e0
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6ecb4b0
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, edi
        call public_6eca7f0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6eca7e0
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6ecaa70
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov esi, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ec9796
        public_6ec9770 : nop
        push ebx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6eca760
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6ecb530
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6ec9770
        public_6ec9796 : nop
        push ebx
        lea ecx, ss:[esp+0xD0]
        call public_6ec99e0
        push ebx
        lea ecx, ss:[esp+0x100]
        call public_6ec99e0
        lea ecx, ss:[esp+0x14]
        call public_6eca770
        mov ecx, eax
        add ecx, 4
        call public_6eca750
        mov ebx, eax
        lea ecx, ss:[esp+0x14]
        inc ebx
        call public_6eca770
        mov esi, eax
        mov eax, dword ptr ds : [esi+0xC]
        add esi, 4
        cmp ebx, eax
        jbe public_6ec97f9
        sub ebx, eax
        mov edi, dword ptr ds : [esi+4]
        je public_6ec9818
        public_6ec97e2 : nop
        lea edx, ss:[esp+0x74]
        push edx
        push edi
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, esi
        call public_6ecb450
        dec ebx
        jne public_6ec97e2
        jmp public_6ec9818
        public_6ec97f9 : nop
        jae public_6ec9818
        nop 
        lea esp, ss:[esp]
        public_6ec9800 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+4]
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        call public_6ecb530
        cmp ebx, dword ptr ds : [esi+8]
        jb public_6ec9800
        public_6ec9818 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x14]
        mov ebx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+0x174]
        mov eax, dword ptr ss : [esp+0x18C]
        mov ecx, dword ptr ss : [esp+0x188]
        add ebx, 8
        mov dword ptr ds : [ebx+0xB8], edx
        mov edx, dword ptr ss : [esp+0x180]
        mov dword ptr ds : [ebx+0xE0], eax
        mov eax, dword ptr ss : [esp+0x184]
        mov dword ptr ds : [ebx+0xEC], ecx
        mov ecx, dword ptr ss : [esp+0x178]
        mov dword ptr ds : [ebx+0xC4], edx
        mov edx, dword ptr ss : [esp+0x17C]
        mov dword ptr ds : [ebx+0xC8], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xBC], ecx
        mov dword ptr ds : [ebx+0xC0], edx
        mov eax, dword ptr ss : [ebp+0x7C]
        mov dword ptr ds : [ebx+0xE8], eax
        mov ecx, dword ptr ss : [ebp+0x78]
        mov ebp, dword ptr ss : [esp+0x170]
        mov dword ptr ds : [ebx+0xE4], ecx
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx+4], edx
        mov eax, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [ebx+0x24], eax
        mov ecx, dword ptr ss : [ebp+0x1C]
        lea eax, ds:[ebx+0x28]
        mov dword ptr ds : [ebx+8], eax
        lea eax, ds:[ebx+0x58]
        mov dword ptr ds : [ebx+0x20], ecx
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ds : [public_6ed57f4]
        test eax, eax
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [ebp+8]
        jne public_6ec98d6
        call public_6ed0b10
        mov dword ptr ds : [public_6ed57f4], eax
        public_6ec98d6 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        lea ecx, ss:[esp+0x4C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [ebx+0xE0]
        test ah, 1
        lea edi, ds:[ebx+0x88]
        mov ecx, 0xC
        lea esi, ss:[esp+0x44]
        rep movsd
        mov esi, dword ptr ss : [ebp+4]
        mov ecx, 0xC
        lea edi, ds:[ebx+0x28]
        rep movsd
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, 0xC
        lea edi, ds:[ebx+0x58]
        rep movsd
        je public_6ec994f
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0xCC]
        mov esi, edx
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ds : [esi]
        lea ecx, ds:[ebx+0xD8]
        mov dword ptr ds : [ecx], edi
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ebx+0x18], edx
        mov dword ptr ds : [ebx+0x1C], ecx
        jmp public_6ec9956
        public_6ec994f : nop
        mov dword ptr ds : [ebx+0x18], 0
        public_6ec9956 : nop
        test al, 4
        pop edi
        je public_6ec9963
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0x10], edx
        jmp public_6ec9976
        public_6ec9963 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [esp+0x164]
        push eax
        call public_6eca530
        mov dword ptr ds : [ebx+0x10], eax
        public_6ec9976 : nop
        test byte ptr ds : [ebx+0xE0], 8
        je public_6ec9993
        mov ecx, dword ptr ss : [ebp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x14], ecx
        xor eax, eax
        pop ebx
        add esp, 0x154
        ret 0x28
        public_6ec9993 : nop
        mov edx, dword ptr ss : [esp+0x180]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [esp+0x17C]
        push edx
        lea edx, ds:[eax+ecx*2]
        mov ecx, dword ptr ss : [esp+0x168]
        push edx
        call public_6eca3d0
        mov dword ptr ds : [ebx+0x14], eax
        mov eax, dword ptr ds : [ebx]
        pop esi
        or eax, 1
        mov dword ptr ds : [ebx], eax
        pop ebp
        mov dword ptr ds : [ebx+0xC4], 0
        xor eax, eax
        pop ebx
        add esp, 0x154
        ret 0x28
        UNREACHABLE_TRAP(0x6ec9570)
    }
}

#undef public_6ec9623
#undef public_6ec966a
#undef public_6ec9678
#undef public_6ec9770
#undef public_6ec9796
#undef public_6ec97e2
#undef public_6ec97f9
#undef public_6ec9800
#undef public_6ec9818
#undef public_6ec98d6
#undef public_6ec994f
#undef public_6ec9956
#undef public_6ec9963
#undef public_6ec9976
#undef public_6ec9993
