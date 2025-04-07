#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be2460);

#define public_6be2474 _public_6be2474
#define public_6be247e _public_6be247e
#define public_6be2482 _public_6be2482
#define public_6be2487 _public_6be2487

PROC_DECLARE(0x6be2460, internal_6be2460, public_6be2460);
extern "C" NAKED register_t __cdecl internal_6be2460()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6be2487
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6be2474 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_6be247e
        mov edx, dword ptr ds : [edx+8]
        jmp public_6be2482
        public_6be247e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6be2482 : nop
        cmp edx, ecx
        jne public_6be2474
        pop esi
        public_6be2487 : nop
        ret 4
        UNREACHABLE_TRAP(0x6be2460)
    }
}

#undef public_6be2474
#undef public_6be247e
#undef public_6be2482
#undef public_6be2487
