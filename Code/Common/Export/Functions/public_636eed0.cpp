#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636eb20);
CLANG_FORWARD_PROC_SYMBOL(public_636eed0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_636eeeb _public_636eeeb
#define public_636ef16 _public_636ef16

PROC_DECLARE(0x636eed0, internal_636eed0, public_636eed0);
extern "C" NAKED register_t __cdecl internal_636eed0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        jl public_636eeeb
        cmp edi, esi
        jge public_636eeeb
        cmp esi, dword ptr ds : [ebx]
        jle public_636ef16
        public_636eeeb : nop
        push esi
        push edi
/*FIXUP push offset public_63eec84 @0x636eeed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eec84
        call public_6356960
        mov eax, dword ptr ds : [public_658b994]
        push ebx
/*FIXUP push offset public_63997b0 @0x636eefd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997b0
        push eax
        call public_636eb20
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x24
        public_636ef16 : nop
        mov edx, dword ptr ds : [ebx]
        lea ecx, ds:[esi+1]
        mov dword ptr ds : [ebx+edx*4+4], ecx
        sub esi, edi
        lea ecx, ds:[esi*4+4]
        mov edx, ecx
        lea edi, ds:[ebx+edi*4+4]
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636eed0)
    }
}

#undef public_636eeeb
#undef public_636ef16
