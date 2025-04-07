#include "EngBase-PCH.h"


#define public_66215f6 _public_66215f6
#define public_6621618 _public_6621618

PROC_DECLARE(0x66215d0, internal_66215d0, public_66215d0);
extern "C" NAKED register_t __cdecl internal_66215d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push ecx
        push edx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x30]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_66215f6
        pop edi
        pop esi
        or eax, eax
        pop ebx
        ret 0x10
        public_66215f6 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edi
        push esi
        call dword ptr ds : [eax+0x5C]
        mov ebx, eax
        push edi
        cmp ebx, 0xFFFFFFFF
        push esi
        jne public_6621618
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x3C]
        pop edi
        or eax, ebx
        pop esi
        pop ebx
        ret 0x10
        public_6621618 : nop
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x3C]
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x66215d0)
    }
}

#undef public_66215f6
#undef public_6621618
