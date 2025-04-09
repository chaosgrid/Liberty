#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_421010);
CLANG_FORWARD_PROC_SYMBOL(public_421070);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b40);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b80);
CLANG_FORWARD_PROC_SYMBOL(public_4c8bc0);
CLANG_FORWARD_PROC_SYMBOL(public_586310);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5847ae _public_5847ae
#define public_584993 _public_584993
#define public_5849de _public_5849de
#define public_584a33 _public_584a33
#define public_584ad7 _public_584ad7
#define public_584b99 _public_584b99
#define public_584bae _public_584bae

PROC_DECLARE(0x584740, internal_584740, public_584740);
extern "C" NAKED register_t __cdecl internal_584740()
{
    __asm
    {
        sub esp, 0xC0
        push ebx
        mov ebx, ecx
        push esi
        lea esi, ds:[ebx+0x330]
        mov ecx, esi
        call public_420d60
        test al, al
        je public_584bae
        fld dword ptr ds : [ebx+0x4E4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_5847ae
        fld dword ptr ds : [ebx+0x4E8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_5847ae
        fld dword ptr ds : [ebx+0x4EC]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_584b99
        public_5847ae : nop
        call public_42d680
        fld st(0)
        fmul dword ptr ds : [ebx+0x4EC]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [ebx+0x4E8]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [ebx+0x4E4]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x20]
        push ecx
        fadd dword ptr ds : [ebx+0x4D8]
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ds : [ebx+0x4D8]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [ebx+0x4DC]
        fstp dword ptr ds : [ebx+0x4DC]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [ebx+0x4E0]
        fstp dword ptr ds : [ebx+0x4E0]
        fld dword ptr ds : [ebx+0x37C]
        fadd dword ptr ds : [ebx+0x4D8]
        fmul dword ptr ds : [public_5c77f4]
        fstp dword ptr ss : [esp]
        call public_4c8b40
        fld dword ptr ds : [ebx+0x4DC]
        push ecx
        fadd dword ptr ds : [ebx+0x380]
        lea ecx, ss:[esp+0x48]
        fmul dword ptr ds : [public_5c77f4]
        fstp dword ptr ss : [esp]
        call public_4c8b80
        fld dword ptr ds : [ebx+0x4E0]
        push ecx
        fadd dword ptr ds : [ebx+0x384]
        lea ecx, ss:[esp+0x48]
        fmul dword ptr ds : [public_5c77f4]
        fstp dword ptr ss : [esp]
        call public_4c8bc0
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, esi
        call public_421010
        mov ecx, esi
        call public_421070
        mov ecx, dword ptr ds : [ebx+0x334]
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        je public_584bae
        mov eax, dword ptr ds : [ebx+0x4D4]
        test eax, eax
        jne public_584bae
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x64]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_584bae
        mov eax, dword ptr ds : [public_5c6df0]
        lea edx, ss:[esp+0x20]
        push edx
        push 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_584993
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_584993
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fadd st, st(1)
        fdivr st, st(1)
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_584993
        mov dword ptr ss : [esp+0x14], 0x3F800000
        jmp public_584a33
        public_584993 : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_5849de
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_5849de
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0xC]
        fdivp 
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        test ah, 5
        jp public_5849de
        mov dword ptr ss : [esp+0x18], 0x3F800000
        jmp public_584a33
        public_5849de : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_584bae
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_584bae
        fld dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0xC]
        fdivp 
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        test ah, 5
        jp public_584bae
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        public_584a33 : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [ebx+0x4B8]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x88]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, 9
        lea esi, ss:[esp+0x48]
        lea edi, ss:[esp+0x6C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x90], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x94], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [public_67c500]
        test eax, eax
        fstp dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x98], edx
        fld dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x44], edx
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x44]
        jne public_584ad7
        call public_5b73e0
        mov dword ptr ds : [public_67c500], eax
        public_584ad7 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ss:[esp+0x70]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x24]
        mov ecx, 9
        fld dword ptr ss : [esp+0x1C]
        lea esi, ss:[esp+0x48]
        fsub dword ptr ss : [esp+0x28]
        lea edi, ss:[esp+0x9C]
        fld dword ptr ss : [esp+0x20]
        rep movsd
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC0], eax
        fmul dword ptr ds : [public_5c75e0]
        mov eax, dword ptr ds : [public_5c6d90]
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC4], ecx
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC8], edx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x9C]
        push edx
        mov edx, dword ptr ds : [ebx+0x334]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x334]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop edi
        jmp public_584bae
        public_584b99 : nop
        lea eax, ds:[ebx+0x358]
        push eax
        mov ecx, esi
        call public_421010
        mov ecx, esi
        call public_421070
        public_584bae : nop
        push 1
        lea ecx, ds:[ebx+0x60]
        push ecx
        mov ecx, ebx
        call public_586310
        pop esi
        pop ebx
        add esp, 0xC0
        ret 
        UNREACHABLE_TRAP(0x584740)
    }
}

#undef public_5847ae
#undef public_584993
#undef public_5849de
#undef public_584a33
#undef public_584ad7
#undef public_584b99
#undef public_584bae
