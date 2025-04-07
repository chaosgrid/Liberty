#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f2250);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f2292 _public_65f2292
#define public_65f2294 _public_65f2294
#define public_65f22b3 _public_65f22b3

PROC_DECLARE(0x65f2250, internal_65f2250, public_65f2250);
extern "C" NAKED register_t __cdecl internal_65f2250()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 1
        jne public_65f22b3
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        push eax
        call dword ptr ds : [public_660101c]
        call dword ptr ds : [public_6601000]
        push 0xC
        mov edi, eax
        call public_6600bb6
        add esp, 4
        test eax, eax
        je public_65f2292
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], offset public_660216c
        mov dword ptr ds : [eax], offset public_66011e4
        mov esi, eax
        jmp public_65f2294
        public_65f2292 : nop
        xor esi, esi
        public_65f2294 : nop
        mov ecx, dword ptr ds : [edi]
        push 0x80000000
/*FIXUP push offset public_660216c @0x65f229b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660216c
        push esi
        push edi
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+8]
        pop edi
        pop esi
        public_65f22b3 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x65f2250)
    }
}

#undef public_65f2292
#undef public_65f2294
#undef public_65f22b3
