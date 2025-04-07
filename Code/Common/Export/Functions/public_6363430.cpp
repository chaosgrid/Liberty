#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_634d860);
CLANG_FORWARD_PROC_SYMBOL(public_634d9d0);
CLANG_FORWARD_PROC_SYMBOL(public_635b210);
CLANG_FORWARD_PROC_SYMBOL(public_635b940);
CLANG_FORWARD_PROC_SYMBOL(public_635bd10);
CLANG_FORWARD_PROC_SYMBOL(public_6363430);
CLANG_FORWARD_PROC_SYMBOL(public_6364ce0);

#define public_6363567 _public_6363567
#define public_63635b6 _public_63635b6
#define public_63635cd _public_63635cd
#define public_63635f4 _public_63635f4
#define public_63635f6 _public_63635f6

PROC_DECLARE(0x6363430, internal_6363430, public_6363430);
extern "C" NAKED register_t __cdecl internal_6363430()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [ecx]
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x20]
        push eax
        add edx, 0x4C
        push edx
        call public_634d860
        mov ebp, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        push ebp
        push edx
        call public_635b210
        mov eax, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x40]
        or eax, esi
        or eax, edx
        add esp, 0x10
        test eax, 0x80000000
        jne public_63635b6
        mov esi, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        and esi, 0xFFFF
        push edx
        shl esi, 4
        push ebp
        add esi, eax
        call public_635b940
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call public_6347ef0
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        call public_634d9d0
        fld dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x48]
        add eax, 0x60
        fstp dword ptr ds : [eax]
        mov ecx, edx
        fstp dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi+0x10]
        fmul dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x5C], edx
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], ebp
        mov word ptr ds : [eax+0x1A], 2
        faddp 
        fsubp 
        fcom dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6363567
        mov edi, dword ptr ds : [edi+0x10]
        fstp st(0)
        mov dword ptr ds : [edi+0x14], ebp
        mov word ptr ds : [edi+0x1A], 5
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [ebx+8]
        fld dword ptr ss : [esp+0x24]
        pop edi
        fstp dword ptr ds : [ebx+0xC]
        fld dword ptr ss : [esp+0x24]
        pop esi
        fstp dword ptr ds : [ebx+0x10]
        pop ebp
        mov eax, 3
        pop ebx
        add esp, 0x40
        ret 0xC
        public_6363567 : nop
        mov eax, dword ptr ds : [ebx]
        fsub dword ptr ds : [eax+0x50]
        mov edx, dword ptr ss : [esp+0x54]
        fstp dword ptr ds : [eax+0x54]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edx]
        fld dword ptr ds : [ecx+0x5C]
        add eax, 0x5C
        fsub dword ptr ds : [eax]
        add ecx, 0x5C
        fld dword ptr ds : [ecx+4]
        pop edi
        fsub dword ptr ds : [eax+4]
        pop esi
        fld dword ptr ds : [ecx+8]
        pop ebp
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx]
        fxch 
        pop ebx
        fmul dword ptr ds : [eax+0x64]
        fxch 
        fmul dword ptr ds : [eax+0x68]
        faddp 
        fxch 
        fmul dword ptr ds : [eax+0x60]
        faddp 
        fstp dword ptr ds : [eax+0x58]
        mov eax, 1
        add esp, 0x40
        ret 0xC
        public_63635b6 : nop
        mov esi, ebp
        mov dword ptr ss : [esp+0x5C], 0x60AD78EC
        mov dword ptr ss : [esp+0x58], 0
        mov ebp, 3
        public_63635cd : nop
        mov eax, dword ptr ds : [edi+4]
        push esi
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        call public_635bd10
        fcom dword ptr ss : [esp+0x68]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_63635f4
        fstp dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x58], esi
        jmp public_63635f6
        public_63635f4 : nop
        fstp st(0)
        public_63635f6 : nop
        mov ecx, esi
        and ecx, 0xC
        add esi, dword ptr ds : [ecx+public_63ee4e0]
        dec ebp
        jne public_63635cd
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x54]
        push edi
        push edx
        push eax
        mov ecx, ebx
        call public_6364ce0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x6363430)
    }
}

#undef public_6363567
#undef public_63635b6
#undef public_63635cd
#undef public_63635f4
#undef public_63635f6
