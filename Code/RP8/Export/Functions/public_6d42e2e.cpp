#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42e2e);

#define public_6d42e4d _public_6d42e4d
#define public_6d42e58 _public_6d42e58
#define public_6d42e71 _public_6d42e71

PROC_DECLARE(0x6d42e2e, internal_6d42e2e, public_6d42e2e);
extern "C" NAKED register_t __cdecl internal_6d42e2e()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp byte ptr ds : [eax+9], 0x10
        jne public_6d42e71
        movzx ecx, byte ptr ds : [eax+0xA]
        imul ecx, dword ptr ds : [eax]
        test ecx, ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, esi
        jbe public_6d42e58
        push edi
        mov edi, ecx
        public_6d42e4d : nop
        mov cl, byte ptr ds : [edx]
        inc edx
        inc edx
        mov byte ptr ds : [esi], cl
        inc esi
        dec edi
        jne public_6d42e4d
        pop edi
        public_6d42e58 : nop
        mov cl, byte ptr ds : [eax+0xA]
        mov dl, cl
        movzx ecx, cl
        shl dl, 3
        imul ecx, dword ptr ds : [eax]
        mov byte ptr ds : [eax+9], 8
        mov byte ptr ds : [eax+0xB], dl
        mov dword ptr ds : [eax+4], ecx
        pop esi
        public_6d42e71 : nop
        ret 
        UNREACHABLE_TRAP(0x6d42e2e)
    }
}

#undef public_6d42e4d
#undef public_6d42e58
#undef public_6d42e71
