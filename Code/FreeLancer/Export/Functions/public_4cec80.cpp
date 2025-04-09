#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cec80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4cec9e _public_4cec9e
#define public_4cecbb _public_4cecbb

PROC_DECLARE(0x4cec80, internal_4cec80, public_4cec80);
extern "C" NAKED register_t __cdecl internal_4cec80()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x44
        mov ebx, ecx
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_4cec9e
        mov edi, eax
        public_4cec9e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_4cecbb
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, 0xF
        rep movsd
        public_4cecbb : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4cec80)
    }
}

#undef public_4cec9e
#undef public_4cecbb
