#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb78a1 _public_6eb78a1
#define public_6eb78c8 _public_6eb78c8

PROC_DECLARE(0x6eb7890, internal_6eb7890, public_6eb7890);
extern "C" NAKED register_t __cdecl internal_6eb7890()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, ebx
        push edi
        mov edi, ecx
        je public_6eb78c8
        public_6eb78a1 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0xC]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0xC], ecx
        jne public_6eb78a1
        public_6eb78c8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb7890)
    }
}

#undef public_6eb78a1
#undef public_6eb78c8
