#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62dda10);
CLANG_FORWARD_PROC_SYMBOL(public_62ddcd0);
CLANG_FORWARD_PROC_SYMBOL(public_62df2d0);
CLANG_FORWARD_PROC_SYMBOL(public_62df3a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5c00);

#define public_62dda4c _public_62dda4c
#define public_62dda4e _public_62dda4e
#define public_62ddb03 _public_62ddb03
#define public_62ddb24 _public_62ddb24
#define public_62ddbf5 _public_62ddbf5
#define public_62ddc41 _public_62ddc41
#define public_62ddca9 _public_62ddca9
#define public_62ddcb5 _public_62ddcb5

PROC_DECLARE(0x62dda10, internal_62dda10, public_62dda10);
extern "C" NAKED register_t __cdecl internal_62dda10()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x245]
        test al, al
        push edi
        je public_62ddcb5
        mov al, byte ptr ds : [esi+0x254]
        test al, al
        je public_62ddcb5
        mov eax, dword ptr ds : [esi+0x1C0]
        add eax, 0xF0
        mov eax, dword ptr ds : [eax]
        xor ebx, ebx
        cmp eax, ebx
        je public_62dda4c
        lea edi, ds:[eax-8]
        jmp public_62dda4e
        public_62dda4c : nop
        xor edi, edi
        public_62dda4e : nop
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_62ddcd0
        test eax, eax
        jne public_62ddb03
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [ecx], 2
        mov dword ptr ds : [esi+0x25C], 2
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_639fb58]
        sub esp, 0xC
        lea ecx, ss:[esp+0x1C]
        mov esi, eax
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_639fb58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_639fb58]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fadd dword ptr ds : [esi+0x2C]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+0x24]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        mov dword ptr ds : [eax+4], edx
        pop esi
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        pop ebx
        add esp, 0x34
        ret 0xC
        public_62ddb03 : nop
        cmp dword ptr ds : [esi+0x16C], 3
        je public_62ddc41
        mov eax, dword ptr ds : [esi+0x1C0]
        add eax, 0xF0
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        je public_62ddb24
        lea ebx, ds:[eax-8]
        public_62ddb24 : nop
        mov edx, dword ptr ds : [ebx]
        push ebp
        mov ecx, ebx
        call dword ptr ds : [edx+0x10]
        fld dword ptr ds : [esi+0x174]
        fmul dword ptr ds : [public_639fb58]
        mov ebp, dword ptr ss : [esp+0x48]
        fld dword ptr ds : [esi+0x178]
        mov edi, eax
        fmul dword ptr ds : [public_639fb58]
        push 0
        fld dword ptr ds : [esi+0x17C]
        mov eax, ebp
        fmul dword ptr ds : [public_639fb58]
        push 0
        push ebp
        push ebx
        fstp dword ptr ss : [esp+0x50]
        fxch 
        fadd dword ptr ds : [edi+0x24]
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [edi+0x28]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+8], ecx
        call public_62e5c00
        mov ecx, dword ptr ss : [esp+0x5C]
        fstp dword ptr ds : [ecx]
        mov al, byte ptr ds : [esi+0x181]
        add esp, 0x10
        test al, al
        je public_62ddbf5
        fld dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+0x14]
        fld dword ptr ds : [edi+0x20]
        fstp dword ptr ss : [esp+0x40]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0x2C]
        fchs 
        fld dword ptr ss : [esp+0x40]
        fchs 
        fmul dword ptr ds : [esi+0x17C]
        fxch 
        fmul dword ptr ds : [esi+0x178]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [esi+0x174]
        faddp 
        fcomp dword ptr ds : [public_63a05d0]
        fnstsw ax
        test ah, 5
        jp public_62ddbf5
        mov dword ptr ds : [ecx], 0
        public_62ddbf5 : nop
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edx], 3
        mov dword ptr ds : [esi+0x25C], 3
        fld dword ptr ss : [ebp+8]
        fld dword ptr ss : [ebp+4]
        fld dword ptr ss : [ebp]
        pop ebp
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp qword ptr ds : [public_6399410]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62ddcb5
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x34
        ret 0xC
        public_62ddc41 : nop
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x2C]
        lea edi, ds:[esi+0x268]
        push ecx
        mov ecx, edi
        call public_62df3a0
        cmp al, 1
        jne public_62ddca9
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [esi+0x64]
        je public_62ddca9
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, edi
        call public_62df2d0
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x4C]
        fstp dword ptr ds : [edx]
        mov dword ptr ds : [eax], 1
        pop edi
        mov dword ptr ds : [esi+0x25C], 1
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x34
        ret 0xC
        public_62ddca9 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [esi+0x25C], ebx
        public_62ddcb5 : nop
        pop edi
        pop esi
        mov eax, 2
        pop ebx
        add esp, 0x34
        ret 0xC
        UNREACHABLE_TRAP(0x62dda10)
    }
}

#undef public_62dda4c
#undef public_62dda4e
#undef public_62ddb03
#undef public_62ddb24
#undef public_62ddbf5
#undef public_62ddc41
#undef public_62ddca9
#undef public_62ddcb5
