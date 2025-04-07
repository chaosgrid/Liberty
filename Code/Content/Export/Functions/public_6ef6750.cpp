#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6750);

#define public_6ef6764 _public_6ef6764
#define public_6ef6779 _public_6ef6779

PROC_DECLARE(0x6ef6750, internal_6ef6750, public_6ef6750);
extern "C" NAKED register_t __cdecl internal_6ef6750()
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
        je public_6ef6779
        push ebx
        public_6ef6764 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], ebx
        add edx, 8
        add esi, 8
        cmp edx, edi
        jne public_6ef6764
        pop ebx
        public_6ef6779 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ef6750)
    }
}

#undef public_6ef6764
#undef public_6ef6779
