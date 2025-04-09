#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e920);

#define public_42e933 _public_42e933
#define public_42e94f _public_42e94f
#define public_42e967 _public_42e967
#define public_42e97a _public_42e97a
#define public_42e994 _public_42e994
#define public_42e9ab _public_42e9ab
#define public_42e9bf _public_42e9bf
#define public_42e9d6 _public_42e9d6

PROC_DECLARE(0x42e920, internal_42e920, public_42e920);
extern "C" NAKED register_t __cdecl internal_42e920()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x60]
        fcomp dword ptr ds : [ecx+0x6C]
        fnstsw ax
        test ah, 5
        jp public_42e933
        mov eax, dword ptr ds : [ecx+0x6C]
        mov dword ptr ds : [ecx+0x60], eax
        public_42e933 : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_42e94f
        fld dword ptr ds : [ecx+0x64]
        fcomp dword ptr ds : [ecx+0x6C]
        fnstsw ax
        test ah, 5
        jp public_42e967
        mov edx, dword ptr ds : [ecx+0x6C]
        mov dword ptr ds : [ecx+0x64], edx
        jmp public_42e967
        public_42e94f : nop
        cmp eax, 1
        jne public_42e967
        fld dword ptr ds : [ecx+0x64]
        fcomp dword ptr ds : [ecx+0x70]
        fnstsw ax
        test ah, 5
        jp public_42e967
        mov eax, dword ptr ds : [ecx+0x70]
        mov dword ptr ds : [ecx+0x64], eax
        public_42e967 : nop
        fld dword ptr ds : [ecx+0x74]
        fcomp dword ptr ds : [ecx+0x6C]
        fnstsw ax
        test ah, 5
        jp public_42e97a
        mov edx, dword ptr ds : [ecx+0x6C]
        mov dword ptr ds : [ecx+0x74], edx
        public_42e97a : nop
        fld dword ptr ds : [ecx+0x58]
        mov edx, 0x3C23D70A
        fcomp dword ptr ds : [public_5c99c8]
        fnstsw ax
        test ah, 5
        jp public_42e994
        mov dword ptr ds : [ecx+0x58], edx
        jmp public_42e9ab
        public_42e994 : nop
        fld dword ptr ds : [ecx+0x58]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_42e9ab
        mov dword ptr ds : [ecx+0x58], 0x3F800000
        public_42e9ab : nop
        fld dword ptr ds : [ecx+0x5C]
        fcomp dword ptr ds : [public_5c99c8]
        fnstsw ax
        test ah, 5
        jp public_42e9bf
        mov dword ptr ds : [ecx+0x5C], edx
        ret 
        public_42e9bf : nop
        fld dword ptr ds : [ecx+0x5C]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_42e9d6
        mov dword ptr ds : [ecx+0x5C], 0x3F800000
        public_42e9d6 : nop
        ret 
        UNREACHABLE_TRAP(0x42e920)
    }
}

#undef public_42e933
#undef public_42e94f
#undef public_42e967
#undef public_42e97a
#undef public_42e994
#undef public_42e9ab
#undef public_42e9bf
#undef public_42e9d6
