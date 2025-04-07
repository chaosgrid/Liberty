#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe980);

#define public_6ebe9b2 _public_6ebe9b2
#define public_6ebe9c8 _public_6ebe9c8
#define public_6ebe9e4 _public_6ebe9e4

PROC_DECLARE(0x6ebe980, internal_6ebe980, public_6ebe980);
extern "C" NAKED register_t __cdecl internal_6ebe980()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        push edi
        lea edi, ds:[ecx+4]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [ecx+8], edi
        fld dword ptr ds : [edi]
        fabs 
        fcomp qword ptr ds : [public_6ed2908]
        fnstsw ax
        test ah, 0x41
        jne public_6ebe9e4
        mov eax, dword ptr ds : [ecx]
        add eax, 0x10
        push esi
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        jne public_6ebe9b2
        xor edx, edx
        jmp public_6ebe9c8
        public_6ebe9b2 : nop
        mov edx, dword ptr ds : [eax+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ebe9c8 : nop
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        pop esi
        fdiv dword ptr ds : [edi]
        fsub qword ptr ds : [public_6ed2900]
        fstp qword ptr ds : [ecx+0x20]
        public_6ebe9e4 : nop
        xor eax, eax
        pop edi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ebe980)
    }
}

#undef public_6ebe9b2
#undef public_6ebe9c8
#undef public_6ebe9e4
