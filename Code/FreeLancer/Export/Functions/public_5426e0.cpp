#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_539740);
CLANG_FORWARD_PROC_SYMBOL(public_5426e0);

#define public_5426ff _public_5426ff
#define public_542701 _public_542701
#define public_542776 _public_542776
#define public_54277f _public_54277f

PROC_DECLARE(0x5426e0, internal_5426e0, public_5426e0);
extern "C" NAKED register_t __cdecl internal_5426e0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_539740
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_5426ff
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        je public_542701
        public_5426ff : nop
        xor eax, eax
        public_542701 : nop
        mov edx, dword ptr ds : [eax+0x88]
        mov ebx, dword ptr ds : [edx+4]
        lea edi, ds:[ebx+0x58]
        mov ecx, edi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_54277f
        fld dword ptr ds : [ebx+0x54]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_542776
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x1C0]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        mov ecx, edi
        mov ebx, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_54277f
        lea eax, ds:[esi+0xB0]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebx
        push esi
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 
        public_542776 : nop
        mov edx, dword ptr ds : [ebx+0x54]
        mov dword ptr ds : [esi+0xAC], edx
        public_54277f : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x5426e0)
    }
}

#undef public_5426ff
#undef public_542701
#undef public_542776
#undef public_54277f
