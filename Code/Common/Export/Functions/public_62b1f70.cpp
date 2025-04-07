#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_63217c0);

#define public_62b1fb7 _public_62b1fb7
#define public_62b1fb9 _public_62b1fb9
#define public_62b202d _public_62b202d
#define public_62b202f _public_62b202f
#define public_62b207d _public_62b207d
#define public_62b20b0 _public_62b20b0
#define public_62b21a9 _public_62b21a9
#define public_62b21ab _public_62b21ab
#define public_62b21ce _public_62b21ce
#define public_62b21e6 _public_62b21e6
#define public_62b22b7 _public_62b22b7
#define public_62b22bb _public_62b22bb
#define public_62b22bf _public_62b22bf
#define public_62b22da _public_62b22da

PROC_DECLARE(0x62b1f70, internal_62b1f70, public_62b1f70);
extern "C" NAKED register_t __cdecl internal_62b1f70()
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
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        mov dword ptr ss : [esp+0x18], 0x4E6E6B28
        je public_62b207d
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b207d
        mov eax, dword ptr ds : [edi+0x220]
        test eax, eax
        je public_62b1fb7
        lea ecx, ds:[eax-8]
        jmp public_62b1fb9
        public_62b1fb7 : nop
        xor ecx, ecx
        public_62b1fb9 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62b207d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62b207d
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
        jne public_62b207d
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_639e548]
        fnstsw ax
        test ah, 0x41
        jp public_62b207d
        mov eax, dword ptr ds : [edi+0x220]
        test eax, eax
        je public_62b202d
        lea ecx, ds:[eax-8]
        jmp public_62b202f
        public_62b202d : nop
        xor ecx, ecx
        public_62b202f : nop
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
        public_62b207d : nop
        push 0x80000
        lea ecx, ds:[edi+0xE4]
        call public_629b720
        mov ebp, eax
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], ebp
        je public_62b21ce
        mov ecx, dword ptr ss : [ebp+0x824]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], eax
        jle public_62b21ce
        nop 
        public_62b20b0 : nop
        mov eax, dword ptr ss : [ebp+eax*8+0x24]
        test eax, eax
        je public_62b21ab
        lea esi, ds:[eax-8]
        test esi, esi
        je public_62b21ab
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62b21ab
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62b21ab
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
        jne public_62b21ab
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_639e548]
        fnstsw ax
        test ah, 0x41
        jp public_62b21ab
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        test al, al
        jne public_62b21ab
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
        test ah, 0x41
        jne public_62b21a9
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_62b21a9
        fstp dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], esi
        jmp public_62b21ab
        public_62b21a9 : nop
        fstp st(0)
        public_62b21ab : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+0x824]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jl public_62b20b0
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        jne public_62b22da
        public_62b21ce : nop
        mov eax, dword ptr ss : [ebp+0x824]
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x20], 0xBF800000
        jle public_62b22da
        public_62b21e6 : nop
        mov eax, dword ptr ss : [ebp+ebx*8+0x24]
        test eax, eax
        je public_62b22bf
        lea esi, ds:[eax-8]
        test esi, esi
        je public_62b22bf
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62b22bf
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62b22bf
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
        jne public_62b22bf
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_639e548]
        fnstsw ax
        test ah, 0x41
        jp public_62b22bf
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        test al, al
        jne public_62b22bb
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
        test ah, 0x41
        jne public_62b22b7
        fstp dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], esi
        jmp public_62b22bf
        public_62b22b7 : nop
        fstp st(0)
        jmp public_62b22bf
        public_62b22bb : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_62b22bf : nop
        mov eax, dword ptr ss : [ebp+0x824]
        inc ebx
        cmp ebx, eax
        jl public_62b21e6
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 
        public_62b22da : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x62b1f70)
    }
}

#undef public_62b1fb7
#undef public_62b1fb9
#undef public_62b202d
#undef public_62b202f
#undef public_62b207d
#undef public_62b20b0
#undef public_62b21a9
#undef public_62b21ab
#undef public_62b21ce
#undef public_62b21e6
#undef public_62b22b7
#undef public_62b22bb
#undef public_62b22bf
#undef public_62b22da
