#include "FLMaterials-PCH.h"


#define public_66f8c1f _public_66f8c1f
#define public_66f8c3f _public_66f8c3f

PROC_DECLARE(0x66f8bf0, internal_66f8bf0, public_66f8bf0);
extern "C" NAKED register_t __cdecl internal_66f8bf0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x60]
        mov ecx, dword ptr ds : [esi]
        push 0
        push esi
        mov byte ptr ds : [esi+0x71], 1
        call dword ptr ds : [ecx+0x20]
        mov edi, eax
        test edi, edi
        jl public_66f8c1f
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x110]
        mov edi, eax
        test edi, edi
        public_66f8c1f : nop
        setge al
        test al, al
        mov byte ptr ds : [esi+0x71], al
        jne public_66f8c3f
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov edi, eax
        public_66f8c3f : nop
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x24]
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x66f8bf0)
    }
}

#undef public_66f8c1f
#undef public_66f8c3f
