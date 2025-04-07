#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6230910);

#define public_623092b _public_623092b
#define public_623092d _public_623092d
#define public_6230936 _public_6230936
#define public_6230939 _public_6230939

PROC_DECLARE(0x6230910, internal_6230910, public_6230910);
extern "C" NAKED register_t __cdecl internal_6230910()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        test eax, eax
        je public_623092b
        mov dword ptr ds : [eax], edx
        jmp public_623092d
        public_623092b : nop
        mov dword ptr ds : [ecx], edx
        public_623092d : nop
        test edx, edx
        je public_6230936
        mov dword ptr ds : [edx+4], eax
        jmp public_6230939
        public_6230936 : nop
        mov dword ptr ds : [ecx+4], eax
        public_6230939 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        pop esi
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6230910)
    }
}

#undef public_623092b
#undef public_623092d
#undef public_6230936
#undef public_6230939
