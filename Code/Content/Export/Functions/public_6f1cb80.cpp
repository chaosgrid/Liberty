#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1cb80);

#define public_6f1cb93 _public_6f1cb93
#define public_6f1cb97 _public_6f1cb97
#define public_6f1cba4 _public_6f1cba4
#define public_6f1cbb7 _public_6f1cbb7

PROC_DECLARE(0x6f1cb80, internal_6f1cb80, public_6f1cb80);
extern "C" NAKED register_t __cdecl internal_6f1cb80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        test ebx, ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
        jne public_6f1cb93
        mov ebx, dword ptr ds : [esi]
        public_6f1cb93 : nop
        cmp esi, ebx
        je public_6f1cbb7
        public_6f1cb97 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f1cba4
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f1cba4 : nop
        mov edx, dword ptr ds : [edi]
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, ebx
        jne public_6f1cb97
        public_6f1cbb7 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f1cb80)
    }
}

#undef public_6f1cb93
#undef public_6f1cb97
#undef public_6f1cba4
#undef public_6f1cbb7
