#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62470c0);

#define public_62470d9 _public_62470d9
#define public_62470ff _public_62470ff

PROC_DECLARE(0x62470c0, internal_62470c0, public_62470c0);
extern "C" NAKED register_t __cdecl internal_62470c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, esi
        je public_62470ff
        lea edx, ds:[eax+8]
        lea ecx, ds:[esi+8]
        push ebx
        public_62470d9 : nop
        mov ebx, dword ptr ds : [esi-0x10]
        sub esi, 0x10
        sub eax, 0x10
        sub ecx, 0x10
        sub edx, 0x10
        cmp esi, edi
        mov dword ptr ds : [eax], ebx
        mov ebx, dword ptr ds : [ecx-4]
        mov dword ptr ds : [edx-4], ebx
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebx
        jne public_62470d9
        pop ebx
        public_62470ff : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62470c0)
    }
}

#undef public_62470d9
#undef public_62470ff
