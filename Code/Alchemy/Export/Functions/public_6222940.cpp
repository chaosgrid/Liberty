#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222940);

#define public_6222953 _public_6222953
#define public_6222965 _public_6222965
#define public_6222973 _public_6222973
#define public_622298d _public_622298d

PROC_DECLARE(0x6222940, internal_6222940, public_6222940);
extern "C" NAKED register_t __cdecl internal_6222940()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_622298d
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6222953 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6222965
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6222965 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6222973
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6222973 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        add esi, 0x10
        cmp esi, ebx
        jne public_6222953
        pop edi
        public_622298d : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6222940)
    }
}

#undef public_6222953
#undef public_6222965
#undef public_6222973
#undef public_622298d
