#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b78226 _public_6b78226
#define public_6b78256 _public_6b78256
#define public_6b7826c _public_6b7826c
#define public_6b78270 _public_6b78270
#define public_6b7827b _public_6b7827b
#define public_6b78295 _public_6b78295

PROC_DECLARE(0x6b78210, internal_6b78210, public_6b78210);
extern "C" NAKED register_t __cdecl internal_6b78210()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edi+0x114]
        test eax, eax
        jbe public_6b78226
        dec eax
        mov dword ptr ds : [edi+0x114], eax
        public_6b78226 : nop
        mov eax, dword ptr ds : [edi+0x114]
        test eax, eax
        jne public_6b78295
        mov dword ptr ds : [edi+0x114], 1
        mov ecx, dword ptr ds : [edi+0x10C]
        test ecx, ecx
        je public_6b7827b
        mov eax, dword ptr ds : [ecx-4]
        push ebp
        lea ebp, ds:[ecx-4]
        push esi
        lea esi, ds:[ecx+eax*4]
        dec eax
        js public_6b78270
        push ebx
        lea ebx, ds:[eax+1]
        public_6b78256 : nop
        mov eax, dword ptr ds : [esi-4]
        sub esi, 4
        test eax, eax
        je public_6b7826c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6b7826c : nop
        dec ebx
        jne public_6b78256
        pop ebx
        public_6b78270 : nop
        push ebp
        call public_6b782a0
        add esp, 4
        pop esi
        pop ebp
        public_6b7827b : nop
        push edi
        mov dword ptr ds : [edi+0x110], 0
        mov byte ptr ds : [edi+4], 0
        call dword ptr ds : [public_6b79070]
        add esp, 4
        xor eax, eax
        public_6b78295 : nop
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6b78210)
    }
}

#undef public_6b78226
#undef public_6b78256
#undef public_6b7826c
#undef public_6b78270
#undef public_6b7827b
#undef public_6b78295
