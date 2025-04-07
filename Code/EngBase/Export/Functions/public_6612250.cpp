#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612250);

#define public_6612266 _public_6612266
#define public_661227f _public_661227f
#define public_6612291 _public_6612291
#define public_6612293 _public_6612293

PROC_DECLARE(0x6612250, internal_6612250, public_6612250);
extern "C" NAKED register_t __cdecl internal_6612250()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        push edi
        mov edi, dword ptr ds : [ecx+0x10]
        mov eax, 1
        cmp esi, edi
        jae public_6612293
        mov ebx, dword ptr ss : [esp+0x10]
        public_6612266 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        cmp eax, 8
        je public_661227f
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push ebx
        call dword ptr ds : [ecx+0x3C]
        test al, al
        jne public_6612291
        public_661227f : nop
        add esi, 4
        cmp esi, edi
        jb public_6612266
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 4
        public_6612291 : nop
        xor eax, eax
        public_6612293 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6612250)
    }
}

#undef public_6612266
#undef public_661227f
#undef public_6612291
#undef public_6612293
