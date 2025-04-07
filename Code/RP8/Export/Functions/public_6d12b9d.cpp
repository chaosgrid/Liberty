#include "RP8-PCH.h"


#define public_6d12c0e _public_6d12c0e
#define public_6d12c59 _public_6d12c59
#define public_6d12c6d _public_6d12c6d
#define public_6d12c73 _public_6d12c73
#define public_6d12cab _public_6d12cab
#define public_6d12ccc _public_6d12ccc
#define public_6d12cd3 _public_6d12cd3
#define public_6d12cd6 _public_6d12cd6

PROC_DECLARE(0x6d12b9d, internal_6d12b9d, public_6d12b9d);
extern "C" NAKED register_t __cdecl internal_6d12b9d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x174]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d12c0e
        mov eax, 2
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-0xC]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-0xC]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-0xC], eax
/*FIXUP push offset public_6d69828 @0x6d12be3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69828
        push 0x10A9
/*FIXUP push offset public_6d69868 @0x6d12bed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69868
/*FIXUP push offset public_6d698b4 @0x6d12bf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d698b4
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d12cd6
        public_6d12c0e : nop
        mov dword ptr ss : [ebp-4], 0x80004005
        cmp dword ptr ss : [ebp+0xC], 0
        jne public_6d12c59
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x128
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx+0xC], 0xFFFFFFFF
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+0x10], 0
        jmp public_6d12cd3
        public_6d12c59 : nop
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        jne public_6d12c6d
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x12C]
        mov dword ptr ss : [ebp-8], ecx
        jmp public_6d12c73
        public_6d12c6d : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], edx
        public_6d12c73 : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d12cd3
        mov eax, dword ptr ss : [ebp-8]
        xor ecx, ecx
        cmp dword ptr ds : [eax+0x20], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d12cd3
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x128
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-8]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6d12cab
        mov eax, dword ptr ss : [ebp-0x14]
        cmp dword ptr ds : [eax], 0
        je public_6d12ccc
        public_6d12cab : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dl, byte ptr ds : [ecx+0x10]
        or dl, 1
        mov eax, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [eax+0x10], dl
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax], 0
        public_6d12ccc : nop
        mov dword ptr ss : [ebp-4], 0
        public_6d12cd3 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d12cd6 : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d12b9d)
    }
}

#undef public_6d12c0e
#undef public_6d12c59
#undef public_6d12c6d
#undef public_6d12c73
#undef public_6d12cab
#undef public_6d12ccc
#undef public_6d12cd3
#undef public_6d12cd6
