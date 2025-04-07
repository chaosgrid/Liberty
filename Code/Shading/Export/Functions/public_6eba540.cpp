#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8970);
CLANG_FORWARD_PROC_SYMBOL(public_6ebaab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6eba561 _public_6eba561
#define public_6eba591 _public_6eba591
#define public_6eba6d2 _public_6eba6d2
#define public_6eba6e1 _public_6eba6e1

PROC_DECLARE(0x6eba540, internal_6eba540, public_6eba540);
extern "C" NAKED register_t __cdecl internal_6eba540()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6ed6618]
        push esi
        mov al, 1
        xor esi, esi
        test al, cl
        jne public_6eba591
        or cl, al
        mov byte ptr ds : [public_6ed6618], cl
        mov eax, offset public_6ed6648
        mov ecx, 4
        public_6eba561 : nop
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
        jne public_6eba561
/*FIXUP push offset _public_6ebaab0 @0x6eba584*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ebaab0
        call public_6ed0ccb
        add esp, 4
        public_6eba591 : nop
        cmp dword ptr ds : [public_6ed6630], esi
        jne public_6eba6d2
        push edi
/*FIXUP push offset public_6ed411c @0x6eba59e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        mov edi, offset public_6ed56c4
        push 7
        mov ecx, offset public_6ed6630
        mov dword ptr ds : [public_6ed6620], esi
        mov dword ptr ds : [public_6ed6624], offset public_6ed41c8
        mov dword ptr ds : [public_6ed6628], offset public_6ed4474
        mov dword ptr ds : [public_6ed662c], edi
        call public_6eb28f0
        push esi
        push 7
        mov ecx, offset public_6ed6644
        call public_6eb28f0
        push esi
        push 7
        mov ecx, offset public_6ed6658
        call public_6eb28f0
        push 4
        push 8
        mov ecx, offset public_6ed667c
        mov dword ptr ds : [public_6ed666c], esi
        mov dword ptr ds : [public_6ed6670], offset public_6ed41a4
        mov dword ptr ds : [public_6ed6674], offset public_6ed4460
        mov dword ptr ds : [public_6ed6678], edi
        call public_6eb28f0
        push esi
        push 8
        mov ecx, offset public_6ed6690
        call public_6eb28f0
        push esi
        push 8
        mov ecx, offset public_6ed66a4
        call public_6eb28f0
        push 9
        mov ecx, offset public_6ed66c8
        mov dword ptr ds : [public_6ed66b8], 0x20000
        mov dword ptr ds : [public_6ed66bc], offset public_6ed41a4
        mov dword ptr ds : [public_6ed66c0], offset public_6ed4448
        mov dword ptr ds : [public_6ed66c4], edi
        call public_6eb8970
        push esi
        push 9
        mov ecx, offset public_6ed66dc
        mov dword ptr ds : [public_6ed66cc], esi
        call public_6eb28f0
        push esi
        push 9
        mov ecx, offset public_6ed66f0
        call public_6eb28f0
        push esi
        push 9
        mov ecx, offset public_6ed6714
        mov dword ptr ds : [public_6ed6704], 0x40000
        mov dword ptr ds : [public_6ed6708], offset public_6ed41a4
        mov dword ptr ds : [public_6ed670c], offset public_6ed4430
        mov dword ptr ds : [public_6ed6710], edi
        call public_6eb28f0
        push esi
        push 9
        mov ecx, offset public_6ed6728
        call public_6eb28f0
        push esi
        push 9
        mov ecx, offset public_6ed673c
        call public_6eb28f0
        pop edi
        public_6eba6d2 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, esi
        pop esi
        je public_6eba6e1
        mov dword ptr ds : [eax], offset public_6ed6620
        public_6eba6e1 : nop
        mov eax, 4
        ret 4
        UNREACHABLE_TRAP(0x6eba540)
    }
}

#undef public_6eba561
#undef public_6eba591
#undef public_6eba6d2
#undef public_6eba6e1
