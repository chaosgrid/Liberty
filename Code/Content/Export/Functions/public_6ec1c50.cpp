#include "Content-PCH.h"


#define public_6ec1c75 _public_6ec1c75
#define public_6ec1c98 _public_6ec1c98
#define public_6ec1cae _public_6ec1cae
#define public_6ec1cb7 _public_6ec1cb7

PROC_DECLARE(0x6ec1c50, internal_6ec1c50, public_6ec1c50);
extern "C" NAKED register_t __cdecl internal_6ec1c50()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor cl, cl
        test ebx, ebx
        je public_6ec1cb7
        mov eax, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+0x2F4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ec1cb7
        mov ebp, dword ptr ds : [public_6fb3294]
        public_6ec1c75 : nop
        mov eax, dword ptr ds : [esi+0x90]
        test eax, eax
        je public_6ec1c98
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [eax+0x40]
        jne public_6ec1c98
        lea edx, ds:[edi+0x10]
        push edx
        lea eax, ds:[esi+0xC]
        push eax
        call ebp
        add esp, 8
        test eax, eax
        je public_6ec1cae
        public_6ec1c98 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+0x2F4]
        jne public_6ec1c75
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 8
        public_6ec1cae : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        public_6ec1cb7 : nop
        pop edi
        pop esi
        pop ebp
        mov al, cl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec1c50)
    }
}

#undef public_6ec1c75
#undef public_6ec1c98
#undef public_6ec1cae
#undef public_6ec1cb7
