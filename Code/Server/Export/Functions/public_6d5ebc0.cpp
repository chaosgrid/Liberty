#include "Server-PCH.h"


#define public_6d5ec05 _public_6d5ec05
#define public_6d5ec0f _public_6d5ec0f
#define public_6d5ec11 _public_6d5ec11

PROC_DECLARE(0x6d5ebc0, internal_6d5ebc0, public_6d5ebc0);
extern "C" NAKED register_t __cdecl internal_6d5ebc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        push ecx
        xor ebx, ebx
        call dword ptr ds : [public_6d643dc]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6d5ec0f
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+4]
        or ecx, 0xFFFFFFFF
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, ecx
        pop edi
        ja public_6d5ec11
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0xC]
        public_6d5ec05 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_6d5ec05
        public_6d5ec0f : nop
        mov eax, ebx
        public_6d5ec11 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5ebc0)
    }
}

#undef public_6d5ec05
#undef public_6d5ec0f
#undef public_6d5ec11
