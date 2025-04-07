#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b737a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b73fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6b782c0);

#define public_6b73687 _public_6b73687
#define public_6b7368d _public_6b7368d
#define public_6b736a7 _public_6b736a7
#define public_6b736b4 _public_6b736b4
#define public_6b736e6 _public_6b736e6
#define public_6b736ef _public_6b736ef
#define public_6b7370e _public_6b7370e
#define public_6b73719 _public_6b73719
#define public_6b7372b _public_6b7372b
#define public_6b7373a _public_6b7373a
#define public_6b7373d _public_6b7373d
#define public_6b73784 _public_6b73784

PROC_DECLARE(0x6b73650, internal_6b73650, public_6b73650);
extern "C" NAKED register_t __cdecl internal_6b73650()
{
    __asm
    {
        mov eax, 0x2004
        call public_6b782c0
        push ebx
        mov ebx, dword ptr ss : [esp+0x2010]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2018]
        cmp ebx, 0xFFFFFFFF
        je public_6b73784
        mov eax, dword ptr ds : [edi+0x230]
        test eax, eax
        je public_6b73687
        mov esi, dword ptr ds : [eax+0x238]
        jmp public_6b7368d
        public_6b73687 : nop
        mov esi, dword ptr ds : [edi+0x238]
        public_6b7368d : nop
        test esi, esi
        je public_6b73784
        mov edx, dword ptr ds : [edi+0x244]
        lea ecx, ds:[edi+0x240]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_6b736b4
        public_6b736a7 : nop
        lea ebp, ds:[eax+8]
        cmp ebp, ebx
        je public_6b736e6
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6b736a7
        public_6b736b4 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        test al, al
        je public_6b7372b
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        test eax, eax
        je public_6b7372b
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        pop edi
        pop esi
        pop ebp
        and eax, 0xFF
        pop ebx
        add esp, 0x2004
        ret 8
        public_6b736e6 : nop
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_6b73719
        public_6b736ef : nop
        lea esi, ds:[eax+8]
        cmp esi, ebx
        je public_6b7370e
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6b736ef
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x2004
        ret 8
        public_6b7370e : nop
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_6b73fc0
        public_6b73719 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x2004
        ret 8
        public_6b7372b : nop
        mov eax, dword ptr ds : [edi+0x230]
        test eax, eax
        je public_6b7373a
        add eax, 0x20
        jmp public_6b7373d
        public_6b7373a : nop
        lea eax, ds:[edi+0x20]
        public_6b7373d : nop
        push eax
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_6b7a09c @0x6b73742*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b7a09c
        push eax
        call public_6b737a0
        push eax
        push 0x29B
        mov ecx, 0x100002
/*FIXUP push offset public_6b7a050 @0x6b73758*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b7a050
/*FIXUP push offset public_6b7a034 @0x6b7375d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b7a034
        push ecx
        mov ecx, dword ptr ds : [public_6b79000]
        call dword ptr ds : [ecx]
        add esp, 0x20
        mov dword ptr ds : [edi+0x1C], 6
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2004
        ret 8
        public_6b73784 : nop
        mov dword ptr ds : [edi+0x1C], 5
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2004
        ret 8
        UNREACHABLE_TRAP(0x6b73650)
    }
}

#undef public_6b73687
#undef public_6b7368d
#undef public_6b736a7
#undef public_6b736b4
#undef public_6b736e6
#undef public_6b736ef
#undef public_6b7370e
#undef public_6b73719
#undef public_6b7372b
#undef public_6b7373a
#undef public_6b7373d
#undef public_6b73784
