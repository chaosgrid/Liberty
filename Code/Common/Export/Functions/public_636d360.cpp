#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636d360);

PROC_DECLARE(0x636d360, internal_636d360, public_636d360);
extern "C" NAKED register_t __cdecl internal_636d360()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        push ebp
        push esi
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        mov ebp, esi
        and ebp, 0xC
        mov edx, dword ptr ss : [ebp+public_63ee4e0]
        mov edx, dword ptr ds : [edx+esi]
        mov ebp, dword ptr ss : [ebp+public_63ee4f0]
        mov esi, dword ptr ds : [esi+ebp]
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov ebx, dword ptr ds : [edi]
        and eax, 0xFFFF
        and edx, 0xFFFF
        and esi, 0xFFFF
        shl eax, 4
        shl edx, 4
        shl esi, 4
        add eax, ebx
        fld dword ptr ds : [eax+edi]
        add eax, edi
        add edx, ebx
        add edx, edi
        add esi, ebx
        fld dword ptr ds : [esi+edi]
        add esi, edi
        fsub st, st(1)
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x34], edi
        mov edi, dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x30], edi
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x10]
        fsubr dword ptr ds : [edx]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ss : [esp+0x30]
        fld st(1)
        fmul dword ptr ss : [esp+0x10]
        fld st(1)
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x18]
        fld st(2)
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fmul dword ptr ss : [esp+0x14]
        fld st(1)
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fxch 
        fstp st(0)
        fld st(0)
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [eax+4]
        faddp 
        fstp dword ptr ss : [esp+0x34]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        pop edi
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fadd dword ptr ds : [ecx+0x10]
        fstp dword ptr ds : [ecx+0x10]
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [ecx+0x14]
        fstp dword ptr ds : [ecx+0x14]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_63a5674]
        fld st(0)
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x30]
        fld st(0)
        fmul dword ptr ds : [eax+8]
        fadd dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [ecx]
        mov dword ptr ds : [ecx+8], eax
        fstp dword ptr ds : [ecx]
        fld st(0)
        fld st(0)
        fmul dword ptr ds : [edx+4]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x30]
        fld st(0)
        fmul dword ptr ds : [edx+8]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        fadd dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fadd dword ptr ss : [esp+0x30]
        fld st(1)
        fmul dword ptr ds : [esi+8]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x30]
        fxch 
        fmul dword ptr ds : [esi]
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        fadd dword ptr ds : [ecx]
        pop ebx
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x636d360)
    }
}
