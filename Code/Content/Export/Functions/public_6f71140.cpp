#include "Content-PCH.h"


#define public_6f71186 _public_6f71186
#define public_6f711a7 _public_6f711a7
#define public_6f711b8 _public_6f711b8

PROC_DECLARE(0x6f71140, internal_6f71140, public_6f71140);
extern "C" NAKED register_t __cdecl internal_6f71140()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [eax], 2
        jne public_6f711b8
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jge public_6f711b8
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 1
        jne public_6f711b8
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov al, byte ptr ds : [edi+0x24]
        test al, al
        je public_6f71186
        push 4
        mov ecx, edi
        call dword ptr ds : [public_6fb3120]
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_6f71186 : nop
        fld dword ptr ds : [edi+0x28]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6f711a7
        push 3
        mov ecx, edi
        call dword ptr ds : [public_6fb3120]
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_6f711a7 : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3120]
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_6f711b8 : nop
        pop edi
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f71140)
    }
}

#undef public_6f71186
#undef public_6f711a7
#undef public_6f711b8
