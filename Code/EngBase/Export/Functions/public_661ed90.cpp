#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661ed40);
CLANG_FORWARD_PROC_SYMBOL(public_661ed90);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661edb8 _public_661edb8
#define public_661edfc _public_661edfc
#define public_661ee2e _public_661ee2e
#define public_661eea2 _public_661eea2
#define public_661eeab _public_661eeab
#define public_661eeae _public_661eeae
#define public_661eee8 _public_661eee8
#define public_661ef30 _public_661ef30
#define public_661ef59 _public_661ef59
#define public_661ef7e _public_661ef7e
#define public_661efa7 _public_661efa7
#define public_661efcc _public_661efcc
#define public_661eff5 _public_661eff5
#define public_661f000 _public_661f000
#define public_661f08f _public_661f08f
#define public_661f0a0 _public_661f0a0
#define public_661f0f3 _public_661f0f3
#define public_661f0f5 _public_661f0f5
#define public_661f0fe _public_661f0fe
#define public_661f101 _public_661f101
#define public_661f13b _public_661f13b
#define public_661f1a2 _public_661f1a2
#define public_661f1b6 _public_661f1b6

PROC_DECLARE(0x661ed90, internal_661ed90, public_661ed90);
extern "C" NAKED register_t __cdecl internal_661ed90()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        sub esp, 0x5C
        test al, al
        push ebx
        mov ebx, ecx
        jne public_661edb8
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x68]
        push eax
        push ecx
        mov ecx, ebx
        call public_661ed40
        mov al, 1
        pop ebx
        add esp, 0x5C
        ret 0xC
        public_661edb8 : nop
        fld dword ptr ds : [ebx+0xD8]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        and eax, 0x4100
        jne public_661edfc
        mov edx, dword ptr ds : [ebx+0xD8]
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x6C]
        add ebx, 0xDC
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ecx+4], eax
        mov al, 1
        mov edx, dword ptr ds : [ebx+8]
        pop ebx
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x5C
        ret 0xC
        public_661edfc : nop
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        push esi
        push ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ebp, eax
        lea edx, ss:[esp+0x38]
        lea eax, ss:[esp+0xC]
        push edx
        push eax
        mov ecx, ebx
        call public_661ed40
        mov eax, dword ptr ds : [public_662b178]
        test eax, eax
        jne public_661ee2e
        call public_6628190
        mov dword ptr ds : [public_662b178], eax
        public_661ee2e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x30]
        push ebp
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0xC]
        xor esi, esi
        push edi
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        public_661eea2 : nop
        test esi, esi
        jne public_661eeab
        mov esi, dword ptr ds : [ebx+0x1C]
        jmp public_661eeae
        public_661eeab : nop
        mov esi, dword ptr ds : [esi+0x14]
        public_661eeae : nop
        test esi, esi
        je public_661f000
        mov eax, dword ptr ds : [esi+4]
        push esi
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x20]
        mov edi, eax
        lea edx, ss:[esp+0x48]
        lea eax, ss:[esp+0x70]
        push edx
        push eax
        push 1
        mov ecx, esi
        call public_661ed90
        mov eax, dword ptr ds : [public_662b178]
        test eax, eax
        jne public_661eee8
        call public_6628190
        mov dword ptr ds : [public_662b178], eax
        public_661eee8 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0x34]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x50], edx
        fst dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        lea eax, ss:[esp+0x2C]
        jnp public_661ef30
        lea eax, ss:[esp+0x28]
        public_661ef30 : nop
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], eax
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 5
        lea eax, ss:[esp+0x2C]
        jnp public_661ef59
        lea eax, ss:[esp+0x24]
        public_661ef59 : nop
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], ecx
        fst dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 5
        lea eax, ss:[esp+0x2C]
        jnp public_661ef7e
        lea eax, ss:[esp+0x20]
        public_661ef7e : nop
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 5
        lea eax, ss:[esp+0x2C]
        jnp public_661efa7
        lea eax, ss:[esp+0x1C]
        public_661efa7 : nop
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], eax
        fst dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        lea eax, ss:[esp+0x2C]
        jnp public_661efcc
        lea eax, ss:[esp+0x18]
        public_661efcc : nop
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 5
        lea eax, ss:[esp+0x2C]
        jnp public_661eff5
        lea eax, ss:[esp+0x14]
        public_661eff5 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], edx
        jmp public_661eea2
        public_661f000 : nop
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x68]
        fxch 
        fmul dword ptr ds : [public_6629510]
        fstp dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_6629510]
        mov dword ptr ss : [esp+0x54], eax
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [public_6629510]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x58], ecx
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x5C], edx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x28]
        fst dword ptr ss : [esp+0x28]
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 5
        jnp public_661f08f
        lea ecx, ss:[esp+0x28]
        public_661f08f : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_661f0a0
        lea ecx, ss:[esp+0x18]
        public_661f0a0 : nop
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [public_6629510]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x44]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fadd dword ptr ss : [esp+0x10]
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        and eax, 0x4100
        jne public_661f0f3
        fstp dword ptr ss : [esp+0x14]
        jmp public_661f0f5
        public_661f0f3 : nop
        fstp st(0)
        public_661f0f5 : nop
        test esi, esi
        jne public_661f0fe
        mov esi, dword ptr ds : [ebx+0x1C]
        jmp public_661f101
        public_661f0fe : nop
        mov esi, dword ptr ds : [esi+0x14]
        public_661f101 : nop
        test esi, esi
        je public_661f1a2
        mov eax, dword ptr ds : [esi+4]
        push esi
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x20]
        mov edi, eax
        lea edx, ss:[esp+0x48]
        lea eax, ss:[esp+0x70]
        push edx
        push eax
        push 1
        mov ecx, esi
        call public_661ed90
        mov eax, dword ptr ds : [public_662b178]
        test eax, eax
        jne public_661f13b
        call public_6628190
        mov dword ptr ds : [public_662b178], eax
        public_661f13b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0x34]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x5C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fadd dword ptr ss : [esp+0x70]
        fst dword ptr ss : [esp+0x70]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        and eax, 0x4100
        jne public_661f0f5
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x14], eax
        jmp public_661f0f5
        public_661f1a2 : nop
        mov eax, dword ptr ds : [public_662b178]
        pop edi
        test eax, eax
        jne public_661f1b6
        call public_6628190
        mov dword ptr ds : [public_662b178], eax
        public_661f1b6 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x50]
        push edx
        lea edx, ss:[esp+0x30]
        push ebp
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+0xD8], eax
        mov eax, dword ptr ss : [esp+0x2C]
        fstp dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x74]
        add ebx, 0xDC
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [esi], eax
        mov al, 1
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0x5C
        ret 0xC
        UNREACHABLE_TRAP(0x661ed90)
    }
}

#undef public_661edb8
#undef public_661edfc
#undef public_661ee2e
#undef public_661eea2
#undef public_661eeab
#undef public_661eeae
#undef public_661eee8
#undef public_661ef30
#undef public_661ef59
#undef public_661ef7e
#undef public_661efa7
#undef public_661efcc
#undef public_661eff5
#undef public_661f000
#undef public_661f08f
#undef public_661f0a0
#undef public_661f0f3
#undef public_661f0f5
#undef public_661f0fe
#undef public_661f101
#undef public_661f13b
#undef public_661f1a2
#undef public_661f1b6
