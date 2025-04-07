#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f93380 _public_6f93380
#define public_6f93392 _public_6f93392

PROC_DECLARE(0x6f93370, internal_6f93370, public_6f93370);
extern "C" NAKED register_t __cdecl internal_6f93370()
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
        je public_6f93392
        nop 
        public_6f93380 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax]
        add esi, 0xF0
        cmp esi, ebx
        jne public_6f93380
        public_6f93392 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi+8], 0
        mov dword ptr ds : [edi+0xC], 0
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f93370)
    }
}

#undef public_6f93380
#undef public_6f93392
