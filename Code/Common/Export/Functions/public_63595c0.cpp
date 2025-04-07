#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be40);
CLANG_FORWARD_PROC_SYMBOL(public_6359560);
CLANG_FORWARD_PROC_SYMBOL(public_63595c0);

#define public_63595f5 _public_63595f5
#define public_635964d _public_635964d
#define public_6359682 _public_6359682

PROC_DECLARE(0x63595c0, internal_63595c0, public_63595c0);
extern "C" NAKED register_t __cdecl internal_63595c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr ds : [ebx+0x40]
        mov eax, dword ptr ds : [esi+0x54]
        and eax, 0xFFFFFF01
        or eax, 1
        mov dword ptr ds : [esi+0x54], eax
        fld dword ptr ds : [ebx+0x58]
        fcomp dword ptr ds : [public_658ab30]
        fnstsw ax
        test ah, 0x41
        jne public_63595f5
        mov dword ptr ds : [esi+0x5C], 0x60AD78EC
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_63595f5 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        push ebp
        mov ebp, dword ptr ds : [ecx+0x18]
        push edi
        push ebp
        mov ecx, ebx
        call public_6359560
        fstp dword ptr ds : [esi+0x58]
        mov edi, dword ptr ds : [esi+0x70]
        test edi, edi
        mov dword ptr ss : [esp+0x10], 0
        je public_635964d
        lea edx, ds:[esi+0xB8]
        push edx
        lea ecx, ds:[edi+0x94]
        call public_628be40
        fld dword ptr ds : [edi+0xAC]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [edi+0xA8]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ds : [edi+0xA4]
        fmul dword ptr ds : [esi]
        faddp 
        faddp 
        fstp dword ptr ss : [esp+0x10]
        public_635964d : nop
        mov edi, dword ptr ds : [esi+0x74]
        test edi, edi
        je public_6359682
        lea eax, ds:[esi+0xC8]
        push eax
        lea ecx, ds:[edi+0x94]
        call public_628be40
        fstp dword ptr ss : [esp+0x14]
        push esi
        lea ecx, ds:[edi+0xA4]
        call public_628be40
        fadd dword ptr ss : [esp+0x14]
        fsubr dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        public_6359682 : nop
        fld dword ptr ds : [ebx+0x58]
        pop edi
        fld dword ptr ds : [esi+0x58]
        fmul dword ptr ds : [public_63a5460]
        fadd dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [ebp+0xAC]
        pop ebp
        fsubp 
        fstp dword ptr ds : [esi+0x5C]
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x63595c0)
    }
}

#undef public_63595f5
#undef public_635964d
#undef public_6359682
