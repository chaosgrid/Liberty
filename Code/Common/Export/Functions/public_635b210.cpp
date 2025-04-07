#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635b210);

PROC_DECLARE(0x635b210, internal_635b210, public_635b210);
extern "C" NAKED register_t __cdecl internal_635b210()
{
    __asm
    {
        sub esp, 0x2C
        mov eax, dword ptr ss : [esp+0x34]
        push ebx
        push esi
        mov esi, eax
        and eax, 0xFFFFFFF0
        mov edx, eax
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx+0xC]
        and ecx, 0xFFFF
        push edi
        mov edi, dword ptr ss : [esp+0x3C]
        mov ebx, dword ptr ds : [edi]
        shl ecx, 4
        and eax, 0xFFFF
        add ecx, ebx
        fld dword ptr ds : [ecx+edi]
        add ecx, edi
        shl eax, 4
        add eax, ebx
        fsub dword ptr ds : [eax+edi]
        add eax, edi
        fld dword ptr ds : [ecx+4]
        and edx, 0xFFFF
        fsub dword ptr ds : [eax+4]
        sar esi, 2
        fld dword ptr ds : [ecx+8]
        shl edx, 4
        fsub dword ptr ds : [eax+8]
        and esi, 3
        add edx, ebx
        fld dword ptr ds : [edx+edi]
        dec esi
        fsub dword ptr ds : [eax]
        add edx, edi
        mov ecx, dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x48]
        fmul st, st(1)
        pop edi
        fld dword ptr ss : [esp+0x18]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        fsubp 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x28]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x3C]
        fsubp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x3C]
        fsubp 
        fld dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0xC]
        movsx ecx, byte ptr ds : [esi+public_63ee500]
        fst dword ptr ds : [ecx+eax]
        movsx edx, byte ptr ds : [esi+public_63ee501]
        fld dword ptr ss : [esp+0x10]
        fsub st, st(2)
        fsub st, st(1)
        fstp dword ptr ds : [edx+eax]
        movsx ecx, byte ptr ds : [esi+public_63ee502]
        pop esi
        fstp st(0)
        pop ebx
        fstp dword ptr ds : [ecx+eax]
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x635b210)
    }
}
