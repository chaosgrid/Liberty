#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63327f0);
CLANG_FORWARD_PROC_SYMBOL(public_6332d30);

#define public_6332d62 _public_6332d62
#define public_6332de0 _public_6332de0

PROC_DECLARE(0x6332d30, internal_6332d30, public_6332d30);
extern "C" NAKED register_t __cdecl internal_6332d30()
{
    __asm
    {
        sub esp, 0x24
        push esi
        push edi
        mov edi, ecx
        lea eax, ds:[edi+0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [edi+0x34]
        mov esi, 1
        cmp ecx, esi
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        jb public_6332de0
        public_6332d62 : nop
        xor edx, edx
        mov eax, esi
        div ecx
        mov dword ptr ss : [esp+0x10], 0
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x10], eax
        fild qword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, edi
        call public_63327f0
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        inc esi
        fsub dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x1C], ecx
        fld st(0)
        mov ecx, dword ptr ds : [edi+0x34]
        cmp esi, ecx
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        mov dword ptr ss : [esp+0x14], edx
        faddp 
        mov dword ptr ss : [esp+0x18], eax
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fadd dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+8]
        jbe public_6332d62
        public_6332de0 : nop
        fld dword ptr ss : [esp+8]
        pop edi
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6332d30)
    }
}

#undef public_6332d62
#undef public_6332de0
