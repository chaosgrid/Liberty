#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c30200);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c30212 _public_6c30212
#define public_6c30233 _public_6c30233
#define public_6c30245 _public_6c30245

PROC_DECLARE(0x6c30200, internal_6c30200, public_6c30200);
extern "C" NAKED register_t __cdecl internal_6c30200()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_6c30245
        public_6c30212 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6c30200
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        mov esi, dword ptr ds : [esi]
        je public_6c30233
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x10], 0
        public_6c30233 : nop
        push edi
        call public_6c34ea0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6c30212
        public_6c30245 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6c30200)
    }
}

#undef public_6c30212
#undef public_6c30233
#undef public_6c30245
