#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d158da);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d158f8 _public_6d158f8
#define public_6d15916 _public_6d15916
#define public_6d15951 _public_6d15951
#define public_6d15962 _public_6d15962
#define public_6d15969 _public_6d15969
#define public_6d1599b _public_6d1599b

PROC_DECLARE(0x6d158da, internal_6d158da, public_6d158da);
extern "C" NAKED register_t __cdecl internal_6d158da()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov dword ptr ss : [ebp-8], 0
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x10], eax
        cmp dword ptr ss : [ebp-0x10], 1
        je public_6d158f8
        jmp public_6d1599b
        public_6d158f8 : nop
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call dword ptr ds : [public_6d5e044]
        call dword ptr ds : [public_6d5e014]
        mov dword ptr ss : [ebp-8], eax
        cmp dword ptr ss : [ebp-8], 0
        jne public_6d15916
        jmp public_6d1599b
        public_6d15916 : nop
        push 0xC
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d15962
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+4], 1
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+8], offset public_6d6acf0
        mov ecx, offset public_6d6acf0
        test ecx, ecx
        jne public_6d15951
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [public_6d5e4c8]
        mov dword ptr ds : [edx+8], eax
        public_6d15951 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx], offset public_6d5e4b8
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x14], edx
        jmp public_6d15969
        public_6d15962 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_6d15969 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d1599b
        push 0x40000000
/*FIXUP push offset public_6d6acfc @0x6d1597a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6acfc
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        call dword ptr ds : [eax+8]
        public_6d1599b : nop
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d158da)
    }
}

#undef public_6d158f8
#undef public_6d15916
#undef public_6d15951
#undef public_6d15962
#undef public_6d15969
#undef public_6d1599b
