#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e640);

#define public_46e654 _public_46e654
#define public_46e65f _public_46e65f
#define public_46e662 _public_46e662
#define public_46e667 _public_46e667

PROC_DECLARE(0x46e640, internal_46e640, public_46e640);
extern "C" NAKED register_t __cdecl internal_46e640()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_46e667
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_46e654 : nop
        cmp esi, dword ptr ds : [eax+0xC]
        jbe public_46e65f
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        jmp public_46e662
        public_46e65f : nop
        mov eax, dword ptr ds : [eax+8]
        public_46e662 : nop
        cmp eax, ecx
        jne public_46e654
        pop esi
        public_46e667 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x46e640)
    }
}

#undef public_46e654
#undef public_46e65f
#undef public_46e662
#undef public_46e667
