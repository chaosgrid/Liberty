#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6332050);
CLANG_FORWARD_PROC_SYMBOL(public_6332140);

#define public_633206e _public_633206e
#define public_633208b _public_633208b

PROC_DECLARE(0x6332050, internal_6332050, public_6332050);
extern "C" NAKED register_t __cdecl internal_6332050()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC4
        mov ebx, ecx
        call public_6332140
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_633206e
        mov edi, eax
        public_633206e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_633208b
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, 0x2F
        rep movsd
        public_633208b : nop
        inc dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6332050)
    }
}

#undef public_633206e
#undef public_633208b
