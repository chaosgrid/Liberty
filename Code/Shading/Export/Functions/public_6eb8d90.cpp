#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3310);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5940);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5980);
CLANG_FORWARD_PROC_SYMBOL(public_6eb59a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb59f0);

#define public_6eb8dd8 _public_6eb8dd8
#define public_6eb8ddc _public_6eb8ddc
#define public_6eb8e2b _public_6eb8e2b
#define public_6eb8e7d _public_6eb8e7d
#define public_6eb8e86 _public_6eb8e86
#define public_6eb8e8d _public_6eb8e8d
#define public_6eb8eef _public_6eb8eef
#define public_6eb8eff _public_6eb8eff
#define public_6eb8f08 _public_6eb8f08
#define public_6eb8f20 _public_6eb8f20
#define public_6eb8f34 _public_6eb8f34
#define public_6eb8f46 _public_6eb8f46
#define public_6eb8fb0 _public_6eb8fb0
#define public_6eb8fe6 _public_6eb8fe6
#define public_6eb9006 _public_6eb9006
#define public_6eb901a _public_6eb901a
#define public_6eb9028 _public_6eb9028
#define public_6eb9035 _public_6eb9035
#define public_6eb9071 _public_6eb9071
#define public_6eb908e _public_6eb908e
#define public_6eb9111 _public_6eb9111
#define public_6eb9113 _public_6eb9113

PROC_DECLARE(0x6eb8d90, internal_6eb8d90, public_6eb8d90);
extern "C" NAKED register_t __cdecl internal_6eb8d90()
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
        je public_6eb8dd8
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
        jge public_6eb8e2b
        jmp public_6eb8ddc
        public_6eb8dd8 : nop
        mov esi, dword ptr ss : [esp+0x48]
        public_6eb8ddc : nop
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
        jge public_6eb8e2b
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_6eb8e2b
        test esi, esi
        jbe public_6eb8e2b
        test edi, edi
        jbe public_6eb8e2b
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
        public_6eb8e2b : nop
        test eax, eax
        mov edi, eax
        jl public_6eb9111
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_6eb9111
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
        jl public_6eb9113
        mov edx, dword ptr ds : [ebx+0xC]
        test byte ptr ds : [edx+0x68], 0x10
        mov eax, dword ptr ss : [esp+0x28]
        seta byte ptr ss : [esp+0x54]
        test al, 0x10
        mov dword ptr ss : [esp+0x38], esi
        je public_6eb8e7d
        mov dword ptr ss : [esp+0x38], 0xC
        public_6eb8e7d : nop
        test al, 0x40
        je public_6eb8e86
        mov esi, 4
        public_6eb8e86 : nop
        test al, al
        jns public_6eb8e8d
        add esi, 4
        public_6eb8e8d : nop
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
        je public_6eb908e
        mov eax, dword ptr ss : [esp+0x28]
        xor ecx, ecx
        xor esi, esi
        test al, 0x10
        je public_6eb8eef
        mov esi, 0xC
        public_6eb8eef : nop
        test al, 0x40
        mov dword ptr ss : [esp+0x54], ecx
        je public_6eb8eff
        mov dword ptr ss : [esp+0x54], 4
        public_6eb8eff : nop
        test al, al
        jns public_6eb8f08
        add dword ptr ss : [esp+0x54], 4
        public_6eb8f08 : nop
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, eax
        and ecx, 0xC
        cmp cl, 0xC
        jne public_6eb8f20
        mov dword ptr ss : [esp+0x38], 0x1C
        jmp public_6eb8f46
        public_6eb8f20 : nop
        mov edx, eax
        and edx, 4
        cmp dl, 4
        jne public_6eb8f34
        mov dword ptr ss : [esp+0x38], 0x10
        jmp public_6eb8f46
        public_6eb8f34 : nop
        mov ecx, eax
        and ecx, 2
        cmp cl, 2
        jne public_6eb8f46
        mov dword ptr ss : [esp+0x38], 0xC
        public_6eb8f46 : nop
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
        je public_6eb8fe6
        mov edx, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ss : [esp+0x48]
        test eax, eax
        jbe public_6eb908e
        mov edx, eax
        mov dword ptr ss : [esp+0x44], edx
        lea esp, ss:[esp]
        public_6eb8fb0 : nop
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
        jne public_6eb8fb0
        jmp public_6eb908e
        public_6eb8fe6 : nop
        mov ebx, dword ptr ds : [eax+0x68]
        mov ecx, 0xC
        mov edx, ebx
        xor eax, eax
        and edx, ecx
        cmp dl, cl
        mov dword ptr ss : [esp+0x54], eax
        jne public_6eb9006
        mov dword ptr ss : [esp+0x54], 0x1C
        jmp public_6eb9028
        public_6eb9006 : nop
        mov edx, ebx
        and edx, 4
        cmp dl, 4
        jne public_6eb901a
        mov dword ptr ss : [esp+0x54], 0x10
        jmp public_6eb9028
        public_6eb901a : nop
        mov edx, ebx
        and edx, 2
        cmp dl, 2
        jne public_6eb9028
        mov dword ptr ss : [esp+0x54], ecx
        public_6eb9028 : nop
        test bl, 0x10
        mov dword ptr ss : [esp+0x38], eax
        je public_6eb9035
        mov dword ptr ss : [esp+0x38], ecx
        public_6eb9035 : nop
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
        jbe public_6eb908e
        public_6eb9071 : nop
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
        jne public_6eb9071
        public_6eb908e : nop
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
        mov edx, dword ptr ds : [edx*4+public_6ed46a8]
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
        public_6eb9111 : nop
        mov eax, edi
        public_6eb9113 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0x20
        UNREACHABLE_TRAP(0x6eb8d90)
    }
}

#undef public_6eb8dd8
#undef public_6eb8ddc
#undef public_6eb8e2b
#undef public_6eb8e7d
#undef public_6eb8e86
#undef public_6eb8e8d
#undef public_6eb8eef
#undef public_6eb8eff
#undef public_6eb8f08
#undef public_6eb8f20
#undef public_6eb8f34
#undef public_6eb8f46
#undef public_6eb8fb0
#undef public_6eb8fe6
#undef public_6eb9006
#undef public_6eb901a
#undef public_6eb9028
#undef public_6eb9035
#undef public_6eb9071
#undef public_6eb908e
#undef public_6eb9111
#undef public_6eb9113
