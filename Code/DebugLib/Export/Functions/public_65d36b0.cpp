#include "DebugLib-PCH.h"


#define public_65d36c8 _public_65d36c8
#define public_65d36e9 _public_65d36e9
#define public_65d36f1 _public_65d36f1

PROC_DECLARE(0x65d36b0, internal_65d36b0, public_65d36b0);
extern "C" NAKED register_t __cdecl internal_65d36b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov eax, dword ptr ds : [ebx+0x1C]
        mov edi, dword ptr ds : [ebx+0x4C]
        mov edx, dword ptr ds : [ebx+0x3C]
        mov esi, dword ptr ds : [eax]
        add edi, edx
        cmp esi, eax
        je public_65d36e9
        public_65d36c8 : nop
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_65d36f1
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ebx+0x1C]
        add edi, ecx
        cmp esi, eax
        jne public_65d36c8
        public_65d36e9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edi
        xor eax, eax
        public_65d36f1 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65d36b0)
    }
}

#undef public_65d36c8
#undef public_65d36e9
#undef public_65d36f1
