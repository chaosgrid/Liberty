#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a9f0);

#define public_4abdc0 _public_4abdc0
#define public_4abdda _public_4abdda
#define public_4abde1 _public_4abde1
#define public_4abde8 _public_4abde8

PROC_DECLARE(0x4abdb0, internal_4abdb0, public_4abdb0);
extern "C" NAKED register_t __cdecl internal_4abdb0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        call public_45a9f0
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        je public_4abde8
        public_4abdc0 : nop
        test byte ptr ds : [esi+0x6C], 2
        je public_4abde1
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        cmp eax, dword ptr ds : [edi+0x4E4]
        jne public_4abdda
        call public_45a9f0
        public_4abdda : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        public_4abde1 : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_4abdc0
        public_4abde8 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4abdb0)
    }
}

#undef public_4abdc0
#undef public_4abdda
#undef public_4abde1
#undef public_4abde8
