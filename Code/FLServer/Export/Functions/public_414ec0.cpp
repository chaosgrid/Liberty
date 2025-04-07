#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414ec0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_414eee _public_414eee

PROC_DECLARE(0x414ec0, internal_414ec0, public_414ec0);
extern "C" NAKED register_t __cdecl internal_414ec0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_414eee
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], 0
        public_414eee : nop
        push esi
        call public_418978
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x414ec0)
    }
}

#undef public_414eee
