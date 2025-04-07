#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4323f0);

#define public_432407 _public_432407
#define public_432412 _public_432412
#define public_43241f _public_43241f
#define public_432430 _public_432430
#define public_43243c _public_43243c
#define public_432445 _public_432445

PROC_DECLARE(0x4323f0, internal_4323f0, public_4323f0);
extern "C" NAKED register_t __cdecl internal_4323f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x25]
        test al, al
        jne public_43241f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_432412
        public_432407 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_432407
        public_432412 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_43241f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_43243c
        lea esp, ss:[esp]
        public_432430 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_432430
        public_43243c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_432445
        mov dword ptr ds : [ecx], eax
        public_432445 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4323f0)
    }
}

#undef public_432407
#undef public_432412
#undef public_43241f
#undef public_432430
#undef public_43243c
#undef public_432445
