#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3310);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5940);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5980);
CLANG_FORWARD_PROC_SYMBOL(public_6eb59a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb59f0);

#define public_6eb55f8 _public_6eb55f8
#define public_6eb55fc _public_6eb55fc
#define public_6eb564b _public_6eb564b
#define public_6eb569d _public_6eb569d
#define public_6eb56a6 _public_6eb56a6
#define public_6eb56ad _public_6eb56ad
#define public_6eb570f _public_6eb570f
#define public_6eb571f _public_6eb571f
#define public_6eb5728 _public_6eb5728
#define public_6eb5740 _public_6eb5740
#define public_6eb5754 _public_6eb5754
#define public_6eb5766 _public_6eb5766
#define public_6eb57d0 _public_6eb57d0
#define public_6eb5806 _public_6eb5806
#define public_6eb5826 _public_6eb5826
#define public_6eb583a _public_6eb583a
#define public_6eb5848 _public_6eb5848
#define public_6eb5855 _public_6eb5855
#define public_6eb5891 _public_6eb5891
#define public_6eb58ae _public_6eb58ae
#define public_6eb5931 _public_6eb5931
#define public_6eb5933 _public_6eb5933

PROC_DECLARE(0x6eb55b0, internal_6eb55b0, public_6eb55b0);
extern "C" NAKED register_t __cdecl internal_6eb55b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x20]
        sub esp, 0x24
        test ah, 1
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x50]
        je public_6eb55f8
        mov edx, dword ptr ds : [ebx+0x18]
        mov edx, dword ptr ds : [edx+4]
        mov esi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edi
        add edx, esi
        mov esi, dword ptr ss : [esp+0x4C]
        push edx
        mov edx, dword ptr ss : [esp+0x4C]
        push esi
        push edx
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jge public_6eb564b
        jmp public_6eb55fc
        public_6eb55f8 : nop
        mov esi, dword ptr ss : [esp+0x48]
        public_6eb55fc : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x44]
        push eax
        mov eax, dword ptr ss : [esp+0x44]
        push edi
        push ecx
        push esi
        push edx
        push eax
        push ebx
        mov ecx, ebp
        call public_6eb59a0
        test eax, eax
        jge public_6eb564b
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_6eb564b
        test esi, esi
        jbe public_6eb564b
        test edi, edi
        jbe public_6eb564b
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x44]
        push ecx
        mov ecx, dword ptr ss : [esp+0x44]
        push edi
        push edx
        push esi
        push eax
        push ecx
        push ebx
        mov ecx, ebp
        call public_6eb59f0
        public_6eb564b : nop
        test eax, eax
        mov edi, eax
        jl public_6eb5931
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_6eb5931
        mov ecx, dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [eax]
        lea edi, ss:[esp+0x24]
        push edi
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        xor esi, esi
        cmp eax, esi
        jl public_6eb5933
        mov edx, dword ptr ds : [ebx+0xC]
        test byte ptr ds : [edx+0x68], 0x10
        mov eax, dword ptr ss : [esp+0x28]
        seta byte ptr ss : [esp+0x54]
        test al, 0x10
        mov dword ptr ss : [esp+0x38], esi
        je public_6eb569d
        mov dword ptr ss : [esp+0x38], 0xC
        public_6eb569d : nop
        test al, 0x40
        je public_6eb56a6
        mov esi, 4
        public_6eb56a6 : nop
        test al, al
        jns public_6eb56ad
        add esi, 4
        public_6eb56ad : nop
        push eax
        call public_6eb5940
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call public_6eb3310
        mov edx, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 8
        push edx
        mov edx, dword ptr ss : [esp+0x48]
        add esi, edi
        mov edi, dword ptr ds : [ebx+0xC]
        add eax, esi
        add eax, ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        imul eax, edx
        mov esi, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        push edi
        sub edx, eax
        push edx
        push ecx
        call dword ptr ds : [esi+0x20]
        mov al, byte ptr ss : [esp+0x54]
        test al, al
        je public_6eb58ae
        mov eax, dword ptr ss : [esp+0x28]
        xor ecx, ecx
        xor esi, esi
        test al, 0x10
        je public_6eb570f
        mov esi, 0xC
        public_6eb570f : nop
        test al, 0x40
        mov dword ptr ss : [esp+0x54], ecx
        je public_6eb571f
        mov dword ptr ss : [esp+0x54], 4
        public_6eb571f : nop
        test al, al
        jns public_6eb5728
        add dword ptr ss : [esp+0x54], 4
        public_6eb5728 : nop
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, eax
        and ecx, 0xC
        cmp cl, 0xC
        jne public_6eb5740
        mov dword ptr ss : [esp+0x38], 0x1C
        jmp public_6eb5766
        public_6eb5740 : nop
        mov edx, eax
        and edx, 4
        cmp dl, 4
        jne public_6eb5754
        mov dword ptr ss : [esp+0x38], 0x10
        jmp public_6eb5766
        public_6eb5754 : nop
        mov ecx, eax
        and ecx, 2
        cmp cl, 2
        jne public_6eb5766
        mov dword ptr ss : [esp+0x38], 0xC
        public_6eb5766 : nop
        push eax
        call public_6eb5940
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6eb3310
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x5C]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, eax
        mov eax, dword ptr ss : [esp+0x38]
        add edi, esi
        lea esi, ds:[ecx+eax]
        mov eax, dword ptr ds : [ebx+0xC]
        mov cl, byte ptr ds : [eax]
        add esp, 8
        add edi, edx
        test cl, 4
        je public_6eb5806
        mov edx, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ss : [esp+0x48]
        test eax, eax
        jbe public_6eb58ae
        mov edx, eax
        mov dword ptr ss : [esp+0x44], edx
        lea esp, ss:[esp]
        public_6eb57d0 : nop
        mov eax, dword ptr ds : [ecx]
        imul eax, dword ptr ss : [esp+0x1C]
        add eax, dword ptr ss : [esp+0x18]
        add ecx, 4
        fld dword ptr ds : [eax]
        fchs 
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        fchs 
        fstp dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x44]
        fchs 
        fstp dword ptr ds : [esi+8]
        add esi, edi
        dec eax
        mov dword ptr ss : [esp+0x44], eax
        jne public_6eb57d0
        jmp public_6eb58ae
        public_6eb5806 : nop
        mov ebx, dword ptr ds : [eax+0x68]
        mov ecx, 0xC
        mov edx, ebx
        xor eax, eax
        and edx, ecx
        cmp dl, cl
        mov dword ptr ss : [esp+0x54], eax
        jne public_6eb5826
        mov dword ptr ss : [esp+0x54], 0x1C
        jmp public_6eb5848
        public_6eb5826 : nop
        mov edx, ebx
        and edx, 4
        cmp dl, 4
        jne public_6eb583a
        mov dword ptr ss : [esp+0x54], 0x10
        jmp public_6eb5848
        public_6eb583a : nop
        mov edx, ebx
        and edx, 2
        cmp dl, 2
        jne public_6eb5848
        mov dword ptr ss : [esp+0x54], ecx
        public_6eb5848 : nop
        test bl, 0x10
        mov dword ptr ss : [esp+0x38], eax
        je public_6eb5855
        mov dword ptr ss : [esp+0x38], ecx
        public_6eb5855 : nop
        push ebx
        call public_6eb5980
        push ebx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6eb3310
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ss : [esp+0x44]
        add ecx, edx
        mov edx, dword ptr ds : [ebx+0xC]
        add eax, ecx
        add eax, dword ptr ss : [esp+0x5C]
        mov ecx, eax
        imul ecx, dword ptr ss : [esp+0x4C]
        add ecx, dword ptr ds : [edx+0x18]
        mov edx, dword ptr ss : [esp+0x50]
        add esp, 8
        test edx, edx
        jbe public_6eb58ae
        public_6eb5891 : nop
        fld dword ptr ds : [ecx]
        fchs 
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [ecx+4]
        fchs 
        fstp dword ptr ds : [esi+4]
        fld dword ptr ds : [ecx+8]
        add ecx, eax
        fchs 
        fstp dword ptr ds : [esi+8]
        add esi, edi
        dec edx
        jne public_6eb5891
        public_6eb58ae : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edx*4+public_6ed44cc]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x50]
        mov esi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        mov edx, dword ptr ds : [ebx+0x10]
        lea edx, ds:[edx+esi*2]
        push edx
        mov edx, dword ptr ss : [esp+0x54]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        push eax
        call dword ptr ds : [ecx+0x120]
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [ebp+4]
        push ecx
        push 0x16
        mov edi, eax
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+0xF0]
        public_6eb5931 : nop
        mov eax, edi
        public_6eb5933 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0x20
        UNREACHABLE_TRAP(0x6eb55b0)
    }
}

#undef public_6eb55f8
#undef public_6eb55fc
#undef public_6eb564b
#undef public_6eb569d
#undef public_6eb56a6
#undef public_6eb56ad
#undef public_6eb570f
#undef public_6eb571f
#undef public_6eb5728
#undef public_6eb5740
#undef public_6eb5754
#undef public_6eb5766
#undef public_6eb57d0
#undef public_6eb5806
#undef public_6eb5826
#undef public_6eb583a
#undef public_6eb5848
#undef public_6eb5855
#undef public_6eb5891
#undef public_6eb58ae
#undef public_6eb5931
#undef public_6eb5933
