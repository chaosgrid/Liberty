#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44d240);

#define public_44d268 _public_44d268
#define public_44d274 _public_44d274
#define public_44d279 _public_44d279
#define public_44d288 _public_44d288

PROC_DECLARE(0x44d240, internal_44d240, public_44d240);
extern "C" NAKED register_t __cdecl internal_44d240()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        cmp ebp, 0xFFFFFFFF
        push edi
        mov ebx, ecx
        je public_44d288
        cmp dword ptr ss : [esp+0x14], 3
        jne public_44d288
        mov eax, dword ptr ds : [ebx+0x1334]
        xor edi, edi
        test eax, eax
        jle public_44d288
        push esi
        lea esi, ds:[ebx+0x1134]
        public_44d268 : nop
        mov ecx, dword ptr ds : [esi]
        cmp dword ptr ds : [ecx+4], ebp
        je public_44d274
        cmp dword ptr ds : [ecx+8], ebp
        jne public_44d279
        public_44d274 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_44d279 : nop
        mov eax, dword ptr ds : [ebx+0x1334]
        inc edi
        add esi, 4
        cmp edi, eax
        jl public_44d268
        pop esi
        public_44d288 : nop
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x44d240)
    }
}

#undef public_44d268
#undef public_44d274
#undef public_44d279
#undef public_44d288
