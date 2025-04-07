#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4963d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4964f6 _public_4964f6

PROC_DECLARE(0x4963d0, internal_4963d0, public_4963d0);
extern "C" NAKED register_t __cdecl internal_4963d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x6C
        cmp eax, 2
        push ebx
        push esi
        push edi
        mov ebx, ecx
        jne public_4964f6
        fld dword ptr ds : [ebx+0x3F8]
        lea eax, ds:[ebx+0x828]
        mov ecx, dword ptr ds : [eax]
        fmul dword ptr ds : [public_5d3e48]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], edx
        fstp dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [ebx+0x37C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        fld dword ptr ds : [ebx+0x46C]
        fmul dword ptr ds : [ebx+0x3F8]
        mov edx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x470]
        mov esi, eax
        fmul dword ptr ds : [ebx+0x3F8]
        mov eax, dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0xC]
        mov ecx, 0xC
        fadd st, st(2)
        lea edi, ss:[esp+0x18]
        rep movsd
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fstp st(0)
        mov ecx, eax
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ds : [ebx+0x37C]
        mov dword ptr ss : [esp+0x44], ecx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        fld dword ptr ss : [esp+0x80]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        movzx eax, al
        mov dword ptr ss : [esp+0x80], eax
        mov ecx, 0x3F800000
        pop edi
        fild dword ptr ss : [esp+0x7C]
        pop esi
        mov dword ptr ds : [ebx+0x38C], ecx
        mov dword ptr ds : [ebx+0x390], ecx
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [ebx+0x394], ecx
        fstp dword ptr ds : [ebx+0x39C]
        pop ebx
        add esp, 0x6C
        ret 8
        public_4964f6 : nop
        lea ecx, ds:[ebx+0x81C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ebx+0x354]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        fld dword ptr ds : [ebx+0x3F8]
        fmul dword ptr ds : [public_5ca220]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, 0xC
        lea edi, ss:[esp+0x48]
        rep movsd
        fst dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ds : [ebx+0x46C]
        fmul dword ptr ds : [ebx+0x3F8]
        fld dword ptr ds : [ebx+0x470]
        fmul dword ptr ds : [ebx+0x3F8]
        fld dword ptr ss : [esp+0xC]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        fadd st, st(1)
        mov dword ptr ss : [esp+0x6C], ecx
        mov ecx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x74], eax
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x70], edx
        mov dword ptr ss : [esp+0x14], eax
        fstp st(0)
        mov eax, dword ptr ds : [ecx]
        fstp st(0)
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x354]
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        fld dword ptr ss : [esp+0x80]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        xor edx, edx
        mov dl, al
        mov ecx, 0x3F800000
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x364], ecx
        mov dword ptr ds : [ebx+0x368], ecx
        mov dword ptr ds : [ebx+0x36C], ecx
        mov dword ptr ss : [esp+0x78], edx
        fild dword ptr ss : [esp+0x78]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [ebx+0x374]
        pop ebx
        add esp, 0x6C
        ret 8
        UNREACHABLE_TRAP(0x4963d0)
    }
}

#undef public_4964f6
