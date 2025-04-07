#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcce0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62fccfe _public_62fccfe
#define public_62fcd1e _public_62fcd1e

PROC_DECLARE(0x62fcce0, internal_62fcce0, public_62fcce0);
extern "C" NAKED register_t __cdecl internal_62fcce0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        mov ebx, ecx
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_62fccfe
        mov edi, eax
        public_62fccfe : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_62fcd1e
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], esi
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], edx
        public_62fcd1e : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62fcce0)
    }
}

#undef public_62fccfe
#undef public_62fcd1e
