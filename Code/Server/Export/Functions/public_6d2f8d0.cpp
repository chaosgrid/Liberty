#include "Server-PCH.h"


#define public_6d2f8f1 _public_6d2f8f1
#define public_6d2f8f3 _public_6d2f8f3
#define public_6d2f8fc _public_6d2f8fc
#define public_6d2f908 _public_6d2f908

PROC_DECLARE(0x6d2f8d0, internal_6d2f8d0, public_6d2f8d0);
extern "C" NAKED register_t __cdecl internal_6d2f8d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push esi
        cmp dword ptr ds : [eax+0xC], edx
        jne public_6d2f908
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d2f8fc
        mov esi, dword ptr ds : [ecx]
        push edx
        push eax
        call dword ptr ds : [esi+4]
        movzx eax, al
        test al, al
        public_6d2f8f1 : nop
        je public_6d2f908
        public_6d2f8f3 : nop
        mov eax, 1
        pop esi
        ret 8
        public_6d2f8fc : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d2f8f3
        cmp dword ptr ds : [eax+8], edx
        jmp public_6d2f8f1
        public_6d2f908 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d2f8d0)
    }
}

#undef public_6d2f8f1
#undef public_6d2f8f3
#undef public_6d2f8fc
#undef public_6d2f908
