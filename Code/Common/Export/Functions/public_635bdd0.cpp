#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635ae60);
CLANG_FORWARD_PROC_SYMBOL(public_635b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_635b4d0);
CLANG_FORWARD_PROC_SYMBOL(public_635b570);
CLANG_FORWARD_PROC_SYMBOL(public_635bd10);
CLANG_FORWARD_PROC_SYMBOL(public_635bdd0);

#define public_635be53 _public_635be53
#define public_635be81 _public_635be81
#define public_635be95 _public_635be95
#define public_635bee4 _public_635bee4
#define public_635bf2c _public_635bf2c
#define public_635bf36 _public_635bf36
#define public_635bf67 _public_635bf67
#define public_635bfa1 _public_635bfa1
#define public_635bfa3 _public_635bfa3
#define public_635bfc6 _public_635bfc6
#define public_635bfc8 _public_635bfc8

PROC_DECLARE(0x635bdd0, internal_635bdd0, public_635bdd0);
extern "C" NAKED register_t __cdecl internal_635bdd0()
{
    __asm
    {
        sub esp, 0xA4
        push ebx
        mov ebx, dword ptr ss : [esp+0xB8]
        push ebp
        mov ebp, dword ptr ss : [esp+0xB0]
        push esi
        mov esi, dword ptr ss : [esp+0xB8]
        push edi
        mov edi, dword ptr ss : [esp+0xC0]
        push ebx
        push edi
        push esi
        push ebp
        lea ecx, ss:[esp+0x5C]
        call public_635b3b0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        call public_635b570
        mov edx, dword ptr ss : [esp+0x2C]
        or edx, dword ptr ss : [esp+0x30]
        add esp, 8
        test edx, 0x80000000
        jne public_635be95
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_635be53
        mov ebx, dword ptr ds : [ebx+4]
        push esi
        lea eax, ss:[esp+0x58]
        push ebx
        push eax
        call public_635bd10
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA4
        ret 
        public_635be53 : nop
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_635be81
        mov ebx, dword ptr ds : [ebx+4]
        push esi
        lea ecx, ss:[esp+0x68]
        push ebx
        push ecx
        call public_635bd10
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA4
        ret 
        public_635be81 : nop
        lea ecx, ss:[esp+0x4C]
        call public_635b4d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA4
        ret 
        public_635be95 : nop
        mov edx, dword ptr ss : [esp+0x20]
        or edx, dword ptr ss : [esp+0x1C]
        test edx, 0x80000000
        jne public_635bf36
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_635bee4
        lea eax, ss:[esp+0x2C]
        push eax
        push edi
        push ebx
        push esi
        call public_635ae60
        mov edi, dword ptr ds : [edi+4]
        push ebp
        lea ecx, ss:[esp+0x40]
        push edi
        push ecx
        call public_635bd10
        add esp, 0x1C
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA4
        ret 
        public_635bee4 : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_635bf2c
        lea edx, ss:[esp+0x2C]
        push edx
        mov eax, esi
        and eax, 0xC
        mov ecx, dword ptr ds : [eax+public_63ee4e0]
        push edi
        add ecx, esi
        push ebx
        push ecx
        call public_635ae60
        mov edi, dword ptr ds : [edi+4]
        push ebp
        lea edx, ss:[esp+0x40]
        push edi
        push edx
        call public_635bd10
        add esp, 0x1C
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA4
        ret 
        public_635bf2c : nop
        mov dword ptr ds : [0], 0
        public_635bf36 : nop
        mov eax, esi
        and eax, 0xC
        mov ecx, dword ptr ds : [eax+public_63ee4e0]
        add ecx, esi
        lea edx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x10], 0x60AD78EC
        mov dword ptr ss : [esp+0x14], edx
        lea ebp, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x18], 2
        public_635bf67 : nop
        mov ecx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x3C]
        push eax
        push edi
        push ebx
        push ecx
        call public_635ae60
        mov edx, dword ptr ss : [esp+0xC8]
        mov eax, dword ptr ds : [edi+4]
        push edx
        push eax
        lea eax, ss:[esp+0x54]
        push eax
        call public_635bd10
        fcom dword ptr ss : [esp+0x2C]
        add esp, 0x1C
        fnstsw ax
        test ah, 1
        je public_635bfa1
        fstp dword ptr ss : [esp+0x10]
        jmp public_635bfa3
        public_635bfa1 : nop
        fstp st(0)
        public_635bfa3 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        push eax
        push ecx
        call public_635bd10
        fcom dword ptr ss : [esp+0x1C]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_635bfc6
        fstp dword ptr ss : [esp+0x10]
        jmp public_635bfc8
        public_635bfc6 : nop
        fstp st(0)
        public_635bfc8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        add ecx, 0x10
        add ebp, 4
        dec eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_635bf67
        fld dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA4
        ret 
        UNREACHABLE_TRAP(0x635bdd0)
    }
}

#undef public_635be53
#undef public_635be81
#undef public_635be95
#undef public_635bee4
#undef public_635bf2c
#undef public_635bf36
#undef public_635bf67
#undef public_635bfa1
#undef public_635bfa3
#undef public_635bfc6
#undef public_635bfc8
