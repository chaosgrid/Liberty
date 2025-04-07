#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e00);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6349fd0);
CLANG_FORWARD_PROC_SYMBOL(public_635b210);
CLANG_FORWARD_PROC_SYMBOL(public_635b940);

#define public_634a07d _public_634a07d
#define public_634a07f _public_634a07f
#define public_634a08b _public_634a08b
#define public_634a119 _public_634a119
#define public_634a14e _public_634a14e
#define public_634a170 _public_634a170
#define public_634a1fb _public_634a1fb
#define public_634a217 _public_634a217
#define public_634a25f _public_634a25f
#define public_634a353 _public_634a353
#define public_634a380 _public_634a380
#define public_634a3a5 _public_634a3a5

PROC_DECLARE(0x6349fd0, internal_6349fd0, public_6349fd0);
extern "C" NAKED register_t __cdecl internal_6349fd0()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x58]
        movsx eax, word ptr ds : [esi+0xC]
        cmp eax, 2
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x5C], eax
        jne public_634a14e
        lea eax, ss:[esp+0x18]
        push eax
        lea ebp, ds:[esi+0x10]
        lea ebx, ss:[ebp+4]
        push esi
        push ebx
        call public_635b940
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [esi]
        and eax, 0xFFFF
        shl eax, 4
        add eax, edx
        fmul dword ptr ds : [eax+esi+8]
        add eax, esi
        fld dword ptr ss : [esp+0x28]
        lea ecx, ds:[edi+4]
        fmul dword ptr ds : [eax+4]
        lea edx, ds:[edi+0x24]
        add esp, 0xC
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ecx]
        faddp 
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edx]
        faddp 
        fsubrp 
        fld st(0)
        fmul dword ptr ss : [esp+0x5C]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_634a08b
        public_634a07d : nop
        fstp st(0)
        public_634a07f : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 4
        public_634a08b : nop
        fld dword ptr ss : [esp+0x5C]
        fsub st, st(1)
        fdivr dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        fstp st(0)
        push edx
        push ecx
        lea ecx, ss:[esp+0x44]
        call public_6347e00
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        push ebx
        push esi
        call public_635b210
        mov eax, dword ptr ss : [esp+0x3C]
        mov ebx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x38]
        or eax, ebx
        or eax, edx
        add esp, 0x10
        test eax, 0x80000000
        jne public_634a07f
        fld dword ptr ss : [esp+0x5C]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_634a119
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_63a5498]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [public_63a5498]
        mov dword ptr ss : [esp+0x20], ecx
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        public_634a119 : nop
        lea ecx, ss:[esp+0x18]
        call public_6347ef0
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x44]
        fmul dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ds : [edi+0x48]
        push ecx
        fstp dword ptr ss : [esp]
        push ebp
        push esi
        push eax
        call dword ptr ds : [edx]
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x48
        ret 4
        public_634a14e : nop
        fld dword ptr ds : [edi+0x34]
        xor ebp, ebp
        test eax, eax
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [edi+0x38]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi+0x3C]
        fstp dword ptr ss : [esp+0x30]
        jle public_634a07f
        lea ebx, ds:[esi+0x14]
        public_634a170 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        push ebx
        call public_635b940
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x3C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fcomp dword ptr ds : [public_63a54a8]
        fnstsw ax
        test ah, 0x41
        je public_634a1fb
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi]
        and eax, 0xFFFF
        shl eax, 4
        add eax, edx
        fmul dword ptr ds : [eax+esi+8]
        add eax, esi
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [edi+0xC]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [edi+8]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edi+4]
        faddp 
        fsub st, st(1)
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_634a217
        fstp st(0)
        public_634a1fb : nop
        mov eax, dword ptr ss : [esp+0x5C]
        inc ebp
        add ebx, 0x10
        cmp ebp, eax
        jl public_634a170
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 4
        public_634a217 : nop
        fld dword ptr ss : [esp+0x20]
        lea ebp, ds:[edi+0x24]
        fmul dword ptr ss : [ebp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [ebp+4]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [ebp]
        faddp 
        fsub st, st(1)
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_634a07f
        test ebx, ebx
        je public_634a07f
        movsx eax, word ptr ds : [esi+0xC]
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        js public_634a07f
        public_634a25f : nop
        lea edx, ss:[esp+0x18]
        push edx
        push esi
        push ebx
        call public_635b940
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x3C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fcomp dword ptr ds : [public_63a54a8]
        fnstsw ax
        test ah, 0x41
        je public_634a07f
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi]
        and eax, 0xFFFF
        shl eax, 4
        add eax, edx
        fmul dword ptr ds : [eax+esi+8]
        add eax, esi
        fld dword ptr ss : [esp+0x1C]
        lea ecx, ds:[edi+4]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ecx]
        faddp 
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [ebp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [ebp+4]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [ebp]
        faddp 
        fsubrp 
        fld st(0)
        fmul dword ptr ss : [esp+0x5C]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_634a07d
        fld dword ptr ss : [esp+0x5C]
        fsub st, st(1)
        fdivr dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x5C]
        push eax
        fstp st(0)
        push ebp
        push ecx
        lea ecx, ss:[esp+0x44]
        call public_6347e00
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        push ebx
        push esi
        call public_635b210
        add esp, 0x10
        mov ecx, ebx
        xor edx, edx
        lea eax, ss:[esp+0x48]
        public_634a353 : nop
        cmp edx, 3
        mov dword ptr ss : [esp+0x10], eax
        jge public_634a3a5
        fld dword ptr ds : [eax]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_634a380
        mov eax, ecx
        and eax, 0xC
        add ecx, dword ptr ds : [eax+public_63ee4e0]
        mov eax, dword ptr ss : [esp+0x10]
        inc edx
        add eax, 4
        jmp public_634a353
        public_634a380 : nop
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x14]
        shl edx, 1
        sar edx, 0x11
        dec eax
        lea ebx, ds:[ecx+edx*4]
        mov dword ptr ss : [esp+0x14], eax
        jns public_634a25f
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 4
        public_634a3a5 : nop
        fld dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x18]
        fmul dword ptr ds : [edi+0x4C]
        fstp dword ptr ss : [esp+0x5C]
        call public_6347ef0
        mov ecx, dword ptr ds : [edi+0x44]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x60]
        push edx
        mov edx, dword ptr ds : [edi+0x48]
        and ebx, 0xFFFFFFF0
        push ebx
        push esi
        push edx
        call dword ptr ds : [eax]
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x6349fd0)
    }
}

#undef public_634a07d
#undef public_634a07f
#undef public_634a08b
#undef public_634a119
#undef public_634a14e
#undef public_634a170
#undef public_634a1fb
#undef public_634a217
#undef public_634a25f
#undef public_634a353
#undef public_634a380
#undef public_634a3a5
