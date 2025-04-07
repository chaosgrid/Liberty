#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636eb20);
CLANG_FORWARD_PROC_SYMBOL(public_636ee40);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_636ee52 _public_636ee52
#define public_636ee7c _public_636ee7c

PROC_DECLARE(0x636ee40, internal_636ee40, public_636ee40);
extern "C" NAKED register_t __cdecl internal_636ee40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        jl public_636ee52
        cmp edi, dword ptr ds : [esi]
        jle public_636ee7c
        public_636ee52 : nop
        push edi
/*FIXUP push offset public_63eec3c @0x636ee53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eec3c
        call public_6356960
        mov eax, dword ptr ds : [public_658b994]
        push esi
/*FIXUP push offset public_63997b0 @0x636ee63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997b0
        push eax
        call public_636eb20
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x20
        public_636ee7c : nop
        mov ecx, dword ptr ds : [esi]
        lea eax, ds:[edi+1]
        mov dword ptr ds : [esi+ecx*4+4], eax
        pop edi
        mov dword ptr ds : [esi+eax*4], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636ee40)
    }
}

#undef public_636ee52
#undef public_636ee7c
