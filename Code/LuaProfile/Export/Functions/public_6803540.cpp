#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803540);
CLANG_FORWARD_PROC_SYMBOL(public_6806550);

#define public_680354f _public_680354f
#define public_6803565 _public_6803565
#define public_6803572 _public_6803572
#define public_68035ac _public_68035ac

PROC_DECLARE(0x6803540, internal_6803540, public_6803540);
extern "C" NAKED register_t __cdecl internal_6803540()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [edi], 0xFFFFFFFA
        jne public_680354f
        or eax, 0xFFFFFFFF
        pop edi
        ret 
        public_680354f : nop
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx+0x70]
        push esi
        xor esi, esi
        test eax, eax
        jle public_6803572
        mov ecx, dword ptr ds : [edx+0x6C]
        add ecx, 0x10
        public_6803565 : nop
        cmp dword ptr ds : [ecx], 2
        je public_6803572
        inc esi
        add ecx, 0x18
        cmp esi, eax
        jl public_6803565
        public_6803572 : nop
        cmp esi, eax
        jne public_68035ac
        push 0x7FFFFFFD
/*FIXUP push offset public_680d4f4 @0x680357b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d4f4
        push 0x18
        push 1
        push eax
        mov eax, dword ptr ds : [edx+0x6C]
        push eax
        call public_6806550
        mov ecx, dword ptr ds : [public_680e604]
        mov dword ptr ds : [ecx+0x6C], eax
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x70]
        add esp, 0x18
        inc ecx
        mov dword ptr ds : [eax+0x70], ecx
        mov edx, dword ptr ds : [public_680e604]
        public_68035ac : nop
        mov edx, dword ptr ds : [edx+0x6C]
        mov ecx, dword ptr ds : [edi]
        lea eax, ds:[esi+esi*2]
        shl eax, 3
        add edx, eax
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor edx, edx
        test ecx, ecx
        mov ecx, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [ecx+0x6C]
        sete dl
        mov dword ptr ds : [ecx+eax+0x10], edx
        mov eax, esi
        pop esi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6803540)
    }
}

#undef public_680354f
#undef public_6803565
#undef public_6803572
#undef public_68035ac
