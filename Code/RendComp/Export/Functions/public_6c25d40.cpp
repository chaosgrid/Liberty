#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25d40);

#define public_6c25d56 _public_6c25d56
#define public_6c25d7c _public_6c25d7c
#define public_6c25da8 _public_6c25da8
#define public_6c25dc8 _public_6c25dc8
#define public_6c25e05 _public_6c25e05

PROC_DECLARE(0x6c25d40, internal_6c25d40, public_6c25d40);
extern "C" NAKED register_t __cdecl internal_6c25d40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xA8]
        sub esp, 8
        test al, 1
        jne public_6c25d56
        or eax, 0xFFFFFFFF
        add esp, 8
        ret 4
        public_6c25d56 : nop
        test al, 2
        je public_6c25d7c
        mov eax, dword ptr ss : [esp+0xC]
        add ecx, 0x1B0
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        add esp, 8
        ret 4
        public_6c25d7c : nop
        lea eax, ds:[ecx+0x1B0]
        push edi
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], 0
        mov edi, dword ptr ds : [ecx+0x30]
        test edi, edi
        je public_6c25e05
        mov edx, dword ptr ds : [ecx+0x20]
        push esi
        xor esi, esi
        test edi, edi
        jbe public_6c25dc8
        public_6c25da8 : nop
        fld dword ptr ds : [eax]
        inc esi
        fadd dword ptr ds : [edx]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [edx+4]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [edx+8]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [ecx+0x30]
        cmp esi, edi
        jb public_6c25da8
        public_6c25dc8 : nop
        mov edx, dword ptr ds : [ecx+0x30]
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        pop esi
        fdivr dword ptr ds : [public_6c361ec]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx+0xA8]
        or edx, 8
        mov dword ptr ds : [ecx+0xA8], edx
        public_6c25e05 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        pop edi
        xor eax, eax
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6c25d40)
    }
}

#undef public_6c25d56
#undef public_6c25d7c
#undef public_6c25da8
#undef public_6c25dc8
#undef public_6c25e05
