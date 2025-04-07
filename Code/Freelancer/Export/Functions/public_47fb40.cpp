#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47fb40);

#define public_47fb70 _public_47fb70
#define public_47fb8f _public_47fb8f
#define public_47fb95 _public_47fb95
#define public_47fb9e _public_47fb9e

PROC_DECLARE(0x47fb40, internal_47fb40, public_47fb40);
extern "C" NAKED register_t __cdecl internal_47fb40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ds : [public_5c603c]
        push ebp
        push esi
        push edi
        push eax
        mov esi, ecx
        call ebx
        add esp, 4
        test eax, eax
        je public_47fb95
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        mov edi, dword ptr ds : [esi+0x350]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov ebp, eax
        je public_47fb95
        nop 
        public_47fb70 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_47fb8f
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        cmp eax, ebp
        jne public_47fb8f
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        jne public_47fb9e
        public_47fb8f : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_47fb70
        public_47fb95 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_47fb9e : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x47fb40)
    }
}

#undef public_47fb70
#undef public_47fb8f
#undef public_47fb95
#undef public_47fb9e
