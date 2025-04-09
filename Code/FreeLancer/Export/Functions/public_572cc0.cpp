#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);

#define public_572d05 _public_572d05
#define public_572dcc _public_572dcc
#define public_572e7c _public_572e7c
#define public_572eac _public_572eac
#define public_572eba _public_572eba
#define public_572fd7 _public_572fd7
#define public_572fe1 _public_572fe1
#define public_572fe8 _public_572fe8
#define public_572ff0 _public_572ff0
#define public_573000 _public_573000
#define public_573005 _public_573005
#define public_57300b _public_57300b

PROC_DECLARE(0x572cc0, internal_572cc0, public_572cc0);
extern "C" NAKED register_t __cdecl internal_572cc0()
{
    __asm
    {
        sub esp, 0x34
        push esi
        mov esi, ecx
        fld qword ptr ds : [esi+0xB8]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jp public_572eac
        mov al, byte ptr ds : [esi+0xC0]
        test al, al
        jne public_572eba
        call public_42d680
        fcom qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 0x41
        jne public_572d05
        fstp st(0)
        fld qword ptr ds : [public_5c75e8]
        public_572d05 : nop
        fmul qword ptr ds : [public_5d3c48]
        mov ecx, dword ptr ds : [esi+0xE8]
        push 0
        mov dword ptr ss : [esp+0x14], 0
        fadd qword ptr ds : [esi+0xB8]
        mov dword ptr ss : [esp+0x10], 0
        fcom qword ptr ds : [public_5c8ba8]
        fst qword ptr ds : [esi+0xB8]
        fnstsw ax
        test ah, 5
        jp public_572dcc
        fld st(0)
        mov dword ptr ss : [esp+0x1C], 0
        fst dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x20], 0
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x28], eax
        fchs 
        lea eax, ss:[esp+0xC]
        push eax
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        push 6
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x34], 0
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xE4]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ds:[esi+0xD4]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        call public_423b30
        mov ecx, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        lea eax, ss:[esp+0x2C]
        push eax
        call dword ptr ds : [edx+0x14]
        jmp public_572e7c
        public_572dcc : nop
        lea eax, ss:[esp+0xC]
        fstp st(0)
        push eax
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xE4]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0xD4]
        push eax
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [esi+0xEC]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 3
        or dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0xE0]
        or byte ptr ds : [eax+0x6C], cl
        mov ecx, dword ptr ds : [esi+0xE8]
        push 0
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xE4]
        push 0
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xE0]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xE4]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0xE8]
        push 1
        call public_579890
        mov dword ptr ds : [esi+0xB8], 0
        mov dword ptr ds : [esi+0xBC], 0x40000000
        public_572e7c : nop
        fld qword ptr ds : [esi+0xB8]
        fcomp qword ptr ds : [public_5d5078]
        fnstsw ax
        test ah, 0x41
        jne public_572eac
        fld qword ptr ds : [esi+0xB8]
        fcomp qword ptr ds : [public_5d5070]
        fnstsw ax
        test ah, 5
        jp public_572eac
        push 0x1B
        call public_564570
        add esp, 4
        public_572eac : nop
        mov al, byte ptr ds : [esi+0xC0]
        test al, al
        je public_572fe8
        public_572eba : nop
        mov eax, dword ptr ds : [esi+0xC4]
        test eax, eax
        je public_572fe8
        call public_42d680
        fmul qword ptr ds : [public_5d3c48]
        mov ecx, dword ptr ds : [esi+0xE8]
        push 0
        fsubr qword ptr ds : [esi+0xB8]
        lea eax, ss:[esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x2C], 0
        fst qword ptr ds : [esi+0xB8]
        mov dword ptr ss : [esp+0x30], 0
        fld st(0)
        mov dword ptr ss : [esp+0x20], 0
        fst dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x24], 0
        fxch 
        push 6
        fchs 
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x3C]
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xE4]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [esi+0xDC]
        fadd dword ptr ds : [esi+0xD8]
        mov edx, dword ptr ds : [esi+0xD4]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x38]
        call public_422b80
        mov ecx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x2C]
        push edx
        call dword ptr ds : [eax+0x14]
        fld qword ptr ds : [esi+0xB8]
        fcomp qword ptr ds : [public_5e1b90]
        fnstsw ax
        test ah, 0x41
        jp public_572fe8
        mov eax, dword ptr ds : [esi+0xE8]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0xEC]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0xE4]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0xE0]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0xF0]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0xC4]
        cmp eax, 1
        je public_572fd7
        cmp eax, 0xFFFFFFFF
        jne public_572fe1
        mov dword ptr ds : [esi+0xB4], 1
        jmp public_572fe1
        public_572fd7 : nop
        mov dword ptr ds : [esi+0xB4], 5
        public_572fe1 : nop
        mov byte ptr ds : [esi+0xC0], 0
        public_572fe8 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_57300b
        nop 
        public_572ff0 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov esi, dword ptr ds : [ecx+8]
        je public_573000
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_573005
        public_573000 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_573005 : nop
        test esi, esi
        mov ecx, esi
        jne public_572ff0
        public_57300b : nop
        pop esi
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x572cc0)
    }
}

#undef public_572d05
#undef public_572dcc
#undef public_572e7c
#undef public_572eac
#undef public_572eba
#undef public_572fd7
#undef public_572fe1
#undef public_572fe8
#undef public_572ff0
#undef public_573000
#undef public_573005
#undef public_57300b
