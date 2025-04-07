#include "RendComp-PCH.h"


#define public_6c2b376 _public_6c2b376
#define public_6c2b394 _public_6c2b394
#define public_6c2b39e _public_6c2b39e
#define public_6c2b3ac _public_6c2b3ac
#define public_6c2b3b4 _public_6c2b3b4

PROC_DECLARE(0x6c2b350, internal_6c2b350, public_6c2b350);
extern "C" NAKED register_t __cdecl internal_6c2b350()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6c2b3b4
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push eax
        call dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov esi, dword ptr ds : [edx]
        xor edi, edi
        test eax, eax
        jbe public_6c2b3ac
        push ebx
        public_6c2b376 : nop
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+edi*4]
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [eax]
        mov ecx, edx
        test ecx, ecx
        mov dword ptr ds : [eax], edx
        je public_6c2b394
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6c2b394 : nop
        test ebx, ebx
        je public_6c2b39e
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+8]
        public_6c2b39e : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [esi]
        inc edi
        cmp edi, eax
        jb public_6c2b376
        pop ebx
        public_6c2b3ac : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 4
        public_6c2b3b4 : nop
        or eax, 0xFFFFFFFF
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6c2b350)
    }
}

#undef public_6c2b376
#undef public_6c2b394
#undef public_6c2b39e
#undef public_6c2b3ac
#undef public_6c2b3b4
