#include "Common-PCH.h"


#define public_632848f _public_632848f
#define public_6328498 _public_6328498
#define public_63284a1 _public_63284a1

PROC_DECLARE(0x63283f0, internal_63283f0, public_63283f0);
extern "C" NAKED register_t __cdecl internal_63283f0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        je public_63284a1
        mov ecx, dword ptr ds : [edi+0xC]
        cmp ecx, dword ptr ds : [edi+4]
        je public_6328498
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [edi+8]
        je public_6328498
        mov eax, edi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [esi+0x38]
        push eax
        mov dword ptr ss : [esp+0x1C], edx
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [public_6399398]
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_63990bc]
        mov ebx, eax
        test ebx, ebx
        je public_63284a1
        mov ecx, dword ptr ds : [esi+0x3C]
        push ebx
        push ecx
        call dword ptr ds : [public_63990b8]
        test eax, eax
        jne public_632848f
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a4614 @0x6328470*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4614
        push 0x592
/*FIXUP push offset public_63a4588 @0x632847a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4588
        mov eax, 0x100003
/*FIXUP push offset public_63a456c @0x6328484*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a456c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_632848f : nop
        push ebx
        call dword ptr ds : [public_639907c]
        jmp public_63284a1
        public_6328498 : nop
        push 0
        push eax
        call dword ptr ds : [public_63990b8]
        public_63284a1 : nop
        mov eax, dword ptr ds : [edi]
        add esi, 0x40
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x63283f0)
    }
}

#undef public_632848f
#undef public_6328498
#undef public_63284a1
