#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_501f80);

#define public_501f95 _public_501f95
#define public_501fbf _public_501fbf

PROC_DECLARE(0x501f80, internal_501f80, public_501f80);
extern "C" NAKED register_t __cdecl internal_501f80()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        cmp edx, edi
        mov esi, eax
        je public_501fbf
        push ebx
        push ebp
        public_501f95 : nop
        mov eax, edx
        mov ebp, dword ptr ds : [eax]
        mov ebx, esi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], ebp
        mov eax, dword ptr ds : [eax+0xC]
        add edx, 0x10
        add esi, 0x10
        cmp edx, edi
        mov dword ptr ds : [ebx+0xC], eax
        jne public_501f95
        mov eax, dword ptr ss : [esp+0x14]
        pop ebp
        pop ebx
        public_501fbf : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x501f80)
    }
}

#undef public_501f95
#undef public_501fbf
