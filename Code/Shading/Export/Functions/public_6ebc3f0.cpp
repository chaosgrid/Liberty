#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8970);
CLANG_FORWARD_PROC_SYMBOL(public_6ebc720);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6ebc411 _public_6ebc411
#define public_6ebc441 _public_6ebc441
#define public_6ebc582 _public_6ebc582
#define public_6ebc591 _public_6ebc591

PROC_DECLARE(0x6ebc3f0, internal_6ebc3f0, public_6ebc3f0);
extern "C" NAKED register_t __cdecl internal_6ebc3f0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6ed5f78]
        push esi
        mov al, 1
        xor esi, esi
        test al, cl
        jne public_6ebc441
        or cl, al
        mov byte ptr ds : [public_6ed5f78], cl
        mov eax, offset public_6ed5fa8
        mov ecx, 4
        public_6ebc411 : nop
        mov dword ptr ds : [eax-0x18], esi
        mov dword ptr ds : [eax-0x14], esi
        mov dword ptr ds : [eax-4], esi
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+0x10], esi
        mov dword ptr ds : [eax+0x14], esi
        mov dword ptr ds : [eax-0x28], esi
        mov dword ptr ds : [eax-0x24], esi
        mov dword ptr ds : [eax-0x20], esi
        mov dword ptr ds : [eax-0x1C], esi
        add eax, 0x4C
        dec ecx
        jne public_6ebc411
/*FIXUP push offset _public_6ebc720 @0x6ebc434*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ebc720
        call public_6ed0ccb
        add esp, 4
        public_6ebc441 : nop
        cmp dword ptr ds : [public_6ed5f90], esi
        jne public_6ebc582
        push edi
/*FIXUP push offset public_6ed411c @0x6ebc44e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        mov edi, offset public_6ed56c4
        push 7
        mov ecx, offset public_6ed5f90
        mov dword ptr ds : [public_6ed5f80], esi
        mov dword ptr ds : [public_6ed5f84], offset public_6ed41c8
        mov dword ptr ds : [public_6ed5f88], offset public_6ed4474
        mov dword ptr ds : [public_6ed5f8c], edi
        call public_6eb28f0
        push esi
        push 7
        mov ecx, offset public_6ed5fa4
        call public_6eb28f0
        push esi
        push 7
        mov ecx, offset public_6ed5fb8
        call public_6eb28f0
        push 4
        push 8
        mov ecx, offset public_6ed5fdc
        mov dword ptr ds : [public_6ed5fcc], esi
        mov dword ptr ds : [public_6ed5fd0], offset public_6ed41a4
        mov dword ptr ds : [public_6ed5fd4], offset public_6ed4460
        mov dword ptr ds : [public_6ed5fd8], edi
        call public_6eb28f0
        push esi
        push 8
        mov ecx, offset public_6ed5ff0
        call public_6eb28f0
        push esi
        push 8
        mov ecx, offset public_6ed6004
        call public_6eb28f0
        push 9
        mov ecx, offset public_6ed6028
        mov dword ptr ds : [public_6ed6018], 0x20000
        mov dword ptr ds : [public_6ed601c], offset public_6ed41a4
        mov dword ptr ds : [public_6ed6020], offset public_6ed4448
        mov dword ptr ds : [public_6ed6024], edi
        call public_6eb8970
        push esi
        push 9
        mov ecx, offset public_6ed603c
        mov dword ptr ds : [public_6ed602c], esi
        call public_6eb28f0
        push esi
        push 9
        mov ecx, offset public_6ed6050
        call public_6eb28f0
        push esi
        push 9
        mov ecx, offset public_6ed6074
        mov dword ptr ds : [public_6ed6064], 0x40000
        mov dword ptr ds : [public_6ed6068], offset public_6ed41a4
        mov dword ptr ds : [public_6ed606c], offset public_6ed4430
        mov dword ptr ds : [public_6ed6070], edi
        call public_6eb28f0
        push esi
        push 9
        mov ecx, offset public_6ed6088
        call public_6eb28f0
        push esi
        push 9
        mov ecx, offset public_6ed609c
        call public_6eb28f0
        pop edi
        public_6ebc582 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, esi
        pop esi
        je public_6ebc591
        mov dword ptr ds : [eax], offset public_6ed5f80
        public_6ebc591 : nop
        mov eax, 4
        ret 4
        UNREACHABLE_TRAP(0x6ebc3f0)
    }
}

#undef public_6ebc411
#undef public_6ebc441
#undef public_6ebc582
#undef public_6ebc591
