#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636eb20);

#define public_636eb49 _public_636eb49
#define public_636eb58 _public_636eb58
#define public_636eb5a _public_636eb5a
#define public_636eb7c _public_636eb7c
#define public_636eb83 _public_636eb83
#define public_636eb97 _public_636eb97
#define public_636eba4 _public_636eba4

PROC_DECLARE(0x636eb20, internal_636eb20, public_636eb20);
extern "C" NAKED register_t __cdecl internal_636eb20()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        test ebp, ebp
        push edi
        je public_636eba4
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        jne public_636eb49
        mov eax, dword ptr ss : [esp+0x10]
        push eax
/*FIXUP push offset public_63eea2c @0x636eb37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eea2c
        push ebp
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        pop edi
        pop ebp
        ret 
        public_636eb49 : nop
        mov eax, dword ptr ds : [edi]
        push ebx
        push esi
        mov esi, dword ptr ds : [edi+eax*4+4]
        test esi, esi
        je public_636eb58
        dec esi
        jmp public_636eb5a
        public_636eb58 : nop
        mov esi, eax
        public_636eb5a : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [public_63991e8]
        push esi
        push eax
        push edi
        push ecx
/*FIXUP push offset public_63eea08 @0x636eb68*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eea08
        push ebp
        call ebx
        mov eax, dword ptr ds : [edi]
        add esp, 0x18
        cmp esi, eax
        jle public_636eb7c
        lea esi, ds:[eax+1]
        public_636eb7c : nop
        test esi, esi
        jle public_636eb97
        add edi, 4
        public_636eb83 : nop
        mov edx, dword ptr ds : [edi]
        push edx
/*FIXUP push offset public_63eea04 @0x636eb86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eea04
        push ebp
        call ebx
        add esp, 0xC
        add edi, 4
        dec esi
        jne public_636eb83
/*FIXUP public_636eb97 : nop
        push offset public_63edccc @0x636eb97*/
  FIXUP public_636eb97 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebp
        call ebx
        add esp, 8
        pop esi
        pop ebx
        public_636eba4 : nop
        pop edi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x636eb20)
    }
}

#undef public_636eb49
#undef public_636eb58
#undef public_636eb5a
#undef public_636eb7c
#undef public_636eb83
#undef public_636eb97
#undef public_636eba4
