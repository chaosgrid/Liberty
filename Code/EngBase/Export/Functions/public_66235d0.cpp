#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66235d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_66235ee _public_66235ee
#define public_662360b _public_662360b

PROC_DECLARE(0x66235d0, internal_66235d0, public_66235d0);
extern "C" NAKED register_t __cdecl internal_66235d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push 0x3C
        mov ebx, ecx
        mov edi, dword ptr ds : [esi+4]
        call public_66281dc
        add esp, 4
        mov dword ptr ds : [eax], esi
        test edi, edi
        jne public_66235ee
        mov edi, eax
        public_66235ee : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_662360b
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, 0xD
        rep movsd
        public_662360b : nop
        mov ecx, dword ptr ds : [ebx+8]
        pop edi
        inc ecx
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov ecx, dword ptr ss : [esp+8]
        pop ebx
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        ret 0xC
        UNREACHABLE_TRAP(0x66235d0)
    }
}

#undef public_66235ee
#undef public_662360b
