#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdd430);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bdd442 _public_6bdd442
#define public_6bdd47e _public_6bdd47e
#define public_6bdd492 _public_6bdd492
#define public_6bdd49d _public_6bdd49d
#define public_6bdd4a7 _public_6bdd4a7

PROC_DECLARE(0x6bdd430, internal_6bdd430, public_6bdd430);
extern "C" NAKED register_t __cdecl internal_6bdd430()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x2C]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6bdd4a7
        push ebp
        push esi
        push edi
        public_6bdd442 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        je public_6bdd49d
        push 8
        call public_6c09d26
        mov edi, eax
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6c09d26
        add esp, 8
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6bdd47e
        mov ebp, eax
        public_6bdd47e : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6bdd492
        mov dword ptr ds : [eax], edi
        public_6bdd492 : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6bdd49d : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [ecx+0x2C]
        jne public_6bdd442
        pop edi
        pop esi
        pop ebp
        public_6bdd4a7 : nop
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6bdd430)
    }
}

#undef public_6bdd442
#undef public_6bdd47e
#undef public_6bdd492
#undef public_6bdd49d
#undef public_6bdd4a7
