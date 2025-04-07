#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f331b0);

#define public_6f331d0 _public_6f331d0
#define public_6f331f6 _public_6f331f6

PROC_DECLARE(0x6f331b0, internal_6f331b0, public_6f331b0);
extern "C" NAKED register_t __cdecl internal_6f331b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, esi
        je public_6f331f6
        lea edx, ds:[eax+8]
        lea ecx, ds:[esi+8]
        push ebx
        lea esp, ss:[esp]
        public_6f331d0 : nop
        mov ebx, dword ptr ds : [esi-0x10]
        sub esi, 0x10
        sub ecx, 0x10
        sub eax, 0x10
        sub edx, 0x10
        cmp esi, edi
        mov dword ptr ds : [eax], ebx
        mov ebx, dword ptr ds : [ecx-4]
        mov dword ptr ds : [edx-4], ebx
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebx
        jne public_6f331d0
        pop ebx
        public_6f331f6 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f331b0)
    }
}

#undef public_6f331d0
#undef public_6f331f6
