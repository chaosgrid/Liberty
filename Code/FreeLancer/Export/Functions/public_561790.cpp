#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_473cb0);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);

#define public_561823 _public_561823
#define public_561825 _public_561825
#define public_5618e2 _public_5618e2
#define public_56199d _public_56199d
#define public_5619cd _public_5619cd
#define public_5619db _public_5619db
#define public_561ac3 _public_561ac3
#define public_561ad6 _public_561ad6
#define public_561adb _public_561adb
#define public_561ae5 _public_561ae5
#define public_561aec _public_561aec
#define public_561af3 _public_561af3
#define public_561b03 _public_561b03
#define public_561b08 _public_561b08
#define public_561b0e _public_561b0e

PROC_DECLARE(0x561790, internal_561790, public_561790);
extern "C" NAKED register_t __cdecl internal_561790()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x110]
        push edi
        mov edi, dword ptr ds : [esi+0x10C]
        mov bl, byte ptr ds : [edi+0x6C]
        add ecx, 0x4E8
        call dword ptr ds : [public_5c6bcc]
        test eax, eax
        setne al
        xor al, bl
        and al, 1
        xor al, bl
        mov byte ptr ds : [edi+0x6C], al
        mov eax, dword ptr ds : [esi+0x10C]
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 1
        mov byte ptr ds : [eax+0x498], cl
        fld qword ptr ds : [esi+0xD8]
        fcomp qword ptr ds : [public_5c89b8]
        mov ebx, 3
        fnstsw ax
        test ah, 0x41
        jp public_5619cd
        mov al, byte ptr ds : [esi+0xE0]
        test al, al
        jne public_5619db
        call public_42d680
        fcom qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 5
        jp public_561823
        fmul qword ptr ds : [public_5d3c48]
        fadd qword ptr ds : [esi+0xD8]
        fstp qword ptr ds : [esi+0xD8]
        jmp public_561825
        public_561823 : nop
        fstp st(0)
        public_561825 : nop
        fld qword ptr ds : [esi+0xD8]
        mov ecx, dword ptr ds : [esi+0x108]
        fcomp qword ptr ds : [public_5c8ba8]
        push 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        fnstsw ax
        test ah, 5
        lea eax, ss:[esp+0x10]
        push eax
        push 6
        jp public_5618e2
        fld qword ptr ds : [esi+0xD8]
        mov dword ptr ss : [esp+0x28], 0
        fst dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x2C], 0
        fld qword ptr ds : [esi+0xD8]
        mov dword ptr ss : [esp+0x30], 0
        fchs 
        mov dword ptr ss : [esp+0x38], 0
        fstp dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x10C]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ds:[esi+0xF4]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        call public_423b30
        mov ecx, dword ptr ds : [esi+0x100]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        lea eax, ss:[esp+0x30]
        push eax
        call dword ptr ds : [edx+0x14]
        jmp public_56199d
        public_5618e2 : nop
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x10C]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x100]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0xF4]
        push eax
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [esi+0x110]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x104]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x11C]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x114]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x118]
        or byte ptr ds : [eax+0x6C], bl
        mov ecx, dword ptr ds : [esi+0x108]
        push 0
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x10C]
        push 0
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x110]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0x108]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0x10C]
        push 1
        call public_579890
        mov dword ptr ds : [esi+0xD8], 0
        mov dword ptr ds : [esi+0xDC], 0x40000000
        public_56199d : nop
        fld qword ptr ds : [esi+0xD8]
        fcomp qword ptr ds : [public_5d5078]
        fnstsw ax
        test ah, 0x41
        jne public_5619cd
        fld qword ptr ds : [esi+0xD8]
        fcomp qword ptr ds : [public_5d5070]
        fnstsw ax
        test ah, 5
        jp public_5619cd
        push 0x1B
        call public_564570
        add esp, 4
        public_5619cd : nop
        mov al, byte ptr ds : [esi+0xE0]
        test al, al
        je public_561aec
        public_5619db : nop
        mov eax, dword ptr ds : [esi+0xE4]
        test eax, eax
        je public_561aec
        call public_42d680
        fmul qword ptr ds : [public_5d3c48]
        mov ecx, dword ptr ds : [esi+0x108]
        push 0
        fsubr qword ptr ds : [esi+0xD8]
        lea eax, ss:[esp+0x28]
        push eax
        mov dword ptr ss : [esp+0x30], 0
        fst qword ptr ds : [esi+0xD8]
        mov dword ptr ss : [esp+0x34], 0
        fld st(0)
        mov dword ptr ss : [esp+0x24], 0
        fst dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x28], 0
        fxch 
        push 6
        fchs 
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x40]
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x10C]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ds : [esi+0xF4]
        mov ecx, dword ptr ds : [esi+0x100]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0xC]
        fadd dword ptr ds : [esi+0xF8]
        push eax
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0xFC]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        fld qword ptr ds : [esi+0xD8]
        fcomp qword ptr ds : [public_5e1b90]
        fnstsw ax
        test ah, 0x41
        jp public_561aec
        mov eax, dword ptr ds : [esi+0xE4]
        cmp eax, ebx
        ja public_561ad6
        je public_561ac3
        dec eax
        je public_561adb
        dec eax
        jne public_561ae5
        mov dword ptr ds : [esi+0xB4], 5
        jmp public_561ae5
        public_561ac3 : nop
        push 0
        push 0
        push 0x738
        call public_473cb0
        add esp, 0xC
        jmp public_561adb
        public_561ad6 : nop
        cmp eax, 0xFFFFFFFF
        jne public_561ae5
        public_561adb : nop
        mov dword ptr ds : [esi+0xB4], 8
        public_561ae5 : nop
        mov byte ptr ds : [esi+0xE0], 0
        public_561aec : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_561b0e
        public_561af3 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov esi, dword ptr ds : [ecx+8]
        je public_561b03
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x2C]
        jmp public_561b08
        public_561b03 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x30]
        public_561b08 : nop
        test esi, esi
        mov ecx, esi
        jne public_561af3
        public_561b0e : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x561790)
    }
}

#undef public_561823
#undef public_561825
#undef public_5618e2
#undef public_56199d
#undef public_5619cd
#undef public_5619db
#undef public_561ac3
#undef public_561ad6
#undef public_561adb
#undef public_561ae5
#undef public_561aec
#undef public_561af3
#undef public_561b03
#undef public_561b08
#undef public_561b0e
