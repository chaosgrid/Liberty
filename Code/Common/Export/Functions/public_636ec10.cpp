#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636eb20);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_636ec1d _public_636ec1d
#define public_636ec5d _public_636ec5d
#define public_636ec5f _public_636ec5f

PROC_DECLARE(0x636ec10, internal_636ec10, public_636ec10);
extern "C" NAKED register_t __cdecl internal_636ec10()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        jne public_636ec1d
        xor eax, eax
        pop edi
        ret 
        public_636ec1d : nop
        mov eax, dword ptr ds : [edi]
        push esi
        mov esi, dword ptr ds : [edi+eax*4+4]
        test esi, esi
        je public_636ec5d
        dec esi
        cmp esi, eax
        jle public_636ec5f
        push eax
        push esi
/*FIXUP push offset public_63eea84 @0x636ec2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eea84
        call public_6356960
        mov eax, dword ptr ds : [public_658b994]
        push edi
/*FIXUP push offset public_63eea7c @0x636ec3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eea7c
        push eax
        call public_636eb20
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x24
        mov eax, esi
        pop esi
        pop edi
        ret 
        public_636ec5d : nop
        mov esi, eax
        public_636ec5f : nop
        mov eax, esi
        pop esi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x636ec10)
    }
}

#undef public_636ec1d
#undef public_636ec5d
#undef public_636ec5f
