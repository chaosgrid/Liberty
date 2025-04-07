#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6301640);

#define public_6301660 _public_6301660
#define public_630166a _public_630166a
#define public_630166e _public_630166e
#define public_6301673 _public_6301673
#define public_6301694 _public_6301694

PROC_DECLARE(0x6301640, internal_6301640, public_6301640);
extern "C" NAKED register_t __cdecl internal_6301640()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, edx
        je public_6301673
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_6301660 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_630166a
        mov eax, dword ptr ds : [eax+8]
        jmp public_630166e
        public_630166a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_630166e : nop
        cmp eax, ecx
        jne public_6301660
        pop edi
        public_6301673 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6301694
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6301694
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6301694 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6301640)
    }
}

#undef public_6301660
#undef public_630166a
#undef public_630166e
#undef public_6301673
#undef public_6301694
