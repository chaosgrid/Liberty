#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3310);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5940);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5980);
CLANG_FORWARD_PROC_SYMBOL(public_6eb59a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb59f0);

#define public_6ebc9b8 _public_6ebc9b8
#define public_6ebc9bc _public_6ebc9bc
#define public_6ebca0b _public_6ebca0b
#define public_6ebca5d _public_6ebca5d
#define public_6ebca66 _public_6ebca66
#define public_6ebca6d _public_6ebca6d
#define public_6ebcacf _public_6ebcacf
#define public_6ebcadf _public_6ebcadf
#define public_6ebcae8 _public_6ebcae8
#define public_6ebcb00 _public_6ebcb00
#define public_6ebcb14 _public_6ebcb14
#define public_6ebcb26 _public_6ebcb26
#define public_6ebcb90 _public_6ebcb90
#define public_6ebcbc6 _public_6ebcbc6
#define public_6ebcbe6 _public_6ebcbe6
#define public_6ebcbfa _public_6ebcbfa
#define public_6ebcc08 _public_6ebcc08
#define public_6ebcc15 _public_6ebcc15
#define public_6ebcc51 _public_6ebcc51
#define public_6ebcc6e _public_6ebcc6e
#define public_6ebccf1 _public_6ebccf1
#define public_6ebccf3 _public_6ebccf3

PROC_DECLARE(0x6ebc970, internal_6ebc970, public_6ebc970);
extern "C" NAKED register_t __cdecl internal_6ebc970()
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
        je public_6ebc9b8
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
        jge public_6ebca0b
        jmp public_6ebc9bc
        public_6ebc9b8 : nop
        mov esi, dword ptr ss : [esp+0x48]
        public_6ebc9bc : nop
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
        jge public_6ebca0b
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_6ebca0b
        test esi, esi
        jbe public_6ebca0b
        test edi, edi
        jbe public_6ebca0b
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
        public_6ebca0b : nop
        test eax, eax
        mov edi, eax
        jl public_6ebccf1
        mov ecx, dword ptr ds : [ebx+0xC]
        test ecx, ecx
        je public_6ebccf1
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
        jl public_6ebccf3
        mov edx, dword ptr ds : [ebx+0xC]
        test byte ptr ds : [edx+0x68], 0x10
        mov eax, dword ptr ss : [esp+0x28]
        seta byte ptr ss : [esp+0x54]
        test al, 0x10
        mov dword ptr ss : [esp+0x38], esi
        je public_6ebca5d
        mov dword ptr ss : [esp+0x38], 0xC
        public_6ebca5d : nop
        test al, 0x40
        je public_6ebca66
        mov esi, 4
        public_6ebca66 : nop
        test al, al
        jns public_6ebca6d
        add esi, 4
        public_6ebca6d : nop
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
        je public_6ebcc6e
        mov eax, dword ptr ss : [esp+0x28]
        xor ecx, ecx
        xor esi, esi
        test al, 0x10
        je public_6ebcacf
        mov esi, 0xC
        public_6ebcacf : nop
        test al, 0x40
        mov dword ptr ss : [esp+0x54], ecx
        je public_6ebcadf
        mov dword ptr ss : [esp+0x54], 4
        public_6ebcadf : nop
        test al, al
        jns public_6ebcae8
        add dword ptr ss : [esp+0x54], 4
        public_6ebcae8 : nop
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, eax
        and ecx, 0xC
        cmp cl, 0xC
        jne public_6ebcb00
        mov dword ptr ss : [esp+0x38], 0x1C
        jmp public_6ebcb26
        public_6ebcb00 : nop
        mov edx, eax
        and edx, 4
        cmp dl, 4
        jne public_6ebcb14
        mov dword ptr ss : [esp+0x38], 0x10
        jmp public_6ebcb26
        public_6ebcb14 : nop
        mov ecx, eax
        and ecx, 2
        cmp cl, 2
        jne public_6ebcb26
        mov dword ptr ss : [esp+0x38], 0xC
        public_6ebcb26 : nop
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
        je public_6ebcbc6
        mov edx, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ss : [esp+0x48]
        test eax, eax
        jbe public_6ebcc6e
        mov edx, eax
        mov dword ptr ss : [esp+0x44], edx
        lea esp, ss:[esp]
        public_6ebcb90 : nop
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
        jne public_6ebcb90
        jmp public_6ebcc6e
        public_6ebcbc6 : nop
        mov ebx, dword ptr ds : [eax+0x68]
        mov ecx, 0xC
        mov edx, ebx
        xor eax, eax
        and edx, ecx
        cmp dl, cl
        mov dword ptr ss : [esp+0x54], eax
        jne public_6ebcbe6
        mov dword ptr ss : [esp+0x54], 0x1C
        jmp public_6ebcc08
        public_6ebcbe6 : nop
        mov edx, ebx
        and edx, 4
        cmp dl, 4
        jne public_6ebcbfa
        mov dword ptr ss : [esp+0x54], 0x10
        jmp public_6ebcc08
        public_6ebcbfa : nop
        mov edx, ebx
        and edx, 2
        cmp dl, 2
        jne public_6ebcc08
        mov dword ptr ss : [esp+0x54], ecx
        public_6ebcc08 : nop
        test bl, 0x10
        mov dword ptr ss : [esp+0x38], eax
        je public_6ebcc15
        mov dword ptr ss : [esp+0x38], ecx
        public_6ebcc15 : nop
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
        jbe public_6ebcc6e
        public_6ebcc51 : nop
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
        jne public_6ebcc51
        public_6ebcc6e : nop
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
        mov edx, dword ptr ds : [edx*4+public_6ed4824]
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
        public_6ebccf1 : nop
        mov eax, edi
        public_6ebccf3 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0x20
        UNREACHABLE_TRAP(0x6ebc970)
    }
}

#undef public_6ebc9b8
#undef public_6ebc9bc
#undef public_6ebca0b
#undef public_6ebca5d
#undef public_6ebca66
#undef public_6ebca6d
#undef public_6ebcacf
#undef public_6ebcadf
#undef public_6ebcae8
#undef public_6ebcb00
#undef public_6ebcb14
#undef public_6ebcb26
#undef public_6ebcb90
#undef public_6ebcbc6
#undef public_6ebcbe6
#undef public_6ebcbfa
#undef public_6ebcc08
#undef public_6ebcc15
#undef public_6ebcc51
#undef public_6ebcc6e
#undef public_6ebccf1
#undef public_6ebccf3
