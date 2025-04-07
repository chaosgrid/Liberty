#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23d90);

#define public_6f23da5 _public_6f23da5
#define public_6f23dcf _public_6f23dcf

PROC_DECLARE(0x6f23d90, internal_6f23d90, public_6f23d90);
extern "C" NAKED register_t __cdecl internal_6f23d90()
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
        je public_6f23dcf
        push ebx
        push ebp
        public_6f23da5 : nop
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
        jne public_6f23da5
        mov eax, dword ptr ss : [esp+0x14]
        pop ebp
        pop ebx
        public_6f23dcf : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f23d90)
    }
}

#undef public_6f23da5
#undef public_6f23dcf
