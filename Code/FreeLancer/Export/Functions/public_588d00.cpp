#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_588d2c _public_588d2c
#define public_588d82 _public_588d82
#define public_588dc6 _public_588dc6
#define public_588e10 _public_588e10
#define public_588e6a _public_588e6a

PROC_DECLARE(0x588d00, internal_588d00, public_588d00);
extern "C" NAKED register_t __cdecl internal_588d00()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push edi
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67c53c]
        test eax, eax
        jne public_588d2c
        call public_5b73e0
        mov dword ptr ds : [public_67c53c], eax
        public_588d2c : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [ebx+0x84]
        cmp edx, 0xFFFFFFFF
        lea edi, ds:[ebx+0x3C]
        mov ecx, 9
        lea esi, ss:[esp+0x30]
        rep movsd
        je public_588e6a
        fld dword ptr ds : [ebx+0x330]
        mov ecx, 9
        fld st(0)
        lea esi, ss:[esp+0x30]
        fcos 
        lea edi, ss:[esp+0xC]
        rep movsd
        lea eax, ss:[esp+0x14]
        mov ecx, 3
        fstp dword ptr ss : [esp+0x58]
        fsin 
        public_588d82 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld dword ptr ss : [esp+0x58]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_588d82
        fstp st(0)
        lea eax, ss:[esp+0x14]
        fld dword ptr ds : [ebx+0x334]
        mov ecx, 3
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x58]
        fsin 
        public_588dc6 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld dword ptr ss : [esp+0x58]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_588dc6
        fstp st(0)
        lea eax, ss:[esp+0x10]
        fld dword ptr ds : [ebx+0x32C]
        mov ecx, 3
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x58]
        fsin 
        lea ebx, ds:[ebx]
        public_588e10 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-0xC]
        fld st(1)
        fmul dword ptr ss : [esp+0x58]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_588e10
        mov eax, dword ptr ds : [public_5c6d90]
        fstp st(0)
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea esi, ss:[esp+0xC]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x94]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+0x84]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_588e6a : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x588d00)
    }
}

#undef public_588d2c
#undef public_588d82
#undef public_588dc6
#undef public_588e10
#undef public_588e6a
