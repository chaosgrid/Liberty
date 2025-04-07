#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_636eb20);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_636e4c0 _public_636e4c0
#define public_636e4c8 _public_636e4c8
#define public_636e4f2 _public_636e4f2

PROC_DECLARE(0x636e4a0, internal_636e4a0, public_636e4a0);
extern "C" NAKED register_t __cdecl internal_636e4a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push edi
        lea edi, ds:[esi+eax*4+4]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        lea ecx, ds:[eax-1]
        mov dword ptr ds : [edi], ecx
        jne public_636e4c0
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edi], edx
        public_636e4c0 : nop
        test ebx, ebx
        jl public_636e4c8
        cmp ebx, dword ptr ds : [edi]
        jl public_636e4f2
        public_636e4c8 : nop
        push ebx
/*FIXUP push offset public_63ee904 @0x636e4c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee904
        call public_6356960
        mov eax, dword ptr ds : [public_658b994]
        push esi
/*FIXUP push offset public_63997b0 @0x636e4d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997b0
        push eax
        call public_636eb20
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x20
        public_636e4f2 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi+ebx*4+4]
        mov edx, dword ptr ds : [esi+ecx*4]
        lea ecx, ds:[esi+ecx*4]
        mov dword ptr ds : [esi+ebx*4+4], edx
        pop edi
        pop esi
        mov dword ptr ds : [ecx], 0
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636e4a0)
    }
}

#undef public_636e4c0
#undef public_636e4c8
#undef public_636e4f2
