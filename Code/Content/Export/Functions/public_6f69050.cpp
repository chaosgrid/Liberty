#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f69050);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6906e _public_6f6906e
#define public_6f6908b _public_6f6908b

PROC_DECLARE(0x6f69050, internal_6f69050, public_6f69050);
extern "C" NAKED register_t __cdecl internal_6f69050()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x30
        mov ebx, ecx
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f6906e
        mov edi, eax
        public_6f6906e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6f6908b
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, 0xA
        rep movsd
        public_6f6908b : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f69050)
    }
}

#undef public_6f6906e
#undef public_6f6908b
