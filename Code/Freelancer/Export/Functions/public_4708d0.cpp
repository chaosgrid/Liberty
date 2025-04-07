#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4708d0);

#define public_4708e5 _public_4708e5
#define public_470909 _public_470909

PROC_DECLARE(0x4708d0, internal_4708d0, public_4708d0);
extern "C" NAKED register_t __cdecl internal_4708d0()
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
        je public_470909
        push ebx
        push ebp
        public_4708e5 : nop
        mov eax, edx
        mov ebp, dword ptr ds : [eax]
        mov ebx, esi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        add edx, 0xC
        add esi, 0xC
        cmp edx, edi
        mov dword ptr ds : [ebx+8], eax
        jne public_4708e5
        mov eax, dword ptr ss : [esp+0x14]
        pop ebp
        pop ebx
        public_470909 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4708d0)
    }
}

#undef public_4708e5
#undef public_470909
