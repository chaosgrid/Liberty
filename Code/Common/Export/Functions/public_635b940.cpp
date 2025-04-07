#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635b940);

PROC_DECLARE(0x635b940, internal_635b940, public_635b940);
extern "C" NAKED register_t __cdecl internal_635b940()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        push ebx
        mov ebx, edx
        and ebx, 0xC
        mov ecx, dword ptr ds : [ebx+public_63ee4e0]
        mov ecx, dword ptr ds : [ecx+edx]
        mov ebx, dword ptr ds : [ebx+public_63ee4f0]
        mov edx, dword ptr ds : [ebx+edx]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        and eax, 0xFFFF
        and ecx, 0xFFFF
        push edi
        mov edi, dword ptr ds : [esi]
        shl eax, 4
        and edx, 0xFFFF
        add eax, edi
        fld dword ptr ds : [eax+esi]
        shl ecx, 4
        add eax, esi
        add ecx, edi
        add ecx, esi
        shl edx, 4
        add edx, edi
        fld dword ptr ds : [edx+esi]
        add edx, esi
        mov esi, dword ptr ds : [eax+4]
        fsub st, st(1)
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], esi
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp]
        fsubr dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ss : [esp+0x10]
        fld st(1)
        fmul dword ptr ss : [esp]
        fld st(1)
        fmul dword ptr ss : [esp+4]
        fsubp 
        fstp dword ptr ds : [eax]
        fmul dword ptr ss : [esp+8]
        fld st(2)
        fmul dword ptr ss : [esp]
        fsubp 
        fstp dword ptr ds : [eax+4]
        fxch 
        fmul dword ptr ss : [esp+4]
        fxch 
        fmul dword ptr ss : [esp+8]
        fsubp 
        fstp dword ptr ds : [eax+8]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x635b940)
    }
}
