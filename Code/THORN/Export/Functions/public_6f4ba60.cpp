#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ba60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);

#define public_6f4ba73 _public_6f4ba73
#define public_6f4ba86 _public_6f4ba86
#define public_6f4ba88 _public_6f4ba88
#define public_6f4ba91 _public_6f4ba91
#define public_6f4baa0 _public_6f4baa0
#define public_6f4bad7 _public_6f4bad7
#define public_6f4bae6 _public_6f4bae6

PROC_DECLARE(0x6f4ba60, internal_6f4ba60, public_6f4ba60);
extern "C" NAKED register_t __cdecl internal_6f4ba60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_6f4ba73
        mov eax, dword ptr ds : [public_6f61e28]
        mov esi, dword ptr ds : [eax+0x58]
        jmp public_6f4ba88
        public_6f4ba73 : nop
        cmp esi, dword ptr ds : [esi]
        jne public_6f4ba86
/*FIXUP push offset public_6f60460 @0x6f4ba77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60460
        push 1
        call public_6f4f570
        add esp, 8
        public_6f4ba86 : nop
        mov esi, dword ptr ds : [esi]
        public_6f4ba88 : nop
        test esi, esi
        je public_6f4bae6
        mov eax, 0xFFFFFFFA
        public_6f4ba91 : nop
        cmp dword ptr ds : [esi+0x10], eax
        jne public_6f4baa0
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6f4ba91
        mov eax, esi
        pop esi
        ret 
        public_6f4baa0 : nop
        test esi, esi
        je public_6f4bae6
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], 0xFFFFFFFE
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+8], esi
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [eax+8]
        jb public_6f4bad7
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4bad7 : nop
        add dword ptr ds : [eax], 0x10
        lea eax, ds:[esi+0x10]
        push eax
        call public_6f4b8b0
        add esp, 4
        public_6f4bae6 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4ba60)
    }
}

#undef public_6f4ba73
#undef public_6f4ba86
#undef public_6f4ba88
#undef public_6f4ba91
#undef public_6f4baa0
#undef public_6f4bad7
#undef public_6f4bae6
