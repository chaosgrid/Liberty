#include "Server-PCH.h"


#define public_6d293b1 _public_6d293b1
#define public_6d293b3 _public_6d293b3
#define public_6d293bc _public_6d293bc
#define public_6d293c8 _public_6d293c8

PROC_DECLARE(0x6d29390, internal_6d29390, public_6d29390);
extern "C" NAKED register_t __cdecl internal_6d29390()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push esi
        cmp dword ptr ds : [eax+4], edx
        jne public_6d293c8
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d293bc
        mov esi, dword ptr ds : [ecx]
        push edx
        push eax
        call dword ptr ds : [esi+4]
        movzx eax, al
        test al, al
        public_6d293b1 : nop
        je public_6d293c8
        public_6d293b3 : nop
        mov eax, 1
        pop esi
        ret 8
        public_6d293bc : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d293b3
        cmp dword ptr ds : [eax+8], edx
        jmp public_6d293b1
        public_6d293c8 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d29390)
    }
}

#undef public_6d293b1
#undef public_6d293b3
#undef public_6d293bc
#undef public_6d293c8
