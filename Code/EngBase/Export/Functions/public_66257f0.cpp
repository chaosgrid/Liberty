#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661c270);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_662589d _public_662589d
#define public_66258c0 _public_66258c0
#define public_66258f4 _public_66258f4

PROC_DECLARE(0x66257f0, internal_66257f0, public_66257f0);
extern "C" NAKED register_t __cdecl internal_66257f0()
{
    __asm
    {
        sub esp, 0x74
        mov eax, dword ptr ss : [esp+0x7C]
        push ebx
        mov ebx, dword ptr ss : [esp+0x7C]
        push ebp
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_6629510]
        fld dword ptr ds : [ebx+0x48]
        fld dword ptr ds : [ebx+0x44]
        fld dword ptr ds : [ebx+0x40]
        fld st(3)
        fsin 
        push edi
        mov edi, dword ptr ss : [esp+0x8C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x1C]
        lea ebp, ds:[edi+0x24]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x18]
        fdivp 
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fcos 
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ebx+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ebx+0x44]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ebx+0x40]
        fstp dword ptr ss : [esp]
        call public_661c270
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [public_662b1b0]
        mov dword ptr ss : [esp+0x2C], ecx
        test eax, eax
        mov dword ptr ss : [esp+0x30], edx
        jne public_662589d
        call public_6628190
        mov dword ptr ds : [public_662b1b0], eax
        public_662589d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_662b1b0]
        test eax, eax
        jne public_66258c0
        call public_6628190
        mov dword ptr ds : [public_662b1b0], eax
        public_66258c0 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push esi
        push edx
        lea edx, ds:[ebx+0x1C]
        push edx
        lea edx, ss:[esp+0x68]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x60]
        rep movsd
        mov eax, dword ptr ds : [public_662b1b0]
        pop esi
        test eax, eax
        jne public_66258f4
        call public_6628190
        mov dword ptr ds : [public_662b1b0], eax
        public_66258f4 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x90]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x88]
        pop edi
        fld dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [ebx+0x40]
        fld st(1)
        fmul dword ptr ds : [ebx+0x44]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [ebx+0x48]
        fstp dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ebx+8]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [ebx+0xC]
        fstp dword ptr ss : [esp+0x2C]
        fxch 
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp], ecx
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+4], edx
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x66257f0)
    }
}

#undef public_662589d
#undef public_66258c0
#undef public_66258f4
