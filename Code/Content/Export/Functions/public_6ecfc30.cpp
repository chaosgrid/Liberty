#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfc30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ecfc4d _public_6ecfc4d
#define public_6ecfc67 _public_6ecfc67

PROC_DECLARE(0x6ecfc30, internal_6ecfc30, public_6ecfc30);
extern "C" NAKED register_t __cdecl internal_6ecfc30()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6ecfc4d
        mov edi, eax
        public_6ecfc4d : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6ecfc67
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        public_6ecfc67 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ecfc30)
    }
}

#undef public_6ecfc4d
#undef public_6ecfc67
