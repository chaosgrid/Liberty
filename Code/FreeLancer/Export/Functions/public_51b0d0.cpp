#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51d070);
CLANG_FORWARD_PROC_SYMBOL(public_51dbd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_51b127 _public_51b127
#define public_51b129 _public_51b129
#define public_51b156 _public_51b156
#define public_51b19c _public_51b19c
#define public_51b1da _public_51b1da
#define public_51b1dc _public_51b1dc
#define public_51b23b _public_51b23b

PROC_DECLARE(0x51b0d0, internal_51b0d0, public_51b0d0);
extern "C" NAKED register_t __cdecl internal_51b0d0()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xC0]
        test eax, eax
        je public_51b23b
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_51b23b
        add eax, 0xC
        test eax, eax
        je public_51b23b
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_51b23b
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_51b23b
        mov eax, dword ptr ds : [ebx+0xC0]
        test eax, eax
        je public_51b127
        lea ecx, ds:[eax-8]
        jmp public_51b129
        public_51b127 : nop
        xor ecx, ecx
        public_51b129 : nop
        mov edx, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [edx+0xC]
        fld qword ptr ds : [public_5dbf48]
        mov esi, eax
        fcos 
        mov ecx, 9
        lea edi, ss:[esp+0x24]
        rep movsd
        lea eax, ss:[esp+0x2C]
        mov ecx, 3
        fld qword ptr ds : [public_5dbf48]
        fsin 
        public_51b156 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_51b156
        lea eax, ss:[esp+0x24]
        fstp st(0)
        push eax
        fstp st(0)
        mov ecx, ebx
        call public_51dbd0
        mov eax, dword ptr ds : [public_675220]
        test eax, eax
        jne public_51b19c
        call public_5b73e0
        mov dword ptr ds : [public_675220], eax
        public_51b19c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x100]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ebx+0xC0]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        je public_51b1da
        lea ecx, ds:[eax-8]
        jmp public_51b1dc
        public_51b1da : nop
        xor ecx, ecx
        public_51b1dc : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [eax]
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0x48]
        fstp dword ptr ss : [esp+0xC]
        rep movsd
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x6C], ecx
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        lea esi, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x70], edx
        mov dword ptr ss : [esp+0x74], eax
        rep movsd
        pop edi
        mov byte ptr ds : [ebx+0x34], 1
        pop esi
        public_51b23b : nop
        mov ecx, dword ptr ss : [esp+0x74]
        push ecx
        mov ecx, ebx
        call public_51d070
        pop ebx
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x51b0d0)
    }
}

#undef public_51b127
#undef public_51b129
#undef public_51b156
#undef public_51b19c
#undef public_51b1da
#undef public_51b1dc
#undef public_51b23b
