#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7820);
CLANG_FORWARD_PROC_SYMBOL(public_6f93330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f93340 _public_6f93340
#define public_6f93351 _public_6f93351

PROC_DECLARE(0x6f93330, internal_6f93330, public_6f93330);
extern "C" NAKED register_t __cdecl internal_6f93330()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6f93351
        nop 
        public_6f93340 : nop
        mov ecx, esi
        call public_6ec7820
        add esi, 0x108
        cmp esi, ebx
        jne public_6f93340
        public_6f93351 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f93330)
    }
}

#undef public_6f93340
#undef public_6f93351
