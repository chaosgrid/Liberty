#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d35c0);
CLANG_FORWARD_PROC_SYMBOL(public_62e92e0);

#define public_62d35e3 _public_62d35e3
#define public_62d35e5 _public_62d35e5
#define public_62d3681 _public_62d3681
#define public_62d3688 _public_62d3688

PROC_DECLARE(0x62d35c0, internal_62d35c0, public_62d35c0);
extern "C" NAKED register_t __cdecl internal_62d35c0()
{
    __asm
    {
        sub esp, 0x30
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0xF9]
        test al, al
        je public_62d3688
        mov eax, dword ptr ss : [ebp+0xF0]
        test eax, eax
        je public_62d35e3
        lea ecx, ds:[eax-8]
        jmp public_62d35e5
        public_62d35e3 : nop
        xor ecx, ecx
        public_62d35e5 : nop
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [eax+0xC]
        mov esi, eax
        mov al, byte ptr ss : [esp+0x40]
        test al, al
        mov ecx, 9
        lea edi, ss:[esp+0x18]
        rep movsd
        pop edi
        pop esi
        je public_62d3688
        fld dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x30]
        fadd st, st(2)
        fmul dword ptr ds : [public_6399408]
        fadd st, st(1)
        fabs 
        fld dword ptr ds : [public_63a033c]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62d3688
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x18
        mov byte ptr ss : [ebp+0xF9], 0
        call public_62e92e0
        test al, al
        je public_62d3681
        mov dword ptr ss : [esp+4], 0
        mov edx, dword ptr ss : [esp+4]
        lea ecx, ss:[ebp+0x134]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+8], 0x3F800000
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov byte ptr ss : [ebp+0x130], 0
        public_62d3681 : nop
        mov byte ptr ss : [ebp+0xF9], 1
        public_62d3688 : nop
        pop ebp
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x62d35c0)
    }
}

#undef public_62d35e3
#undef public_62d35e5
#undef public_62d3681
#undef public_62d3688
