#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66122d0);

#define public_66122df _public_66122df
#define public_66122f1 _public_66122f1
#define public_66122f9 _public_66122f9

PROC_DECLARE(0x66122d0, internal_66122d0, public_66122d0);
extern "C" NAKED register_t __cdecl internal_66122d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        push edi
        mov edi, dword ptr ds : [ecx+0x10]
        xor ebx, ebx
        cmp esi, edi
        jae public_66122f1
        public_66122df : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        test al, 2
        jne public_66122f9
        add esi, 4
        cmp esi, edi
        jb public_66122df
        public_66122f1 : nop
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret 8
        public_66122f9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x30]
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66122d0)
    }
}

#undef public_66122df
#undef public_66122f1
#undef public_66122f9
