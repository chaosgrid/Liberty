#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415050);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_415011 _public_415011
#define public_415039 _public_415039
#define public_415041 _public_415041

PROC_DECLARE(0x414fb0, internal_414fb0, public_414fb0);
extern "C" NAKED register_t __cdecl internal_414fb0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi+0x14], eax
        je public_415041
        mov dword ptr ds : [edi+0x14], eax
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        push ebx
        je public_415039
        mov eax, dword ptr ds : [eax+0x15C]
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_616524
        mov dword ptr ss : [esp+0x1C], eax
        call public_432240
        mov esi, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [esi+0x160]
        dec ecx
        mov ebx, ecx
        test ebx, ebx
        mov dword ptr ds : [esi+0x160], ecx
        jg public_415011
        mov ecx, esi
        call public_415050
        push esi
        call public_5b7e1d
        add esp, 4
        public_415011 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+0x30], 0
        cmp eax, dword ptr ds : [public_616528]
        pop esi
        je public_415039
        test ebx, ebx
        jg public_415039
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_616524
        call public_46c8c0
        public_415039 : nop
        mov dword ptr ds : [edi+0x24], 0
        pop ebx
        public_415041 : nop
        pop edi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x414fb0)
    }
}

#undef public_415011
#undef public_415039
#undef public_415041
