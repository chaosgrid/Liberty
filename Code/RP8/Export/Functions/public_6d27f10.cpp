#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2f8);

#define public_6d27f35 _public_6d27f35
#define public_6d27f47 _public_6d27f47
#define public_6d27fa3 _public_6d27fa3
#define public_6d27fd0 _public_6d27fd0
#define public_6d27fd9 _public_6d27fd9

PROC_DECLARE(0x6d27f10, internal_6d27f10, public_6d27f10);
extern "C" NAKED register_t __cdecl internal_6d27f10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x48
        push edi
        mov dword ptr ss : [ebp-0x40], ecx
        mov eax, dword ptr ss : [ebp-0x40]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-0x38], ecx
        mov edx, dword ptr ss : [ebp-0x38]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d27f35
        mov dword ptr ss : [ebp-0x44], 0
        jmp public_6d27f47
        public_6d27f35 : nop
        mov eax, dword ptr ss : [ebp-0x38]
        mov ecx, dword ptr ss : [ebp-0x38]
        mov edx, dword ptr ds : [eax+8]
        sub edx, dword ptr ds : [ecx+4]
        sar edx, 5
        mov dword ptr ss : [ebp-0x44], edx
        public_6d27f47 : nop
        mov eax, dword ptr ss : [ebp-0x44]
        cmp eax, dword ptr ss : [ebp+8]
        ja public_6d27fa3
        mov cl, byte ptr ss : [ebp-0x2D]
        mov byte ptr ss : [ebp-0x2C], cl
        push 0
        lea ecx, ss:[ebp-0x2C]
        call dword ptr ds : [public_6d5e0a4]
        mov edi, offset public_6d6c0f0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        push ecx
/*FIXUP push offset public_6d6c0f0 @0x6d27f72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c0f0
        lea ecx, ss:[ebp-0x2C]
        call dword ptr ds : [public_6d5e078]
        lea edx, ss:[ebp-0x2C]
        push edx
        lea ecx, ss:[ebp-0x1C]
        call dword ptr ds : [public_6d5e074]
        mov eax, dword ptr ds : [public_6d5e06c]
        mov dword ptr ss : [ebp-0x1C], eax
/*FIXUP push offset public_6d628c0 @0x6d27f95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d628c0
        lea ecx, ss:[ebp-0x1C]
        push ecx
        call public_6d2f2f8
        public_6d27fa3 : nop
        mov edx, dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x34], eax
        mov ecx, dword ptr ss : [ebp+8]
        shl ecx, 5
        mov edx, dword ptr ss : [ebp-0x34]
        lea eax, ds:[edx+ecx+0x10]
        mov dword ptr ss : [ebp-0x3C], eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d27fd0
        mov edx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x48], edx
        jmp public_6d27fd9
        public_6d27fd0 : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x48], ecx
        public_6d27fd9 : nop
        mov eax, dword ptr ss : [ebp-0x48]
        pop edi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d27f10)
    }
}

#undef public_6d27f35
#undef public_6d27f47
#undef public_6d27fa3
#undef public_6d27fd0
#undef public_6d27fd9
