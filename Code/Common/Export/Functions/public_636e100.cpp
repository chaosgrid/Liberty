#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e100);
CLANG_FORWARD_PROC_SYMBOL(public_636e840);
CLANG_FORWARD_PROC_SYMBOL(public_636eb20);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_636e11a _public_636e11a
#define public_636e12c _public_636e12c
#define public_636e13b _public_636e13b
#define public_636e168 _public_636e168
#define public_636e181 _public_636e181
#define public_636e199 _public_636e199

PROC_DECLARE(0x636e100, internal_636e100, public_636e100);
extern "C" NAKED register_t __cdecl internal_636e100()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp]
        test edi, edi
        je public_636e11a
        mov eax, dword ptr ds : [edi]
        lea edi, ds:[edi+eax*4+4]
        cmp dword ptr ds : [edi], 0
        jne public_636e12c
        public_636e11a : nop
        push ebp
        call public_636e840
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[eax+ecx*4+4]
        public_636e12c : nop
        mov esi, dword ptr ds : [edi]
        mov ebx, dword ptr ss : [esp+0x18]
        dec esi
        test ebx, ebx
        jl public_636e13b
        cmp ebx, esi
        jle public_636e168
        public_636e13b : nop
        push ebx
/*FIXUP push offset public_63ee904 @0x636e13c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee904
        call public_6356960
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [public_658b994]
        push edx
/*FIXUP push offset public_63997b0 @0x636e14f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997b0
        push eax
        call public_636eb20
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x20
        public_636e168 : nop
        inc dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp]
        lea eax, ds:[ecx+esi*4+4]
        sub esi, ebx
        inc esi
        mov edx, esi
        dec esi
        test edx, edx
        lea ecx, ds:[eax+4]
        je public_636e199
        lea edx, ds:[esi+1]
        public_636e181 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        sub ecx, 4
        sub eax, 4
        dec edx
        jne public_636e181
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_636e199 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636e100)
    }
}

#undef public_636e11a
#undef public_636e12c
#undef public_636e13b
#undef public_636e168
#undef public_636e181
#undef public_636e199
