#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ca80);
CLANG_FORWARD_PROC_SYMBOL(public_628cbe0);
CLANG_FORWARD_PROC_SYMBOL(public_628f000);
CLANG_FORWARD_PROC_SYMBOL(public_628ffd0);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_634cc80);

#define public_628cae0 _public_628cae0
#define public_628cb10 _public_628cb10
#define public_628cb30 _public_628cb30
#define public_628cb43 _public_628cb43
#define public_628cb68 _public_628cb68
#define public_628cb7e _public_628cb7e
#define public_628cb95 _public_628cb95
#define public_628cba2 _public_628cba2
#define public_628cbb0 _public_628cbb0
#define public_628cbd0 _public_628cbd0

PROC_DECLARE(0x628ca80, internal_628ca80, public_628ca80);
extern "C" NAKED register_t __cdecl internal_628ca80()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        call dword ptr ds : [public_63993a4]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x20]
        lea ecx, ds:[esi+0x1C]
        push eax
        push edx
        call public_628f000
        call public_6303220
        fld dword ptr ss : [esp+0xC]
        test al, al
        jne public_628cb7e
        fadd qword ptr ds : [public_63fc0c8]
        fst qword ptr ds : [public_63fc0c8]
        fcomp qword ptr ds : [public_639bb00]
        fnstsw ax
        test ah, 0x41
        jne public_628cba2
        fld qword ptr ds : [public_63fc0c8]
        fcomp qword ptr ds : [public_639baf8]
        fnstsw ax
        test ah, 0x41
        jne public_628cb43
        nop 
        lea esp, ss:[esp]
        public_628cae0 : nop
        fld qword ptr ds : [public_639baf8]
        push ecx
        mov ecx, dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp]
        call public_634cc80
        fld qword ptr ds : [public_63fc0c8]
        fsub qword ptr ds : [public_639baf8]
        fstp qword ptr ds : [public_63fc0c8]
        mov eax, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], eax
        lea ecx, ds:[ecx]
        public_628cb10 : nop
        cmp eax, dword ptr ds : [esi+0x30]
        je public_628cb30
        mov ecx, dword ptr ds : [eax+0xC]
        push ecx
        call public_628cbe0
        add esp, 4
        lea ecx, ss:[esp+0xC]
        call public_628ffd0
        mov eax, dword ptr ss : [esp+0xC]
        jmp public_628cb10
        public_628cb30 : nop
        fld qword ptr ds : [public_63fc0c8]
        fcomp qword ptr ds : [public_639baf8]
        fnstsw ax
        test ah, 0x41
        je public_628cae0
        public_628cb43 : nop
        fld qword ptr ds : [public_63fc0c8]
        fcomp qword ptr ds : [public_639c3f0]
        fnstsw ax
        test ah, 0x41
        jne public_628cb68
        fld qword ptr ds : [public_63fc0c8]
        push ecx
        mov ecx, dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp]
        call public_634cc80
        public_628cb68 : nop
        mov dword ptr ds : [public_63fc0c8], 0
        mov dword ptr ds : [public_63fc0cc], 0
        jmp public_628cba2
        public_628cb7e : nop
        fcomp qword ptr ds : [public_639baf8]
        fnstsw ax
        test ah, 0x41
        jne public_628cb95
        fld qword ptr ds : [public_639baf8]
        fstp dword ptr ss : [esp+0xC]
        public_628cb95 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x18]
        push edx
        call public_634cc80
        public_628cba2 : nop
        mov eax, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        nop 
        lea esp, ss:[esp]
        public_628cbb0 : nop
        cmp eax, dword ptr ds : [esi+0x30]
        je public_628cbd0
        mov ecx, dword ptr ds : [eax+0xC]
        push ecx
        call public_628cbe0
        add esp, 4
        lea ecx, ss:[esp+4]
        call public_628ffd0
        mov eax, dword ptr ss : [esp+4]
        jmp public_628cbb0
        public_628cbd0 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x628ca80)
    }
}

#undef public_628cae0
#undef public_628cb10
#undef public_628cb30
#undef public_628cb43
#undef public_628cb68
#undef public_628cb7e
#undef public_628cb95
#undef public_628cba2
#undef public_628cbb0
#undef public_628cbd0
