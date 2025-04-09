#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_420f70);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);

#define public_59ef00 _public_59ef00
#define public_59ef13 _public_59ef13

PROC_DECLARE(0x59eee0, internal_59eee0, public_59eee0);
extern "C" NAKED register_t __cdecl internal_59eee0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, 0xFFFFFFFF
        je public_59ef00
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        public_59ef00 : nop
        mov ecx, esi
        call public_420d60
        test al, al
        je public_59ef13
        mov ecx, esi
        pop esi
        jmp public_420f70
        public_59ef13 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x59eee0)
    }
}

#undef public_59ef00
#undef public_59ef13
