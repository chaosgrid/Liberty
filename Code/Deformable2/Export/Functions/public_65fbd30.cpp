#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fbd30);

#define public_65fbd9b _public_65fbd9b
#define public_65fbdc9 _public_65fbdc9

PROC_DECLARE(0x65fbd30, internal_65fbd30, public_65fbd30);
extern "C" NAKED register_t __cdecl internal_65fbd30()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+8]
        sub esp, 0x1C
        fld dword ptr ds : [ecx+4]
        push ebx
        fld dword ptr ds : [ecx]
        push esi
        fld st(0)
        push edi
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom qword ptr ds : [public_6601348]
        fnstsw ax
        test ah, 0x41
        jne public_65fbd9b
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x18]
        fld st(0)
        fsin 
        fdivrp 
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x14]
        jmp public_65fbdc9
        public_65fbd9b : nop
        mov dword ptr ss : [esp+0x24], 0
        fstp st(0)
        mov esi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x20], 0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], 0x3F800000
        public_65fbdc9 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ebx, dword ptr ss : [esp+0x18]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], esi
        pop edi
        pop esi
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x65fbd30)
    }
}

#undef public_65fbd9b
#undef public_65fbdc9
