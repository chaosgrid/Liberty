#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401cb0);

#define public_401d04 _public_401d04
#define public_401d1e _public_401d1e
#define public_401d27 _public_401d27
#define public_401d2e _public_401d2e

PROC_DECLARE(0x401cb0, internal_401cb0, public_401cb0);
extern "C" NAKED register_t __cdecl internal_401cb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x9AC]
        test al, al
        je public_401d2e
        mov ecx, dword ptr ds : [esi+0x76C]
        test ecx, ecx
        je public_401d2e
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push edi
        push eax
        push edx
        call dword ptr ds : [public_41b898]
        mov esi, dword ptr ds : [esi+0x76C]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea eax, ds:[ecx+esi]
        mov cl, byte ptr ds : [eax+4]
        xor edi, edi
        test cl, 6
        jne public_401d04
        mov eax, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        cmp eax, 0xFFFFFFFF
        jne public_401d04
        mov edi, 4
        public_401d04 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, esi
        test edi, edi
        je public_401d27
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+0x28]
        or eax, edi
        test edx, edx
        jne public_401d1e
        or eax, 4
        public_401d1e : nop
        push 0
        push eax
        call dword ptr ds : [public_41b854]
        public_401d27 : nop
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_401d2e : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x401cb0)
    }
}

#undef public_401d04
#undef public_401d1e
#undef public_401d27
#undef public_401d2e
