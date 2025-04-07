#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4a2f91 _public_4a2f91
#define public_4a2fb8 _public_4a2fb8

PROC_DECLARE(0x4a2f80, internal_4a2f80, public_4a2f80);
extern "C" NAKED register_t __cdecl internal_4a2f80()
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
        je public_4a2fb8
        public_4a2f91 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_4a2f91
        public_4a2fb8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4a2f80)
    }
}

#undef public_4a2f91
#undef public_4a2fb8
