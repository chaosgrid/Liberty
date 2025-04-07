#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6288900);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6297510);
CLANG_FORWARD_PROC_SYMBOL(public_6297560);
CLANG_FORWARD_PROC_SYMBOL(public_6297b20);
CLANG_FORWARD_PROC_SYMBOL(public_62984d0);
CLANG_FORWARD_PROC_SYMBOL(public_6298b10);
CLANG_FORWARD_PROC_SYMBOL(public_62993e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_629715f _public_629715f
#define public_62971ec _public_62971ec
#define public_6297232 _public_6297232
#define public_62972f7 _public_62972f7
#define public_6297338 _public_6297338
#define public_6297346 _public_6297346
#define public_6297383 _public_6297383
#define public_62973c1 _public_62973c1
#define public_62973ca _public_62973ca
#define public_6297433 _public_6297433
#define public_6297479 _public_6297479
#define public_6297486 _public_6297486
#define public_629749c _public_629749c
#define public_62974a6 _public_62974a6
#define public_62974b3 _public_62974b3
#define public_62974d8 _public_62974d8
#define public_62974f8 _public_62974f8

PROC_DECLARE(0x6297120, internal_6297120, public_6297120);
extern "C" NAKED register_t __cdecl internal_6297120()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x98
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xA0]
        push eax
        push ecx
        mov ecx, ebx
        call public_62993e0
        test al, al
        je public_62974f8
        mov eax, dword ptr ds : [ebx+0x218]
        push ebp
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        jne public_629715f
        cmp dword ptr ds : [ebx+0x1FC], ebp
        je public_62973ca
        public_629715f : nop
        fld dword ptr ss : [esp+0xA4]
        push esi
        fadd dword ptr ds : [ebx+0x268]
        push edi
        fst dword ptr ds : [ebx+0x268]
        fcomp dword ptr ds : [public_639cedc]
        fnstsw ax
        test ah, 5
        jp public_6297232
        mov edx, dword ptr ds : [ebx]
        push 0
        mov ecx, ebx
        call dword ptr ds : [edx+0x64]
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x3C]
        lea eax, ds:[ebx+0x22C]
        rep movsd
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        call public_6288900
        add esp, 0xC
        lea eax, ss:[esp+0x84]
        push eax
        lea ecx, ss:[esp+0x64]
        call public_6297510
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        jne public_62971ec
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_62971ec : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x25C]
        push edx
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x18]
        fchs 
        fpatan 
        fld dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsqrt 
        fdivp 
        fld1 
        fpatan 
        fstp dword ptr ss : [esp+0x20]
        jmp public_6297346
        public_6297232 : nop
        mov eax, dword ptr ds : [ebx+0x250]
        test eax, eax
        je public_6297338
        add eax, 0xFFFFFF64
        test eax, eax
        je public_6297338
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebx
        call public_6298b10
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebx
        call public_6297b20
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edx, dword ptr ds : [ebx]
        push 0
        mov ecx, ebx
        call dword ptr ds : [edx+0x64]
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x60]
        lea eax, ds:[ebx+0x22C]
        rep movsd
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_6288900
        add esp, 0xC
        lea eax, ss:[esp+0x84]
        push eax
        lea ecx, ss:[esp+0x40]
        call public_6297510
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        jne public_62972f7
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_62972f7 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x18]
        fchs 
        fpatan 
        fld dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fdivp 
        fld1 
        fpatan 
        fstp dword ptr ss : [esp+0x20]
        jmp public_6297346
        public_6297338 : nop
        fld dword ptr ds : [public_6399408]
        mov dword ptr ss : [esp+0x20], 0
        public_6297346 : nop
        mov eax, dword ptr ds : [ebx+0x1FC]
        fchs 
        cmp eax, ebp
        lea esi, ds:[ebx+0x1F4]
        fstp dword ptr ss : [esp+0x1C]
        je public_6297383
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [esi+0x14]
        fabs 
        fld dword ptr ds : [public_639ced8]
        fmul dword ptr ds : [public_639d20c]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_6297383
        push esi
        call public_627d4a0
        add esp, 4
        public_6297383 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [ebx+0x218]
        cmp eax, ebp
        lea esi, ds:[ebx+0x210]
        je public_62973c1
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [esi+0x14]
        fabs 
        fld dword ptr ds : [public_639ced8]
        fmul dword ptr ds : [public_639d20c]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_62973c1
        push esi
        call public_627d4a0
        add esp, 4
        public_62973c1 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        public_62973ca : nop
        mov eax, dword ptr ds : [ebx+0x250]
        test eax, eax
        je public_62974a6
        add eax, 0xFFFFFF64
        test eax, eax
        je public_62974a6
        mov edx, dword ptr ds : [ebx+0x4C]
        fld dword ptr ds : [edx+0x94]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62974a6
        mov eax, dword ptr ds : [public_639ced8]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ebx+0x250]
        test eax, eax
        je public_629749c
        add eax, 0xFFFFFF64
        test eax, eax
        je public_629749c
        cmp dword ptr ds : [ebx+0x218], ebp
        jne public_6297433
        cmp dword ptr ds : [ebx+0x1FC], ebp
        je public_62974b3
        public_6297433 : nop
        fld dword ptr ds : [ebx+0x268]
        fcomp dword ptr ds : [public_639cedc]
        fnstsw ax
        test ah, 0x41
        jne public_62974b3
        cmp dword ptr ds : [ebx+0x1FC], ebp
        je public_6297486
        fld dword ptr ds : [ebx+0x208]
        mov al, byte ptr ds : [ebx+0x200]
        test al, al
        fsub dword ptr ds : [ebx+0x204]
        fabs 
        jne public_6297479
        fcom dword ptr ds : [public_639d208]
        fnstsw ax
        test ah, 0x41
        jne public_6297479
        fsubr dword ptr ds : [public_639d208]
        public_6297479 : nop
        fcomp dword ptr ds : [public_639ced8]
        fnstsw ax
        test ah, 5
        jp public_629749c
        public_6297486 : nop
        mov ecx, dword ptr ds : [public_639ced8]
        push ecx
        lea ecx, ds:[ebx+0x210]
        call public_6297560
        test al, al
        jne public_62974d8
        public_629749c : nop
        mov dword ptr ds : [ebx+0x26C], 0
        public_62974a6 : nop
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x98
        ret 8
        public_62974b3 : nop
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, ebx
        call public_6298b10
        test al, al
        je public_629749c
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, ebx
        call public_62984d0
        test al, al
        je public_629749c
        public_62974d8 : nop
        fld dword ptr ss : [esp+0xA4]
        pop ebp
        fadd dword ptr ds : [ebx+0x26C]
        mov al, 1
        fstp dword ptr ds : [ebx+0x26C]
        pop ebx
        add esp, 0x98
        ret 8
        public_62974f8 : nop
        xor al, al
        pop ebx
        add esp, 0x98
        ret 8
        UNREACHABLE_TRAP(0x6297120)
    }
}

#undef public_629715f
#undef public_62971ec
#undef public_6297232
#undef public_62972f7
#undef public_6297338
#undef public_6297346
#undef public_6297383
#undef public_62973c1
#undef public_62973ca
#undef public_6297433
#undef public_6297479
#undef public_6297486
#undef public_629749c
#undef public_62974a6
#undef public_62974b3
#undef public_62974d8
#undef public_62974f8
