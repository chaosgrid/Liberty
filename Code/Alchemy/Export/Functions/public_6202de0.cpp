#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202de0);

#define public_6202df7 _public_6202df7
#define public_6202e02 _public_6202e02
#define public_6202e0f _public_6202e0f
#define public_6202e19 _public_6202e19
#define public_6202e25 _public_6202e25
#define public_6202e2e _public_6202e2e

PROC_DECLARE(0x6202de0, internal_6202de0, public_6202de0);
extern "C" NAKED register_t __cdecl internal_6202de0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x15]
        test al, al
        jne public_6202e0f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6202e02
        public_6202df7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6202df7
        public_6202e02 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6202e0f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6202e25
        public_6202e19 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6202e19
        public_6202e25 : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6202e2e
        mov dword ptr ds : [ecx], eax
        public_6202e2e : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6202de0)
    }
}

#undef public_6202df7
#undef public_6202e02
#undef public_6202e0f
#undef public_6202e19
#undef public_6202e25
#undef public_6202e2e
