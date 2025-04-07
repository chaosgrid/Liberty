#include "Server-PCH.h"


#define public_6d294df _public_6d294df
#define public_6d294f2 _public_6d294f2
#define public_6d294f4 _public_6d294f4
#define public_6d294fd _public_6d294fd
#define public_6d29509 _public_6d29509

PROC_DECLARE(0x6d294c0, internal_6d294c0, public_6d294c0);
extern "C" NAKED register_t __cdecl internal_6d294c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, edx
        je public_6d294df
        cmp word ptr ds : [edx], 0xA
        jne public_6d29509
        push edi
        lea edi, ds:[edx+2]
        cmp eax, edi
        pop edi
        jne public_6d29509
        public_6d294df : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d294fd
        mov eax, dword ptr ds : [ecx]
        push edx
        push esi
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d294f2 : nop
        je public_6d29509
        public_6d294f4 : nop
        mov eax, 1
        pop esi
        ret 8
        public_6d294fd : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6d294f4
        cmp dword ptr ds : [esi+8], edx
        jmp public_6d294f2
        public_6d29509 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d294c0)
    }
}

#undef public_6d294df
#undef public_6d294f2
#undef public_6d294f4
#undef public_6d294fd
#undef public_6d29509
