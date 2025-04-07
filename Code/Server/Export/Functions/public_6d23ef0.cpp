#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d23f07 _public_6d23f07
#define public_6d23f1e _public_6d23f1e
#define public_6d23f39 _public_6d23f39
#define public_6d23f53 _public_6d23f53
#define public_6d23f64 _public_6d23f64

PROC_DECLARE(0x6d23ef0, internal_6d23ef0, public_6d23ef0);
extern "C" NAKED register_t __cdecl internal_6d23ef0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d23f07
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0xC
        cmp eax, ecx
        jbe public_6d23f39
        public_6d23f07 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xC
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+4], 0xC
        jae public_6d23f1e
        lea eax, ss:[esp+4]
        public_6d23f1e : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d23f39 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+esi+8]
        add ecx, 0xC
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        pop esi
        jne public_6d23f53
        mov ecx, eax
        public_6d23f53 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_6d23f64
        mov dword ptr ds : [eax+4], ecx
        pop ecx
        ret 8
        public_6d23f64 : nop
        mov dword ptr ds : [eax+4], eax
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d23ef0)
    }
}

#undef public_6d23f07
#undef public_6d23f1e
#undef public_6d23f39
#undef public_6d23f53
#undef public_6d23f64
