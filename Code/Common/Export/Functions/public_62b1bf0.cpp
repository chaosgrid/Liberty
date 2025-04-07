#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_63217c0);

#define public_62b1c37 _public_62b1c37
#define public_62b1c39 _public_62b1c39
#define public_62b1cad _public_62b1cad
#define public_62b1caf _public_62b1caf
#define public_62b1cfd _public_62b1cfd
#define public_62b1d30 _public_62b1d30
#define public_62b1e29 _public_62b1e29
#define public_62b1e2b _public_62b1e2b
#define public_62b1e4e _public_62b1e4e
#define public_62b1e66 _public_62b1e66
#define public_62b1f37 _public_62b1f37
#define public_62b1f3b _public_62b1f3b
#define public_62b1f3f _public_62b1f3f
#define public_62b1f5a _public_62b1f5a

PROC_DECLARE(0x62b1bf0, internal_62b1bf0, public_62b1bf0);
extern "C" NAKED register_t __cdecl internal_62b1bf0()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x220]
        xor esi, esi
        test eax, eax
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x1C], 0x4E6E6B28
        mov dword ptr ss : [esp+0x18], 0xBF800000
        je public_62b1cfd
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b1cfd
        mov eax, dword ptr ds : [edi+0x220]
        test eax, eax
        je public_62b1c37
        lea ecx, ds:[eax-8]
        jmp public_62b1c39
        public_62b1c37 : nop
        xor ecx, ecx
        public_62b1c39 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62b1cfd
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62b1cfd
        mov edx, dword ptr ds : [edi+0x104]
        mov eax, dword ptr ds : [eax+0x104]
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x20], edx
        push ecx
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x18], eax
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_63217c0
        add esp, 0xC
        test eax, eax
        jne public_62b1cfd
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_639e548]
        fnstsw ax
        test ah, 0x41
        jp public_62b1cfd
        mov eax, dword ptr ds : [edi+0x220]
        test eax, eax
        je public_62b1cad
        lea ecx, ds:[eax-8]
        jmp public_62b1caf
        public_62b1cad : nop
        xor ecx, ecx
        public_62b1caf : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+0x34]
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi+0x2C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x18]
        public_62b1cfd : nop
        push 0x80000
        lea ecx, ds:[edi+0xE4]
        call public_629b720
        mov ebp, eax
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], ebp
        je public_62b1e4e
        mov ecx, dword ptr ss : [ebp+0x824]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], eax
        jle public_62b1e4e
        nop 
        public_62b1d30 : nop
        mov eax, dword ptr ss : [ebp+eax*8+0x24]
        test eax, eax
        je public_62b1e2b
        lea esi, ds:[eax-8]
        test esi, esi
        je public_62b1e2b
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62b1e2b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62b1e2b
        mov edx, dword ptr ds : [edi+0x104]
        mov eax, dword ptr ds : [eax+0x104]
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x24], edx
        push ecx
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x2C], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_63217c0
        add esp, 0xC
        test eax, eax
        jne public_62b1e2b
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_639e548]
        fnstsw ax
        test ah, 0x41
        jp public_62b1e2b
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        test al, al
        jne public_62b1e2b
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+0x34]
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi+0x2C]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fsqrt 
        fcom dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_62b1e29
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_62b1e29
        fstp dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], esi
        jmp public_62b1e2b
        public_62b1e29 : nop
        fstp st(0)
        public_62b1e2b : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+0x824]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jl public_62b1d30
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        jne public_62b1f5a
        public_62b1e4e : nop
        mov eax, dword ptr ss : [ebp+0x824]
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0x4E6E6B28
        jle public_62b1f5a
        public_62b1e66 : nop
        mov eax, dword ptr ss : [ebp+ebx*8+0x24]
        test eax, eax
        je public_62b1f3f
        lea esi, ds:[eax-8]
        test esi, esi
        je public_62b1f3f
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62b1f3f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62b1f3f
        mov edx, dword ptr ds : [edi+0x104]
        mov eax, dword ptr ds : [eax+0x104]
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x2C], edx
        push ecx
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x2C], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_63217c0
        add esp, 0xC
        test eax, eax
        jne public_62b1f3f
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_639e548]
        fnstsw ax
        test ah, 0x41
        jp public_62b1f3f
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        test al, al
        jne public_62b1f3b
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi+0x2C]
        mov ebp, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+0x30]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+0x34]
        fld st(2)
        fmulp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fxch st(2)
        fsqrt 
        fstp st(2)
        fstp st(0)
        fcom dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 5
        jp public_62b1f37
        fstp dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], esi
        jmp public_62b1f3f
        public_62b1f37 : nop
        fstp st(0)
        jmp public_62b1f3f
        public_62b1f3b : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_62b1f3f : nop
        mov eax, dword ptr ss : [ebp+0x824]
        inc ebx
        cmp ebx, eax
        jl public_62b1e66
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 
        public_62b1f5a : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x62b1bf0)
    }
}

#undef public_62b1c37
#undef public_62b1c39
#undef public_62b1cad
#undef public_62b1caf
#undef public_62b1cfd
#undef public_62b1d30
#undef public_62b1e29
#undef public_62b1e2b
#undef public_62b1e4e
#undef public_62b1e66
#undef public_62b1f37
#undef public_62b1f3b
#undef public_62b1f3f
#undef public_62b1f5a
