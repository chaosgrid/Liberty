#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecaa70);

#define public_6ecaa80 _public_6ecaa80
#define public_6ecaaa0 _public_6ecaaa0

PROC_DECLARE(0x6ecaa70, internal_6ecaa70, public_6ecaa70);
extern "C" NAKED register_t __cdecl internal_6ecaa70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp edx, esi
        je public_6ecaaa0
        push ebx
        push edi
        nop 
        public_6ecaa80 : nop
        mov eax, edx
        mov edi, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [edi], ebx
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], eax
        mov edi, dword ptr ds : [ecx+8]
        dec edi
        cmp edx, esi
        mov dword ptr ds : [ecx+8], edi
        jne public_6ecaa80
        pop edi
        pop ebx
        public_6ecaaa0 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ecaa70)
    }
}

#undef public_6ecaa80
#undef public_6ecaaa0
