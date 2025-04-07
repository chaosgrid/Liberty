#include "DALib-PCH.h"


#define public_65c5b85 _public_65c5b85
#define public_65c5bdc _public_65c5bdc
#define public_65c5be7 _public_65c5be7
#define public_65c5bff _public_65c5bff
#define public_65c5c17 _public_65c5c17

PROC_DECLARE(0x65c5b50, internal_65c5b50, public_65c5b50);
extern "C" NAKED register_t __cdecl internal_65c5b50()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+8], 0
        je public_65c5c17
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 4
        je public_65c5b85
        cmp dword ptr ds : [esi+0x18], eax
        je public_65c5c17
        public_65c5b85 : nop
        cmp eax, 2
        mov dword ptr ds : [esi+0x18], eax
        je public_65c5be7
        jle public_65c5c17
        cmp eax, 4
        jg public_65c5c17
        mov edi, dword ptr ds : [public_65c70d8]
        call edi
        cmp eax, dword ptr ds : [esi+0x24]
        jbe public_65c5c17
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dx, word ptr ds : [esi+0x20]
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        cmp dword ptr ss : [esp+8], 4
        jne public_65c5bdc
        call edi
        add eax, 0x2710
        pop edi
        mov dword ptr ds : [esi+0x24], eax
        pop esi
        pop ecx
        ret 
        public_65c5bdc : nop
        pop edi
        mov dword ptr ds : [esi+0x24], 0
        pop esi
        pop ecx
        ret 
        public_65c5be7 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        lea ecx, ds:[esi+0x10]
        jne public_65c5bff
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
/*FIXUP push offset public_65ca054 @0x65c5bf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca054
        push eax
        call dword ptr ds : [edx]
        public_65c5bff : nop
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        lea eax, ds:[esi+0x14]
        jne public_65c5c17
        mov esi, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi]
        push eax
/*FIXUP push offset public_65ca044 @0x65c5c0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca044
        push esi
        call dword ptr ds : [ecx]
        public_65c5c17 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65c5b50)
    }
}

#undef public_65c5b85
#undef public_65c5bdc
#undef public_65c5be7
#undef public_65c5bff
#undef public_65c5c17
