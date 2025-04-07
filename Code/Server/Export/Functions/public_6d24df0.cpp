#include "Server-PCH.h"


#define public_6d24e32 _public_6d24e32
#define public_6d24e4a _public_6d24e4a
#define public_6d24e55 _public_6d24e55

PROC_DECLARE(0x6d24df0, internal_6d24df0, public_6d24df0);
extern "C" NAKED register_t __cdecl internal_6d24df0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [ecx]
        push edi
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push ebx
        call dword ptr ds : [edx+4]
        test al, al
        jne public_6d24e55
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0xC]
        jne public_6d24e55
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d24e32
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        movzx eax, al
        pop ebx
        ret 8
        public_6d24e32 : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d24e4a
        mov ecx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [ebx+8], ecx
        jne public_6d24e4a
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        public_6d24e4a : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 8
        public_6d24e55 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d24df0)
    }
}

#undef public_6d24e32
#undef public_6d24e4a
#undef public_6d24e55
