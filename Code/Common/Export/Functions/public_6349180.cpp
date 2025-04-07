#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6349180);
CLANG_FORWARD_PROC_SYMBOL(public_63491d0);

#define public_63491a1 _public_63491a1

PROC_DECLARE(0x6349180, internal_6349180, public_6349180);
extern "C" NAKED register_t __cdecl internal_6349180()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov ax, word ptr ds : [edi+0x152]
        cmp ax, word ptr ds : [edi+0x150]
        lea esi, ds:[edi+0x150]
        jb public_63491a1
        mov ecx, esi
        call public_63441a0
        public_63491a1 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        push eax
        push edi
        mov dword ptr ds : [edx+ecx*4], eax
        inc word ptr ds : [esi+2]
        mov ecx, dword ptr ds : [edi+0x15C]
        call public_63491d0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6349180)
    }
}

#undef public_63491a1
