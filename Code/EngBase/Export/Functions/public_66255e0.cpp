#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_662567e _public_662567e
#define public_66256a1 _public_66256a1
#define public_66256d5 _public_66256d5

PROC_DECLARE(0x66255e0, internal_66255e0, public_66255e0);
extern "C" NAKED register_t __cdecl internal_66255e0()
{
    __asm
    {
        sub esp, 0x64
        mov eax, dword ptr ss : [esp+0x6C]
        push ebx
        mov ebx, dword ptr ss : [esp+0x6C]
        push ebp
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [public_6629510]
        fld dword ptr ds : [ebx+0x48]
        fld dword ptr ds : [ebx+0x44]
        fld dword ptr ds : [ebx+0x40]
        fld st(3)
        fsin 
        push edi
        mov edi, dword ptr ss : [esp+0x7C]
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
        fst dword ptr ss : [esp+0x74]
        fdivp 
        fstp dword ptr ss : [esp+0x74]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fcos 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ds : [ebx+0x40]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ds : [ebx+0x44]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x1C], ecx
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ds : [ebx+0x48]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_662b1b0]
        test eax, eax
        jne public_662567e
        call public_6628190
        mov dword ptr ds : [public_662b1b0], eax
        public_662567e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_662b1b0]
        test eax, eax
        jne public_66256a1
        call public_6628190
        mov dword ptr ds : [public_662b1b0], eax
        public_66256a1 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x1C]
        push esi
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x58]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x50]
        rep movsd
        mov eax, dword ptr ds : [public_662b1b0]
        pop esi
        test eax, eax
        jne public_66256d5
        call public_6628190
        mov dword ptr ds : [public_662b1b0], eax
        public_66256d5 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x80]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ss : [esp+0x18]
        pop edi
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ebx+0xC]
        fsub dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0x64
        ret 
        UNREACHABLE_TRAP(0x66255e0)
    }
}

#undef public_662567e
#undef public_66256a1
#undef public_66256d5
