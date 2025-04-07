#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6200);
CLANG_FORWARD_PROC_SYMBOL(public_62ecb20);
CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);

#define public_62c9795 _public_62c9795
#define public_62c97df _public_62c97df
#define public_62c97e0 _public_62c97e0
#define public_62c97f7 _public_62c97f7

PROC_DECLARE(0x62c9720, internal_62c9720, public_62c9720);
extern "C" NAKED register_t __cdecl internal_62c9720()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x24]
        add ecx, 0x1364
        mov ebx, 2
        call public_62ecb20
        test al, al
        jne public_62c97e0
        mov ecx, dword ptr ds : [edi+0x24]
        push ebp
        add ecx, 0x142C
        call public_62ed5a0
        mov ebp, eax
        test ebp, ebp
        je public_62c97df
        push ebp
        call public_62e6200
        add esp, 4
        test eax, 0x70000
        jne public_62c97df
        push esi
        mov esi, dword ptr ds : [edi+0x24]
        mov al, byte ptr ds : [esi+0x1579]
        add esi, 0x14FC
        test al, al
        jne public_62c9795
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62c9795 : nop
        test dword ptr ds : [esi+8], 0x70000
        pop esi
        je public_62c97df
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_639fa48]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        je public_62c97df
        mov ebx, 1
        mov dword ptr ds : [edi+0x60], ebx
        public_62c97df : nop
        pop ebp
        public_62c97e0 : nop
        mov al, byte ptr ds : [edi+0x29]
        test al, al
        je public_62c97f7
        mov eax, 3
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop ebx
        add esp, 0xC
        ret 4
        public_62c97f7 : nop
        mov dword ptr ds : [edi+0xC], ebx
        pop edi
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62c9720)
    }
}

#undef public_62c9795
#undef public_62c97df
#undef public_62c97e0
#undef public_62c97f7
