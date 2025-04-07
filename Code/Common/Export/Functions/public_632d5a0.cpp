#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632d5a0);

#define public_632d5d6 _public_632d5d6

PROC_DECLARE(0x632d5a0, internal_632d5a0, public_632d5a0);
extern "C" NAKED register_t __cdecl internal_632d5a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_632d5d6
        mov ecx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edx, ecx
        mov edi, dword ptr ds : [edx]
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov cl, byte ptr ds : [ecx+0x14]
        pop edi
        mov byte ptr ds : [eax+0x14], cl
        pop esi
        public_632d5d6 : nop
        ret 
        UNREACHABLE_TRAP(0x632d5a0)
    }
}

#undef public_632d5d6
