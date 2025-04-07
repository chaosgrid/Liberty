#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62311d0);

#define public_62311e3 _public_62311e3
#define public_62311f5 _public_62311f5
#define public_6231203 _public_6231203
#define public_6231213 _public_6231213

PROC_DECLARE(0x62311d0, internal_62311d0, public_62311d0);
extern "C" NAKED register_t __cdecl internal_62311d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, ebx
        je public_6231213
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        public_62311e3 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62311f5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_62311f5 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6231203
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6231203 : nop
        add edi, 4
        add esi, 4
        cmp edi, ebx
        jne public_62311e3
        mov eax, esi
        pop esi
        pop edi
        pop ebx
        ret 
        public_6231213 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62311d0)
    }
}

#undef public_62311e3
#undef public_62311f5
#undef public_6231203
#undef public_6231213
