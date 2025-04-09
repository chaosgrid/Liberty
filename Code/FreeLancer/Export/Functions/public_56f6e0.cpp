#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_56fc90);
CLANG_FORWARD_PROC_SYMBOL(public_56fdf0);
CLANG_FORWARD_PROC_SYMBOL(public_579290);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);
CLANG_FORWARD_PROC_SYMBOL(public_58d540);
CLANG_FORWARD_PROC_SYMBOL(public_5abc40);
CLANG_FORWARD_PROC_SYMBOL(public_5ac240);
CLANG_FORWARD_PROC_SYMBOL(public_5ac9d0);

#define public_56f700 _public_56f700
#define public_56f721 _public_56f721
#define public_56f739 _public_56f739
#define public_56f74e _public_56f74e
#define public_56f76d _public_56f76d
#define public_56f7a3 _public_56f7a3
#define public_56f7ba _public_56f7ba
#define public_56f7f9 _public_56f7f9
#define public_56f8fb _public_56f8fb
#define public_56fa73 _public_56fa73
#define public_56faa3 _public_56faa3
#define public_56fab1 _public_56fab1
#define public_56fc47 _public_56fc47
#define public_56fc56 _public_56fc56
#define public_56fc5d _public_56fc5d
#define public_56fc64 _public_56fc64
#define public_56fc74 _public_56fc74
#define public_56fc79 _public_56fc79
#define public_56fc7f _public_56fc7f

