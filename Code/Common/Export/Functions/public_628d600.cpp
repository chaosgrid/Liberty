#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628d618 _public_628d618
#define public_628d636 _public_628d636
#define public_628d63e _public_628d63e
#define public_628d645 _public_628d645

PROC_DECLARE(0x628d600, internal_628d600, public_628d600);
extern "C" NAKED register_t __cdecl internal_628d600()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], cl
        mov eax, edi
        jge public_628d618
        xor eax, eax
        public_628d618 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [esi+4], eax
        jbe public_628d645
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, edi
        push ebx
        public_628d636 : nop
        test eax, eax
        je public_628d63e
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ebx
        public_628d63e : nop
        add eax, 4
        dec ecx
        jne public_628d636
        pop ebx
        public_628d645 : nop
        mov eax, dword ptr ds : [esi+4]
        lea eax, ds:[eax+edi*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop edi
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x628d600)
    }
}

#undef public_628d618
#undef public_628d636
#undef public_628d63e
#undef public_628d645
