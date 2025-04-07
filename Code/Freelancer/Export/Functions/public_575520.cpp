#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_575520);

#define public_57553d _public_57553d
#define public_575551 _public_575551
#define public_575557 _public_575557
#define public_575560 _public_575560

PROC_DECLARE(0x575520, internal_575520, public_575520);
extern "C" NAKED register_t __cdecl internal_575520()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp ecx, edi
        je public_575560
        test ecx, ecx
        je public_575557
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_57553d
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_57553d : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_575551
        mov dword ptr ds : [ecx+4], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_575551 : nop
        mov dword ptr ds : [esi], 0
        public_575557 : nop
        test edi, edi
        mov dword ptr ds : [esi], edi
        je public_575560
        inc dword ptr ds : [edi+4]
        public_575560 : nop
        mov eax, dword ptr ds : [esi]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x575520)
    }
}

#undef public_57553d
#undef public_575551
#undef public_575557
#undef public_575560
