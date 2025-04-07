#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be40);
CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_6353f10);

#define public_6353f76 _public_6353f76
#define public_6353fb7 _public_6353fb7
#define public_6353fdd _public_6353fdd
#define public_6354072 _public_6354072
#define public_6354104 _public_6354104
#define public_635410b _public_635410b

PROC_DECLARE(0x6353f10, internal_6353f10, public_6353f10);
extern "C" NAKED register_t __cdecl internal_6353f10()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+0x40]
        mov eax, dword ptr ds : [esi+0x70]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0xC], 0
        je public_6353f76
        fld dword ptr ds : [esi+0xC0]
        fmul dword ptr ds : [eax+0x9C]
        fld dword ptr ds : [esi+0xBC]
        fmul dword ptr ds : [eax+0x98]
        faddp 
        fld dword ptr ds : [esi+0xB8]
        fmul dword ptr ds : [eax+0x94]
        faddp 
        fld dword ptr ds : [eax+0xAC]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [eax+0xA8]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ds : [eax+0xA4]
        fmul dword ptr ds : [esi]
        faddp 
        faddp 
        fstp dword ptr ss : [esp+0xC]
        public_6353f76 : nop
        mov edi, dword ptr ds : [esi+0x74]
        test edi, edi
        je public_6353fb7
        lea eax, ds:[esi+0xC8]
        push eax
        lea ecx, ds:[edi+0x94]
        call public_628be40
        fld dword ptr ds : [edi+0xAC]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [edi+0xA8]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [edi+0xA4]
        faddp 
        faddp 
        fsubr dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        public_6353fb7 : nop
        fld dword ptr ds : [ebx+0x58]
        fsubr dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fld st(1)
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6353fdd
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_63a543c]
        public_6353fdd : nop
        fmul st, st(1)
        fadd dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [esi+0x68]
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_6354104
        fld dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ebx+0x54]
        mov edi, dword ptr ds : [esi+0x70]
        test edi, edi
        je public_6354072
        fld dword ptr ds : [esi+0xB8]
        lea ecx, ds:[edi+0x94]
        fmul dword ptr ds : [edi+0x34]
        push ecx
        lea edx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0xBC]
        fmul dword ptr ds : [edi+0x38]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0xC0]
        fmul dword ptr ds : [edi+0x3C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x30]
        fchs 
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        call public_628be60
        fld dword ptr ds : [edi+0x40]
        fmul dword ptr ss : [esp+0x2C]
        lea ecx, ds:[edi+0xA4]
        push ecx
        fchs 
        fstp dword ptr ss : [esp]
        push esi
        push ecx
        call public_628be60
        public_6354072 : nop
        mov edi, dword ptr ds : [esi+0x74]
        test edi, edi
        je public_635410b
        fld dword ptr ds : [esi+0xC8]
        mov eax, dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [edi+0x34]
        push eax
        lea edx, ss:[esp+0x14]
        lea ecx, ds:[edi+0x94]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0xCC]
        push edx
        fmul dword ptr ds : [edi+0x38]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0xD0]
        fmul dword ptr ds : [edi+0x3C]
        fstp dword ptr ss : [esp+0x24]
        call public_628be60
        fld dword ptr ds : [edi+0x40]
        fmul dword ptr ss : [esp+0x2C]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fadd dword ptr ds : [edi+0xA8]
        fld st(1)
        fmul dword ptr ds : [esi+8]
        fadd dword ptr ds : [edi+0xAC]
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        fxch 
        fmul dword ptr ds : [esi]
        mov dword ptr ds : [edi+0xAC], eax
        fadd dword ptr ds : [edi+0xA4]
        fstp dword ptr ds : [edi+0xA4]
        fstp dword ptr ds : [edi+0xA8]
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6354104 : nop
        mov dword ptr ds : [ebx+0x54], 0
        public_635410b : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6353f10)
    }
}

#undef public_6353f76
#undef public_6353fb7
#undef public_6353fdd
#undef public_6354072
#undef public_6354104
#undef public_635410b
