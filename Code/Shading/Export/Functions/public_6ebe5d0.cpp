#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe5d0);

#define public_6ebe5fc _public_6ebe5fc
#define public_6ebe612 _public_6ebe612
#define public_6ebe63d _public_6ebe63d

PROC_DECLARE(0x6ebe5d0, internal_6ebe5d0, public_6ebe5d0);
extern "C" NAKED register_t __cdecl internal_6ebe5d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        push ebx
        push esi
        xor ebx, ebx
        push edi
        lea edi, ds:[eax+0xC]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+0x20], ebx
        mov dword ptr ds : [ecx+0x24], ebx
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [ecx+0xC], 0x3F800000
        mov esi, dword ptr ds : [eax+0x14]
        cmp esi, ebx
        jne public_6ebe5fc
        xor edx, edx
        jmp public_6ebe612
        public_6ebe5fc : nop
        mov edx, dword ptr ds : [eax+0x18]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ebe612 : nop
        mov dword ptr ds : [ecx+0x14], edx
        fld dword ptr ds : [edi]
        fabs 
        fcomp qword ptr ds : [public_6ed2908]
        fnstsw ax
        test ah, 0x41
        jne public_6ebe63d
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], ebx
        fild qword ptr ss : [esp+0xC]
        fdiv dword ptr ds : [edi]
        fsub qword ptr ds : [public_6ed2900]
        fstp qword ptr ds : [ecx+0x20]
        public_6ebe63d : nop
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0x10], ebx
        mov dword ptr ds : [ecx+0x18], ebx
        mov dword ptr ds : [ecx+0x1C], ebx
        mov dword ptr ds : [ecx+0x2C], 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ebe5d0)
    }
}

#undef public_6ebe5fc
#undef public_6ebe612
#undef public_6ebe63d
