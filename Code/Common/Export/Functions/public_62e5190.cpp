#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62dc410);
CLANG_FORWARD_PROC_SYMBOL(public_62e5190);
CLANG_FORWARD_PROC_SYMBOL(public_636cf40);

#define public_62e51c8 _public_62e51c8
#define public_62e51d7 _public_62e51d7
#define public_62e525d _public_62e525d
#define public_62e5264 _public_62e5264
#define public_62e527c _public_62e527c
#define public_62e529a _public_62e529a
#define public_62e5313 _public_62e5313
#define public_62e531e _public_62e531e
#define public_62e5366 _public_62e5366
#define public_62e5375 _public_62e5375
#define public_62e539f _public_62e539f
#define public_62e53b4 _public_62e53b4
#define public_62e53d6 _public_62e53d6
#define public_62e53d8 _public_62e53d8

PROC_DECLARE(0x62e5190, internal_62e5190, public_62e5190);
extern "C" NAKED register_t __cdecl internal_62e5190()
{
    __asm
    {
        sub esp, 0x30
        push edi
        mov edi, dword ptr ss : [esp+0x3C]
        test edi, edi
        je public_62e51c8
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x28]
        call public_628b030
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_62c5a70
        jmp public_62e51d7
        public_62e51c8 : nop
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x1C]
        call public_628b030
        public_62e51d7 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x38]
        call public_628b030
        lea ecx, ss:[esp+8]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_62c5a70
        fld dword ptr ss : [esp+0x1C]
        test edi, edi
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+8]
        faddp 
        fstp dword ptr ss : [esp+0x3C]
        je public_62e5264
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x2C]
        test eax, eax
        jne public_62e525d
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        jmp public_62e527c
        public_62e525d : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        public_62e5264 : nop
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        public_62e527c : nop
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62e529a
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62e529a : nop
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], ecx
        pop esi
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e5313
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        call public_62dc410
        jmp public_62e531e
        public_62e5313 : nop
        push 0
        push 0
        push 0
        call public_636cf40
        public_62e531e : nop
        test edi, edi
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], eax
        je public_62e5366
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x34]
        call public_628b030
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_62c5a70
        jmp public_62e5375
        public_62e5366 : nop
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x1C]
        call public_628b030
        public_62e5375 : nop
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+8]
        push eax
        call public_62c47a0
        fcom dword ptr ds : [public_639a1d0]
        add esp, 8
        pop edi
        fnstsw ax
        test ah, 0x41
        jne public_62e539f
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        jmp public_62e53b4
        public_62e539f : nop
        fcom dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e53b4
        fstp st(0)
        fld dword ptr ds : [public_6399404]
        public_62e53b4 : nop
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e53d6
        fcomp dword ptr ss : [esp+0x3C]
        fnstsw ax
        test ah, 5
        jp public_62e53d8
        mov al, 1
        add esp, 0x30
        ret 
        public_62e53d6 : nop
        fstp st(0)
        public_62e53d8 : nop
        xor al, al
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x62e5190)
    }
}

#undef public_62e51c8
#undef public_62e51d7
#undef public_62e525d
#undef public_62e5264
#undef public_62e527c
#undef public_62e529a
#undef public_62e5313
#undef public_62e531e
#undef public_62e5366
#undef public_62e5375
#undef public_62e539f
#undef public_62e53b4
#undef public_62e53d6
#undef public_62e53d8
