#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63505a0);

#define public_63505c7 _public_63505c7
#define public_63505ca _public_63505ca
#define public_63505d8 _public_63505d8

PROC_DECLARE(0x63505a0, internal_63505a0, public_63505a0);
extern "C" NAKED register_t __cdecl internal_63505a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+esi*4]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [eax+edi*4]
        mov dword ptr ds : [eax+esi*4], ebx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+edi*4], edx
        cmp dword ptr ds : [edx+0xC], esi
        jne public_63505c7
        mov dword ptr ds : [edx+0xC], edi
        jmp public_63505ca
        public_63505c7 : nop
        mov dword ptr ds : [edx+0x10], edi
        public_63505ca : nop
        cmp dword ptr ds : [ebx+0xC], edi
        jne public_63505d8
        pop edi
        mov dword ptr ds : [ebx+0xC], esi
        pop esi
        pop ebx
        ret 8
        public_63505d8 : nop
        pop edi
        mov dword ptr ds : [ebx+0x10], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x63505a0)
    }
}

#undef public_63505c7
#undef public_63505ca
#undef public_63505d8
