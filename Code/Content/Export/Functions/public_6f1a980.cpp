#include "Content-PCH.h"


#define public_6f1a9a5 _public_6f1a9a5

PROC_DECLARE(0x6f1a980, internal_6f1a980, public_6f1a980);
extern "C" NAKED register_t __cdecl internal_6f1a980()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov ebx, eax
        call dword ptr ds : [edx+0x10]
        cmp eax, ebx
        je public_6f1a9a5
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_6f1a9a5 : nop
        add edi, 0x20
        push edi
        lea ecx, ds:[esi+0x20]
        call dword ptr ds : [public_6fb316c]
        pop edi
        test al, al
        pop esi
        setne al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f1a980)
    }
}

#undef public_6f1a9a5
