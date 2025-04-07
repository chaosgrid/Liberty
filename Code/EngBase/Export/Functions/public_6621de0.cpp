#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6621f50);

#define public_6621df5 _public_6621df5
#define public_6621e06 _public_6621e06
#define public_6621e0f _public_6621e0f
#define public_6621e2f _public_6621e2f
#define public_6621e3c _public_6621e3c
#define public_6621e44 _public_6621e44
#define public_6621e4e _public_6621e4e
#define public_6621e55 _public_6621e55
#define public_6621e59 _public_6621e59

PROC_DECLARE(0x6621de0, internal_6621de0, public_6621de0);
extern "C" NAKED register_t __cdecl internal_6621de0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x58]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6621e06
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        public_6621df5 : nop
        mov eax, dword ptr ds : [esi+0x38]
        push ebx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x30]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6621df5
        pop ebx
        public_6621e06 : nop
        mov edi, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6621e59
        public_6621e0f : nop
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, ebp
        push edx
        call public_6621f50
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6621e3c
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6621e55
        public_6621e2f : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6621e2f
        jmp public_6621e55
        public_6621e3c : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6621e4e
        public_6621e44 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6621e44
        public_6621e4e : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6621e55
        mov esi, eax
        public_6621e55 : nop
        cmp esi, edi
        jne public_6621e0f
        public_6621e59 : nop
        pop edi
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6621de0)
    }
}

#undef public_6621df5
#undef public_6621e06
#undef public_6621e0f
#undef public_6621e2f
#undef public_6621e3c
#undef public_6621e44
#undef public_6621e4e
#undef public_6621e55
#undef public_6621e59
