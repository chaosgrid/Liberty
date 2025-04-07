#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_597234 _public_597234
#define public_5972bc _public_5972bc
#define public_5972c6 _public_5972c6

PROC_DECLARE(0x5971e0, internal_5971e0, public_5971e0);
extern "C" NAKED register_t __cdecl internal_5971e0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x68]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], eax
        fdiv dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_67d9fc]
        test eax, eax
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], edx
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        jne public_597234
        call public_5b73e0
        mov dword ptr ds : [public_67d9fc], eax
        public_597234 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        lea edx, ds:[esi+0x3DC]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_5972c6
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x334]
        fnstsw ax
        test ah, 5
        jp public_5972c6
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_5972c6
        fld dword ptr ds : [esi+0x338]
        fchs 
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_5972c6
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        je public_5972bc
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_5972bc
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ebx, dword ptr ds : [edi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        push 0x25
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        pop ebx
        public_5972bc : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0x18
        ret 4
        public_5972c6 : nop
        xor al, al
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x5971e0)
    }
}

#undef public_597234
#undef public_5972bc
#undef public_5972c6
