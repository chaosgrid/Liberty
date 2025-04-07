#include "RP8-PCH.h"


#define public_6d49cc7 _public_6d49cc7
#define public_6d49cfe _public_6d49cfe
#define public_6d49cff _public_6d49cff

PROC_DECLARE(0x6d49c9b, internal_6d49c9b, public_6d49c9b);
extern "C" NAKED register_t __cdecl internal_6d49c9b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edi+0x180]
        cmp byte ptr ds : [esi+0x30], 0
        jne public_6d49cc7
        mov eax, dword ptr ds : [edi+0x184]
        lea ecx, ds:[esi+8]
        push ecx
        push edi
        call dword ptr ds : [eax+0xC]
        test eax, eax
        pop ecx
        pop ecx
        je public_6d49cff
        mov byte ptr ds : [esi+0x30], 1
        public_6d49cc7 : nop
        mov eax, dword ptr ds : [edi+0x114]
        mov ecx, dword ptr ds : [edi+0x188]
        push ebx
        push dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+8], eax
        push dword ptr ss : [ebp+0x10]
        lea ebx, ds:[esi+0x34]
        push dword ptr ss : [ebp+0xC]
        push eax
        push ebx
        lea eax, ds:[esi+8]
        push eax
        push edi
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0x1C
        cmp dword ptr ds : [ebx], eax
        jb public_6d49cfe
        and byte ptr ds : [esi+0x30], 0
        and dword ptr ds : [ebx], 0
        public_6d49cfe : nop
        pop ebx
        public_6d49cff : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d49c9b)
    }
}

#undef public_6d49cc7
#undef public_6d49cfe
#undef public_6d49cff
