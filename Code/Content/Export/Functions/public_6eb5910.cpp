#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5910);

#define public_6eb5924 _public_6eb5924
#define public_6eb5933 _public_6eb5933

PROC_DECLARE(0x6eb5910, internal_6eb5910, public_6eb5910);
extern "C" NAKED register_t __cdecl internal_6eb5910()
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
        je public_6eb5933
        push ebx
        public_6eb5924 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [esi], ebx
        add edx, 4
        add esi, 4
        cmp edx, edi
        jne public_6eb5924
        pop ebx
        public_6eb5933 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6eb5910)
    }
}

#undef public_6eb5924
#undef public_6eb5933
