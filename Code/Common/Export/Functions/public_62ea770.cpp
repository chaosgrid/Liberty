#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6299ac0);
CLANG_FORWARD_PROC_SYMBOL(public_629a210);
CLANG_FORWARD_PROC_SYMBOL(public_629b6d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ea450);
CLANG_FORWARD_PROC_SYMBOL(public_62ea770);

#define public_62ea7c7 _public_62ea7c7
#define public_62ea7c9 _public_62ea7c9
#define public_62ea823 _public_62ea823
#define public_62ea825 _public_62ea825
#define public_62ea842 _public_62ea842
#define public_62ea844 _public_62ea844
#define public_62ea86a _public_62ea86a
#define public_62ea8eb _public_62ea8eb
#define public_62ea8fb _public_62ea8fb
#define public_62ea8ff _public_62ea8ff
#define public_62ea901 _public_62ea901
#define public_62ea90b _public_62ea90b
#define public_62ea920 _public_62ea920
#define public_62ea925 _public_62ea925
#define public_62ea93b _public_62ea93b
#define public_62ea946 _public_62ea946

PROC_DECLARE(0x62ea770, internal_62ea770, public_62ea770);
extern "C" NAKED register_t __cdecl internal_62ea770()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        test ebx, ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, 2
        je public_62ea946
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_62ea946
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_62ea946
        mov cl, byte ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        and cl, 0xF8
        and edx, 0xE0000000
        mov byte ptr ss : [esp+0xC], cl
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_62ea7c7
        lea ecx, ds:[eax-8]
        jmp public_62ea7c9
        public_62ea7c7 : nop
        xor ecx, ecx
        public_62ea7c9 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x118]
        mov cl, byte ptr ss : [esp+0x10]
        test eax, eax
        mov al, byte ptr ss : [esp+0xC]
        jne public_62ea8fb
        test al, 1
        je public_62ea8ff
        test al, 6
        jne public_62ea8fb
        test cl, 0xA
        je public_62ea8fb
        lea eax, ss:[esp+0x14]
        push ebx
        push eax
        call public_62e60e0
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        add esp, 8
        test eax, eax
        je public_62ea823
        lea ecx, ds:[eax-8]
        jmp public_62ea825
        public_62ea823 : nop
        xor ecx, ecx
        public_62ea825 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62ea842
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_62ea844
        public_62ea842 : nop
        xor eax, eax
        public_62ea844 : nop
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        lea ecx, ds:[eax+0xE4]
        call public_629b6d0
        push eax
        call public_629a210
        add esp, 4
        test eax, eax
        jne public_62ea86a
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 0xC
        public_62ea86a : nop
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, eax
        call public_6299ac0
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x20]
        mov eax, 0x5F3759DF
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x28]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x34]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x34], eax
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fcomp dword ptr ss : [esp+0x38]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62ea8eb
        mov esi, 1
        jmp public_62ea925
        public_62ea8eb : nop
        mov esi, 5
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x20
        ret 0xC
        public_62ea8fb : nop
        test al, 1
        jne public_62ea901
        public_62ea8ff : nop
        xor esi, esi
        public_62ea901 : nop
        test cl, 4
        je public_62ea90b
        mov esi, 4
        public_62ea90b : nop
        test cl, 8
        je public_62ea920
        mov esi, 3
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x20
        ret 0xC
        public_62ea920 : nop
        cmp esi, 1
        jne public_62ea93b
        public_62ea925 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push ebx
        mov ecx, edi
        call public_62ea450
        cmp al, 1
        jne public_62ea93b
        mov esi, 7
        public_62ea93b : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x20
        ret 0xC
        public_62ea946 : nop
        pop edi
        pop esi
        mov eax, 2
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x62ea770)
    }
}

#undef public_62ea7c7
#undef public_62ea7c9
#undef public_62ea823
#undef public_62ea825
#undef public_62ea842
#undef public_62ea844
#undef public_62ea86a
#undef public_62ea8eb
#undef public_62ea8fb
#undef public_62ea8ff
#undef public_62ea901
#undef public_62ea90b
#undef public_62ea920
#undef public_62ea925
#undef public_62ea93b
#undef public_62ea946
