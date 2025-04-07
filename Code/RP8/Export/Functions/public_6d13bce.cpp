#include "RP8-PCH.h"


#define public_6d13c3f _public_6d13c3f
#define public_6d13c7b _public_6d13c7b
#define public_6d13c9b _public_6d13c9b
#define public_6d13c9d _public_6d13c9d
#define public_6d13cb0 _public_6d13cb0
#define public_6d13cb6 _public_6d13cb6
#define public_6d13cf2 _public_6d13cf2
#define public_6d13d13 _public_6d13d13
#define public_6d13d1a _public_6d13d1a
#define public_6d13d1d _public_6d13d1d

PROC_DECLARE(0x6d13bce, internal_6d13bce, public_6d13bce);
extern "C" NAKED register_t __cdecl internal_6d13bce()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x178]
        and cl, 1
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d13c3f
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
/*FIXUP push offset public_6d69df0 @0x6d13c14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69df0
        push 0x11A8
/*FIXUP push offset public_6d69e30 @0x6d13c1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69e30
/*FIXUP push offset public_6d69e7c @0x6d13c23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69e7c
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        mov edx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d13d1d
        public_6d13c3f : nop
        mov dword ptr ss : [ebp-4], 0x80004005
        cmp dword ptr ss : [ebp+0xC], 0
        jne public_6d13c9d
        mov dword ptr ss : [ebp-0x18], 0
        mov dword ptr ss : [ebp-0x14], 0
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x12C
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0x14]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d13c7b
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        je public_6d13c9b
        public_6d13c7b : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov al, byte ptr ds : [edx+0x10]
        or al, 2
        mov ecx, dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [ecx+0x10], al
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ecx+0xC], edx
        public_6d13c9b : nop
        jmp public_6d13d1a
        public_6d13c9d : nop
        cmp dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        jne public_6d13cb0
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x140
        mov dword ptr ss : [ebp-8], eax
        jmp public_6d13cb6
        public_6d13cb0 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], ecx
        public_6d13cb6 : nop
        cmp dword ptr ss : [ebp-8], 0
        je public_6d13d1a
        mov edx, dword ptr ss : [ebp-8]
        xor eax, eax
        cmp dword ptr ds : [edx+4], 0
        setne al
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d13d1a
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x12C
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp-8]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d13cf2
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, dword ptr ds : [edx+0xC]
        je public_6d13d13
        public_6d13cf2 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dl, byte ptr ds : [ecx+0x10]
        or dl, 2
        mov eax, dword ptr ss : [ebp-0x1C]
        mov byte ptr ds : [eax+0x10], dl
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax+0xC], ecx
        public_6d13d13 : nop
        mov dword ptr ss : [ebp-4], 0
        public_6d13d1a : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d13d1d : nop
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d13bce)
    }
}

#undef public_6d13c3f
#undef public_6d13c7b
#undef public_6d13c9b
#undef public_6d13c9d
#undef public_6d13cb0
#undef public_6d13cb6
#undef public_6d13cf2
#undef public_6d13d13
#undef public_6d13d1a
#undef public_6d13d1d
