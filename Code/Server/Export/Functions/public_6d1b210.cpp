#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b210);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d1b222 _public_6d1b222
#define public_6d1b249 _public_6d1b249
#define public_6d1b25e _public_6d1b25e

PROC_DECLARE(0x6d1b210, internal_6d1b210, public_6d1b210);
extern "C" NAKED register_t __cdecl internal_6d1b210()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, ebp
        mov ebx, ecx
        je public_6d1b25e
        push esi
        public_6d1b222 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d1b249
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], 0
        public_6d1b249 : nop
        push esi
        call public_6d5ffb0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6d1b222
        pop esi
        public_6d1b25e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d1b210)
    }
}

#undef public_6d1b222
#undef public_6d1b249
#undef public_6d1b25e
