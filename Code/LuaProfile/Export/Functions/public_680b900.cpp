#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680a850);
CLANG_FORWARD_PROC_SYMBOL(public_680b520);
CLANG_FORWARD_PROC_SYMBOL(public_680b900);

#define public_680b913 _public_680b913
#define public_680b925 _public_680b925
#define public_680b93a _public_680b93a
#define public_680b954 _public_680b954
#define public_680b95b _public_680b95b
#define public_680b95d _public_680b95d
#define public_680b96b _public_680b96b

PROC_DECLARE(0x680b900, internal_680b900, public_680b900);
extern "C" NAKED register_t __cdecl internal_680b900()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x20]
        lea eax, ds:[eax+eax*2]
        mov ecx, dword ptr ds : [esi+eax*4+0x2C]
        test ecx, ecx
        je public_680b96b
        public_680b913 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 0xA
        jne public_680b925
        push esi
        call public_680b520
        add esp, 4
        jmp public_680b95d
        public_680b925 : nop
        cmp eax, 0xFFFFFFFF
        jne public_680b93a
/*FIXUP push offset public_680e494 @0x680b92a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e494
        push esi
        call public_680a850
        add esp, 8
        jmp public_680b95d
        public_680b93a : nop
        mov eax, dword ptr ds : [esi+0x18]
        dec dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x18]
        cmp dword ptr ds : [ecx], 0
        jl public_680b954
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        jmp public_680b95b
        public_680b954 : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        public_680b95b : nop
        mov dword ptr ds : [esi], eax
        public_680b95d : nop
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [esi+ecx*4+0x2C]
        test eax, eax
        jne public_680b913
        public_680b96b : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x680b900)
    }
}

#undef public_680b913
#undef public_680b925
#undef public_680b93a
#undef public_680b954
#undef public_680b95b
#undef public_680b95d
#undef public_680b96b
