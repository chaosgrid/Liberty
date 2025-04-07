#include "FLMaterials-PCH.h"


#define public_6700225 _public_6700225
#define public_670024e _public_670024e

PROC_DECLARE(0x6700200, internal_6700200, public_6700200);
extern "C" NAKED register_t __cdecl internal_6700200()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi+0x6C]
        test al, al
        je public_670024e
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        je public_6700225
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x18
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        public_6700225 : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_670024e
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_670024e
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_670024e
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0x8D
        push eax
        call dword ptr ds : [edx+0xF0]
        public_670024e : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6700200)
    }
}

#undef public_6700225
#undef public_670024e
