#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f22f50);

#define public_6f22f96 _public_6f22f96

PROC_DECLARE(0x6f22f50, internal_6f22f50, public_6f22f50);
extern "C" NAKED register_t __cdecl internal_6f22f50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        add eax, 4
        push eax
        call public_6f15710
        mov ecx, dword ptr ss : [esp+0x10]
        add ecx, 4
        push ecx
        mov ecx, dword ptr ds : [esi]
        mov edi, eax
        call public_6f15710
        test edi, edi
        je public_6f22f96
        test eax, eax
        je public_6f22f96
        mov esi, dword ptr ds : [eax+0x14C]
        mov edx, dword ptr ds : [edi+0x14C]
        xor ecx, ecx
        cmp edx, esi
        setl cl
        pop edi
        mov al, cl
        pop esi
        ret 8
        public_6f22f96 : nop
        pop edi
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f22f50)
    }
}

#undef public_6f22f96
