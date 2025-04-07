#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285cb0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6348fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6349040);

#define public_6285cd8 _public_6285cd8

PROC_DECLARE(0x6285cb0, internal_6285cb0, public_6285cb0);
extern "C" NAKED register_t __cdecl internal_6285cb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x54]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov dx, word ptr ds : [ebx+6]
        cmp dx, word ptr ds : [ebx+4]
        push esi
        lea esi, ds:[ebx+4]
        push edi
        mov edi, dword ptr ds : [ecx+0x98]
        jb public_6285cd8
        mov ecx, esi
        call public_63441a0
        public_6285cd8 : nop
        movzx eax, word ptr ds : [esi+2]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+eax*4], edi
        inc word ptr ds : [esi+2]
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edx+0x90]
        push ebx
        call public_6349040
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax+0x90]
        push ebx
        call public_6348fe0
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6285cb0)
    }
}

#undef public_6285cd8
