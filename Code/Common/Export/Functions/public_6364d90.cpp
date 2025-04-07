#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_634d860);
CLANG_FORWARD_PROC_SYMBOL(public_634d9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352a90);
CLANG_FORWARD_PROC_SYMBOL(public_635b210);
CLANG_FORWARD_PROC_SYMBOL(public_6363430);
CLANG_FORWARD_PROC_SYMBOL(public_6364d90);

#define public_6364dce _public_6364dce
#define public_6364fe4 _public_6364fe4
#define public_6365003 _public_6365003
#define public_6365008 _public_6365008
#define public_6365031 _public_6365031
#define public_6365089 _public_6365089

PROC_DECLARE(0x6364d90, internal_6364d90, public_6364d90);
extern "C" NAKED register_t __cdecl internal_6364d90()
{
    __asm
    {
        sub esp, 0xB4
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC4]
        dec eax
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx+4], eax
        jns public_6364dce
        push esi
        push 1
        push 0
        push 3
        call public_6352a90
        test eax, eax
        je public_6364dce
        pop edi
        pop esi
        mov eax, 2
        pop ebx
        add esp, 0xB4
        ret 0xC
        public_6364dce : nop
        mov ecx, dword ptr ss : [esp+0xC4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ss : [esp+0xCC]
        mov ecx, dword ptr ds : [edi+8]
        push ebp
        lea eax, ss:[esp+0x54]
        push eax
        add edx, 0x4C
        push edx
        call public_634d860
        mov ebp, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [edi]
        mov edx, esi
        and edx, 0xC
        mov ecx, dword ptr ds : [edx+public_63ee4e0]
        mov ecx, dword ptr ds : [ecx+esi]
        mov edx, dword ptr ds : [edx+public_63ee4f0]
        mov edx, dword ptr ds : [edx+esi]
        mov eax, ebp
        and ecx, 0xFFFF
        shl ecx, 4
        fld dword ptr ds : [ecx+ebx+4]
        add ecx, ebx
        and eax, 0xFFFF
        and edx, 0xFFFF
        shl eax, 4
        fsub dword ptr ds : [eax+ebx+4]
        add eax, ebx
        fld dword ptr ds : [ecx+8]
        shl edx, 4
        fsub dword ptr ds : [eax+8]
        add edx, ebx
        lea ebx, ss:[ebp+ebp]
        sar ebx, 0x11
        fstp dword ptr ss : [esp+0x10]
        lea ebx, ds:[esi+ebx*4]
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax]
        mov ebp, ebx
        and ebp, 0xC
        mov ebp, dword ptr ss : [ebp+public_63ee4f0]
        mov ebx, dword ptr ds : [ebx+ebp]
        mov dword ptr ss : [esp+0x34], ecx
        fstp dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x30]
        and ebx, 0xFFFF
        fld dword ptr ss : [esp+0x58]
        shl ebx, 4
        fsub dword ptr ds : [eax+4]
        add ebx, ebp
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x4C], ecx
        fstp dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x9C], edx
        fstp dword ptr ss : [esp+0x94]
        fstp dword ptr ss : [esp+0x98]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx]
        fsub dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x94]
        push ecx
        fstp dword ptr ss : [esp+0x88]
        lea edx, ss:[esp+0x30]
        push edx
        fstp dword ptr ss : [esp+0x90]
        lea ecx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x94], eax
        call public_628bed0
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x88]
        push ecx
        lea ecx, ss:[esp+0x7C]
        call public_628bed0
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x48]
        lea edx, ss:[esp+0xB4]
        fmul dword ptr ss : [esp+0x68]
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        faddp 
        push esi
        fld dword ptr ss : [esp+0x50]
        push ecx
        fmul dword ptr ss : [esp+0x74]
        faddp 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x8C]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x88]
        faddp 
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0x54]
        faddp 
        fstp dword ptr ss : [esp+0x24]
        call public_635b210
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0xB4]
        push edx
        shl ecx, 1
        lea eax, ss:[esp+0x68]
        push eax
        mov eax, dword ptr ds : [edi+4]
        sar ecx, 0x11
        lea edx, ds:[esi+ecx*4]
        push edx
        push eax
        call public_635b210
        fld dword ptr ss : [esp+0xD4]
        fcomp dword ptr ds : [public_63a53d4]
        add esp, 0x20
        fld dword ptr ss : [esp+0xA4]
        pop ebp
        fnstsw ax
        fcomp dword ptr ds : [public_63a53d4]
        test ah, 0x41
        fnstsw ax
        jne public_6365003
        test ah, 0x41
        jne public_6364fe4
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_6365008
        public_6364fe4 : nop
        mov eax, dword ptr ss : [esp+0xC4]
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        push esi
        push eax
        call public_6363430
        pop edi
        pop esi
        pop ebx
        add esp, 0xB4
        ret 0xC
        public_6365003 : nop
        test ah, 0x41
        jne public_6365031
        public_6365008 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0xC4]
        shl eax, 1
        sar eax, 0x11
        push edi
        lea ecx, ds:[esi+eax*4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        call public_6363430
        pop edi
        pop esi
        pop ebx
        add esp, 0xB4
        ret 0xC
        public_6365031 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_63a589c]
        fnstsw ax
        test ah, 1
        je public_6365089
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a589c]
        fnstsw ax
        test ah, 1
        je public_6365089
        fld dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x54]
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x58]
        fstp dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [edi+0x14], esi
        mov word ptr ds : [edi+0x1A], 5
        pop edi
        pop esi
        mov eax, 3
        pop ebx
        add esp, 0xB4
        ret 0xC
        public_6365089 : nop
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_628bed0
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fdivr dword ptr ds : [public_63a53d0]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        call public_6347df0
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x3C]
        mov ebx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx]
        fmul dword ptr ss : [esp+0x40]
        add esp, 4
        lea ecx, ss:[esp+0x28]
        fsub dword ptr ds : [eax+0x50]
        fstp dword ptr ds : [eax+0x54]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_628bed0
        mov ecx, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_634d9d0
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0xC4]
        add eax, 0x60
        fchs 
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x20]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fxch 
        fmul dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edx]
        fld dword ptr ds : [ecx+0x5C]
        add eax, 0x5C
        fsub dword ptr ds : [eax]
        add ecx, 0x5C
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx]
        fxch 
        fmul dword ptr ds : [eax+0x64]
        fxch 
        fmul dword ptr ds : [eax+0x68]
        faddp 
        fxch 
        fmul dword ptr ds : [eax+0x60]
        faddp 
        fstp dword ptr ds : [eax+0x58]
        mov edi, dword ptr ds : [edi+0x10]
        mov eax, 1
        mov dword ptr ds : [edi+0x14], esi
        mov word ptr ds : [edi+0x1A], ax
        pop edi
        pop esi
        pop ebx
        add esp, 0xB4
        ret 0xC
        UNREACHABLE_TRAP(0x6364d90)
    }
}

#undef public_6364dce
#undef public_6364fe4
#undef public_6365003
#undef public_6365008
#undef public_6365031
#undef public_6365089
