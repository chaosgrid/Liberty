#include "RendComp-PCH.h"


#define public_6c213f4 _public_6c213f4
#define public_6c21405 _public_6c21405
#define public_6c21420 _public_6c21420
#define public_6c2142d _public_6c2142d
#define public_6c21435 _public_6c21435
#define public_6c2143f _public_6c2143f
#define public_6c21446 _public_6c21446
#define public_6c2144b _public_6c2144b

PROC_DECLARE(0x6c213e0, internal_6c213e0, public_6c213e0);
extern "C" NAKED register_t __cdecl internal_6c213e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0x10]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6c2144b
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        public_6c213f4 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6c21405
        mov edx, dword ptr ds : [eax+8]
        lea ecx, ds:[eax+8]
        push ebx
        call dword ptr ds : [edx+0xC]
        public_6c21405 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6c2142d
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6c21446
        lea ebx, ds:[ebx]
        public_6c21420 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6c21420
        jmp public_6c21446
        public_6c2142d : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6c2143f
        public_6c21435 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6c21435
        public_6c2143f : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6c21446
        mov esi, eax
        public_6c21446 : nop
        cmp esi, edi
        jne public_6c213f4
        pop ebx
        public_6c2144b : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c213e0)
    }
}

#undef public_6c213f4
#undef public_6c21405
#undef public_6c21420
#undef public_6c2142d
#undef public_6c21435
#undef public_6c2143f
#undef public_6c21446
#undef public_6c2144b
