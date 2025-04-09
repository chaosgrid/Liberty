#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4e8d30);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4e8d58 _public_4e8d58
#define public_4e8d60 _public_4e8d60
#define public_4e8db4 _public_4e8db4
#define public_4e8e88 _public_4e8e88
#define public_4e8e90 _public_4e8e90
#define public_4e8ec8 _public_4e8ec8
#define public_4e8ed5 _public_4e8ed5
#define public_4e8ee3 _public_4e8ee3
#define public_4e8f1d _public_4e8f1d
#define public_4e8f35 _public_4e8f35

PROC_DECLARE(0x4e8d30, internal_4e8d30, public_4e8d30);
extern "C" NAKED register_t __cdecl internal_4e8d30()
{
    __asm
    {
        sub esp, 0x244
        push ebx
        mov ebx, dword ptr ss : [esp+0x24C]
        test ebx, ebx
        push ebp
        push esi
        push edi
        je public_4e8d58
        mov eax, dword ptr ds : [ebx+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        mov dword ptr ss : [esp+0x28], ebx
        je public_4e8d60
        public_4e8d58 : nop
        mov dword ptr ss : [esp+0x28], 0
        public_4e8d60 : nop
        call public_54baf0
        mov ebp, eax
        test ebp, ebp
        je public_4e8ec8
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_4e8ec8
        mov eax, dword ptr ds : [public_674b6c]
        test eax, eax
        lea esi, ds:[ebx+8]
        mov ecx, 9
        lea edi, ss:[esp+0x30]
        rep movsd
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0xBF800000
        jne public_4e8db4
        call public_5b73e0
        mov dword ptr ds : [public_674b6c], eax
        public_4e8db4 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        faddp 
        mov eax, dword ptr ss : [ebp]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], edx
        fmul dword ptr ss : [esp+0x24]
        mov ecx, ebp
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ebx+0x34]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ebx+0x30]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ebx+0x2C]
        faddp 
        fchs 
        fstp dword ptr ss : [esp+0x2C]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], eax
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], edx
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x1C], ecx
        fmul dword ptr ss : [esp+0x14]
        xor bl, bl
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fadd dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4e8e88
        mov bl, 1
        public_4e8e88 : nop
        mov ebp, dword ptr ss : [esp+0x28]
        mov eax, ebp
        mov edi, edi
        public_4e8e90 : nop
        mov edx, dword ptr ds : [eax+0x1D8]
        test edx, edx
        je public_4e8ed5
        push 0
        push edx
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4e8ec8
        add eax, 0xC
        test eax, eax
        je public_4e8ec8
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4e8ec8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_4e8e90
        public_4e8ec8 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x244
        ret 
        public_4e8ed5 : nop
        mov edi, dword ptr ds : [public_5c65a4]
        mov ecx, eax
        call edi
        mov esi, eax
        mov eax, ebp
        public_4e8ee3 : nop
        mov edx, dword ptr ds : [eax+0x1DC]
        test edx, edx
        je public_4e8f1d
        push 0
        push edx
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4e8ec8
        add eax, 0xC
        test eax, eax
        je public_4e8ec8
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4e8ec8
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_4e8ec8
        jmp public_4e8ee3
        public_4e8f1d : nop
        mov ecx, eax
        call edi
        test esi, esi
        mov ebp, eax
        je public_4e8ec8
        test ebp, ebp
        je public_4e8ec8
        test bl, bl
        je public_4e8f35
        mov eax, esi
        mov esi, ebp
        mov ebp, eax
        public_4e8f35 : nop
        mov ecx, dword ptr ds : [public_67eca8]
        push 0xFF
        lea eax, ss:[esp+0x58]
        push eax
        push esi
        push ecx
        call public_4347e0
        mov ebx, dword ptr ds : [public_5c71c8]
        lea edx, ss:[esp+0x64]
        push edx
        call ebx
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x274]
        add esi, 2
        add esp, 0x14
        cmp esi, eax
        jge public_4e8ec8
        mov edi, dword ptr ss : [esp+0x25C]
        lea eax, ss:[esp+0x54]
        push eax
        push edi
        call dword ptr ds : [public_5c70b4]
/*FIXUP push offset public_5cef58 @0x4e8f83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef58
        push edi
        call dword ptr ds : [public_5c70ac]
        mov edx, dword ptr ds : [public_67eca8]
        push 0xFF
        lea ecx, ss:[esp+0x68]
        push ecx
        push ebp
        push edx
        call public_4347e0
        lea eax, ss:[esp+0x74]
        push eax
        call ebx
        mov ecx, dword ptr ss : [esp+0x284]
        add eax, esi
        add esp, 0x24
        cmp eax, ecx
        jge public_4e8ec8
        lea ecx, ss:[esp+0x54]
        push ecx
        push edi
        call dword ptr ds : [public_5c70ac]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x244
        ret 
        UNREACHABLE_TRAP(0x4e8d30)
    }
}

#undef public_4e8d58
#undef public_4e8d60
#undef public_4e8db4
#undef public_4e8e88
#undef public_4e8e90
#undef public_4e8ec8
#undef public_4e8ed5
#undef public_4e8ee3
#undef public_4e8f1d
#undef public_4e8f35
