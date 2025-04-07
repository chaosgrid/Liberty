#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb450);

#define public_6ecb47b _public_6ecb47b
#define public_6ecb498 _public_6ecb498

PROC_DECLARE(0x6ecb450, internal_6ecb450, public_6ecb450);
extern "C" NAKED register_t __cdecl internal_6ecb450()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6ed57f8]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [public_6ed57fc]
        mov eax, dword ptr ds : [edi]
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+4]
        add edx, eax
        add eax, 0xF8
        test esi, esi
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edx], ecx
        jne public_6ecb47b
        mov esi, edx
        public_6ecb47b : nop
        mov dword ptr ds : [edx+4], esi
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edx+4]
        lea edi, ds:[edx+8]
        test edi, edi
        mov dword ptr ds : [eax], edx
        je public_6ecb498
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, 0x3C
        rep movsd
        public_6ecb498 : nop
        inc dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ecb450)
    }
}

#undef public_6ecb47b
#undef public_6ecb498
