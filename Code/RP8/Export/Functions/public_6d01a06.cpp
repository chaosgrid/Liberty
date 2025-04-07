#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01a06);

#define public_6d01a47 _public_6d01a47
#define public_6d01a71 _public_6d01a71
#define public_6d01a88 _public_6d01a88
#define public_6d01ab0 _public_6d01ab0

PROC_DECLARE(0x6d01a06, internal_6d01a06, public_6d01a06);
extern "C" NAKED register_t __cdecl internal_6d01a06()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        push edi
        mov dword ptr ss : [ebp-8], ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x10], 0
        je public_6d01a71
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+0x10]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        test ecx, ecx
        jbe public_6d01a71
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x10]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 0x24
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x14], edx
        public_6d01a47 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov cl, byte ptr ds : [eax]
        mov byte ptr ss : [ebp-0x15], cl
        mov edx, dword ptr ss : [ebp-0x10]
        mov al, byte ptr ss : [ebp-0x15]
        mov byte ptr ds : [edx], al
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 1
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        add edx, 1
        mov dword ptr ss : [ebp-0x10], edx
        cmp byte ptr ss : [ebp-0x15], 0
        jne public_6d01a47
        jmp public_6d01ab0
        public_6d01a71 : nop
        mov eax, dword ptr ds : [public_6d640a4]
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 0x24
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x24], edx
        public_6d01a88 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        mov cl, byte ptr ds : [eax]
        mov byte ptr ss : [ebp-0x25], cl
        mov edx, dword ptr ss : [ebp-0x20]
        mov al, byte ptr ss : [ebp-0x25]
        mov byte ptr ds : [edx], al
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 1
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        add edx, 1
        mov dword ptr ss : [ebp-0x20], edx
        cmp byte ptr ss : [ebp-0x25], 0
        jne public_6d01a88
        public_6d01ab0 : nop
        mov eax, 3
        and eax, 0xF
        mov ecx, dword ptr ss : [ebp-4]
        and ecx, 0xFFFFFFF0
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
        mov edx, 0x10000
        and edx, 0xFFFFFFF
        shl edx, 4
        mov eax, dword ptr ss : [ebp-4]
        and eax, 0xF
        or eax, edx
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, 0x24
        push ecx
        push 0x2FB
/*FIXUP push offset public_6d64120 @0x6d01ae8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64120
/*FIXUP push offset public_6d6416c @0x6d01aed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6416c
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        pop edi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d01a06)
    }
}

#undef public_6d01a47
#undef public_6d01a71
#undef public_6d01a88
#undef public_6d01ab0