PROC_DECLARE(0x56f6e0, internal_56f6e0, public_56f6e0);
extern "C" NAKED register_t __cdecl internal_56f6e0()
{
    __asm
    {
        sub esp, 0x28
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x294]
        test al, al
        jne public_56f700
        mov ecx, offset public_67e7b8
        call public_5ac240
        mov byte ptr ds : [esi+0x294], al
        public_56f700 : nop
        fld qword ptr ds : [esi+0x108]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jp public_56f721
        mov al, byte ptr ds : [esi+0x110]
        test al, al
        je public_56f7ba
        public_56f721 : nop
        mov al, byte ptr ds : [esi+0x110]
        test al, al
        je public_56f739
        mov eax, dword ptr ds : [esi+0x114]
        test eax, eax
        jne public_56f7ba
        public_56f739 : nop
        mov ecx, offset public_67e7b8
        call public_5ac9d0
        test al, al
        je public_56f74e
        mov ecx, esi
        call public_56fdf0
        public_56f74e : nop
        mov ecx, offset public_67e7b8
        call public_5abc40
        cmp eax, dword ptr ds : [esi+0x2CC]
        je public_56f76d
        mov ecx, esi
        mov dword ptr ds : [esi+0x2CC], eax
        call public_56fc90
        public_56f76d : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        lea eax, ss:[esp+4]
        push eax
        call public_58d540
        test al, al
        jne public_56f7a3
        cmp dword ptr ds : [esi+0x2C8], 0xFFFFFFFF
        jne public_56f7a3
        mov eax, dword ptr ds : [esi+0xB8]
        and byte ptr ds : [eax+0x6C], 0xFE
        mov ecx, dword ptr ds : [esi+0xB8]
        mov byte ptr ds : [ecx+0x498], 0
        jmp public_56f7ba
        public_56f7a3 : nop
        mov eax, dword ptr ds : [esi+0xB8]
        or byte ptr ds : [eax+0x6C], 1
        mov edx, dword ptr ds : [esi+0xB8]
        mov byte ptr ds : [edx+0x498], 1
        public_56f7ba : nop
        fld qword ptr ds : [esi+0x108]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jp public_56faa3
        mov al, byte ptr ds : [esi+0x110]
        test al, al
        jne public_56fab1
        call public_42d680
        fcom qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 0x41
        jne public_56f7f9
        fstp st(0)
        fld qword ptr ds : [public_5c75e8]
        public_56f7f9 : nop
        fmul qword ptr ds : [public_5d3c48]
        mov ecx, dword ptr ds : [esi+0xBC]
        push 0
        mov dword ptr ss : [esp+0x20], 0
        fadd qword ptr ds : [esi+0x108]
        mov dword ptr ss : [esp+0x1C], 0
        fcom qword ptr ds : [public_5c8ba8]
        fst qword ptr ds : [esi+0x108]
        fnstsw ax
        test ah, 0x41
        jp public_56f8fb
        fld st(0)
        lea edx, ss:[esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        push edx
        fchs 
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC0]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB8]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xD4]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        push 6
        call dword ptr ds : [eax+0xA8]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[esi+0xF0]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_423b30
        mov ecx, dword ptr ds : [esi+0xE0]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        lea edx, ss:[esp+0x20]
        push edx
        call dword ptr ds : [eax+0x14]
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ds:[esi+0xFC]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_423b30
        mov ecx, dword ptr ds : [esi+0xE4]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        lea edx, ss:[esp+0x20]
        push edx
        call dword ptr ds : [eax+0x14]
        jmp public_56fa73
        public_56f8fb : nop
        lea edx, ss:[esp+0x18]
        fstp st(0)
        push edx
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC0]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB8]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xD4]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xE0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0xF0]
        push edx
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [esi+0xE4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0xFC]
        push edx
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [esi+0xC4]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 3
        or dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0xE8]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xD0]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xD8]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xDC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xCC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xEC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xB8]
        push 0
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xBC]
        push 0
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xC0]
        push 0
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xD4]
        push 0
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xC4]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xB8]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xBC]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xC0]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xD0]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xE8]
        push 0
        call public_579890
        mov ecx, dword ptr ds : [esi+0xD4]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xCC]
        push 1
        call public_579890
        mov dword ptr ds : [esi+0x108], 0
        mov dword ptr ds : [esi+0x10C], 0x40000000
        public_56fa73 : nop
        fld qword ptr ds : [esi+0x108]
        fcomp qword ptr ds : [public_5d5078]
        fnstsw ax
        test ah, 0x41
        jne public_56faa3
        fld qword ptr ds : [esi+0x108]
        fcomp qword ptr ds : [public_5d5070]
        fnstsw ax
        test ah, 5
        jp public_56faa3
        push 0x1B
        call public_564570
        add esp, 4
        public_56faa3 : nop
        mov al, byte ptr ds : [esi+0x110]
        test al, al
        je public_56fc5d
        public_56fab1 : nop
        mov eax, dword ptr ds : [esi+0x114]
        test eax, eax
        je public_56fc5d
        call public_42d680
        fmul qword ptr ds : [public_5d3c48]
        mov ecx, dword ptr ds : [esi+0xBC]
        push 0
        fsubr qword ptr ds : [esi+0x108]
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x20], 0
        fst qword ptr ds : [esi+0x108]
        mov dword ptr ss : [esp+0x24], 0
        fld st(0)
        mov dword ptr ss : [esp+0x14], 0
        fstp dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], 0
        fchs 
        push 6
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC0]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB8]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xD4]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        push 6
        call dword ptr ds : [eax+0xA8]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ds : [esi+0xE0]
        lea edx, ss:[esp+0x20]
        push edx
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+0xF4]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+0xF8]
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+0xFC]
        mov ecx, dword ptr ds : [esi+0xE4]
        lea edx, ss:[esp+0x20]
        push edx
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+0x100]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+0x104]
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        fld qword ptr ds : [esi+0x108]
        fcomp qword ptr ds : [public_5e2bb0]
        fnstsw ax
        test ah, 0x41
        jp public_56fc5d
        mov ecx, dword ptr ds : [esi+0xBC]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0xC0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xB8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xD4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xE0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xE4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xEC]
        and byte ptr ds : [ecx+0x6C], al
        mov eax, dword ptr ds : [esi+0x114]
        cmp eax, 1
        je public_56fc47
        cmp eax, 0xFFFFFFFF
        jne public_56fc56
        mov dword ptr ds : [esi+0xB4], 1
        jmp public_56fc56
        public_56fc47 : nop
        mov dword ptr ds : [esi+0xB4], 2
        call public_579290
        public_56fc56 : nop
        mov byte ptr ds : [esi+0x110], 0
        public_56fc5d : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_56fc7f
        public_56fc64 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov esi, dword ptr ds : [ecx+8]
        je public_56fc74
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_56fc79
        public_56fc74 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_56fc79 : nop
        test esi, esi
        mov ecx, esi
        jne public_56fc64
        public_56fc7f : nop
        pop esi
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x56f6e0)
    }
}

#undef public_56f700
#undef public_56f721
#undef public_56f739
#undef public_56f74e
#undef public_56f76d
#undef public_56f7a3
#undef public_56f7ba
#undef public_56f7f9
#undef public_56f8fb
#undef public_56fa73
#undef public_56faa3
#undef public_56fab1
#undef public_56fc47
#undef public_56fc56
#undef public_56fc5d
#undef public_56fc64
#undef public_56fc74
#undef public_56fc79
#undef public_56fc7f
