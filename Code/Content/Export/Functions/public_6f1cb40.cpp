#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cb40);

#define public_6f1cb50 _public_6f1cb50
#define public_6f1cb5d _public_6f1cb5d
#define public_6f1cb71 _public_6f1cb71

PROC_DECLARE(0x6f1cb40, internal_6f1cb40, public_6f1cb40);
extern "C" NAKED register_t __cdecl internal_6f1cb40()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f1cb71
        mov edi, edi
        public_6f1cb50 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f1cb5d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f1cb5d : nop
        mov edx, dword ptr ds : [edi]
        push esi
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [edi+8]
        jne public_6f1cb50
        public_6f1cb71 : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f1cb40)
    }
}

#undef public_6f1cb50
#undef public_6f1cb5d
#undef public_6f1cb71
