#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c7e0);

#define public_6cfb2cf _public_6cfb2cf
#define public_6cfb2d1 _public_6cfb2d1

PROC_DECLARE(0x6cfb260, internal_6cfb260, public_6cfb260);
extern "C" NAKED register_t __cdecl internal_6cfb260()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        mov eax, 0xFFFFFFFC
        je public_6cfb2d1
        cmp byte ptr ds : [edi], 0
        je public_6cfb2d1
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        je public_6cfb2d1
        push ecx
        mov ebx, 0xFFFFFFFE
        call public_6d00280
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6cfb2cf
        push edi
        mov ebx, 0xFFFFFFFD
        call dword ptr ds : [public_6d643b4]
        add esp, 4
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call public_6d0c7e0
        test eax, eax
        je public_6cfb2cf
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        xor esi, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [ecx], eax
        mov eax, esi
        pop esi
        pop ebx
        ret 
        public_6cfb2cf : nop
        mov eax, ebx
        public_6cfb2d1 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6cfb260)
    }
}

#undef public_6cfb2cf
#undef public_6cfb2d1
