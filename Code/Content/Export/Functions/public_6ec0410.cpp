#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6ec046b _public_6ec046b
#define public_6ec0526 _public_6ec0526

PROC_DECLARE(0x6ec0410, internal_6ec0410, public_6ec0410);
extern "C" NAKED register_t __cdecl internal_6ec0410()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0x44]
        push edi
        push eax
        call dword ptr ds : [public_6fb3684]
        mov ebp, dword ptr ds : [public_6fb3664]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edi, ds:[esi+0x84]
        push edi
        lea ebx, ds:[esi+0x74]
        push eax
        mov dword ptr ds : [ebx], eax
        call ebp
        mov eax, dword ptr ds : [public_6fcf014]
        add esp, 0x10
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0xBF800000
        jne public_6ec046b
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf014], eax
        public_6ec046b : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[esi+0x90]
        mov edx, eax
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+8], ecx
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        push edi
        fld dword ptr ds : [eax]
        lea edx, ds:[esi+0x9C]
        fld st(0)
        push edx
        fmul st, st(1)
        push ebx
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_6fb5810]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        fld dword ptr ds : [edi+8]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [edi+4]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [edi]
        fmul dword ptr ds : [eax]
        faddp 
        fchs 
        fstp dword ptr ds : [esi+0xA0]
        call dword ptr ds : [public_6fb3630]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 0xC
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15940
        test eax, 0x3FFFFFFF
        je public_6ec0526
        lea ecx, ss:[esp+0x4C]
        push ecx
        add esi, 0x78
        push esi
        push eax
        call ebp
        add esp, 0xC
        public_6ec0526 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x6ec0410)
    }
}

#undef public_6ec046b
#undef public_6ec0526
