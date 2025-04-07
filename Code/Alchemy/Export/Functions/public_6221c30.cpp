#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221c30);

#define public_6221c44 _public_6221c44
#define public_6221c4e _public_6221c4e
#define public_6221c52 _public_6221c52
#define public_6221c57 _public_6221c57

PROC_DECLARE(0x6221c30, internal_6221c30, public_6221c30);
extern "C" NAKED register_t __cdecl internal_6221c30()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6221c57
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6221c44 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jae public_6221c4e
        mov eax, dword ptr ds : [eax+8]
        jmp public_6221c52
        public_6221c4e : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_6221c52 : nop
        cmp eax, ecx
        jne public_6221c44
        pop esi
        public_6221c57 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6221c30)
    }
}

#undef public_6221c44
#undef public_6221c4e
#undef public_6221c52
#undef public_6221c57
