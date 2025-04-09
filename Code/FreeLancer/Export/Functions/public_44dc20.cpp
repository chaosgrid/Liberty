#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44dc20);
CLANG_FORWARD_PROC_SYMBOL(public_4507a0);
CLANG_FORWARD_PROC_SYMBOL(public_450830);
CLANG_FORWARD_PROC_SYMBOL(public_450c60);
CLANG_FORWARD_PROC_SYMBOL(public_456790);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9cf1);

#define public_44dc82 _public_44dc82
#define public_44dc8c _public_44dc8c
#define public_44dcd3 _public_44dcd3
#define public_44dd4a _public_44dd4a
#define public_44dd62 _public_44dd62
#define public_44dd64 _public_44dd64
#define public_44dd67 _public_44dd67

PROC_DECLARE(0x44dc20, internal_44dc20, public_44dc20);
extern "C" NAKED register_t __cdecl internal_44dc20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b9cf1 @0x44dc28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9cf1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ebx+0x38]
        push ebp
        push esi
        push edi
        push eax
        mov esi, ecx
        push 3
        mov ecx, offset public_66d2d0
        call public_456790
        mov ebp, eax
        xor edi, edi
        cmp ebp, edi
        je public_44dc8c
        push 0x70
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x34], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], edi
        je public_44dc82
        push ebx
        push esi
        push esi
        mov ecx, eax
        call public_450c60
        mov dword ptr ds : [eax+0x6C], ebp
        jmp public_44dd67
        public_44dc82 : nop
        xor eax, eax
        mov dword ptr ds : [eax+0x6C], ebp
        jmp public_44dd67
        public_44dc8c : nop
        mov edx, dword ptr ds : [esi+0xA4]
        mov ecx, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [ebx+0x38]
        mov ecx, dword ptr ds : [ecx+0x40]
        push edx
        push eax
        call dword ptr ds : [public_5c6250]
        push 0x70
        mov ebp, eax
        call public_5b7e84
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x34], eax
        je public_44dd4a
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], 1
        je public_44dcd3
        push ebx
        push esi
        push esi
        mov ecx, eax
        call public_4507a0
        mov edi, eax
        public_44dcd3 : nop
        mov ecx, dword ptr ds : [esi+0x58]
        mov edx, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [edx+0x500]
        push 0
        push ecx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_450830
        add ebx, 0x44
        mov ecx, ebx
        mov ebx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[ebp+4]
        lea esi, ds:[edi+0xC]
        push eax
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x24], ecx
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [esi]
        add ebp, 0x10
        push ebp
        push esi
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [edi+0x10]
        lea esi, ds:[edi+0x10]
        push ebx
        push esi
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi]
        push eax
        push esi
        call dword ptr ds : [edx+0x1C]
        mov eax, edi
        jmp public_44dd67
        public_44dd4a : nop
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], 2
        je public_44dd62
        push ebx
        push esi
        push esi
        mov ecx, eax
        call public_450c60
        jmp public_44dd64
        public_44dd62 : nop
        xor eax, eax
        public_44dd64 : nop
        mov dword ptr ds : [eax+0x6C], edi
        public_44dd67 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x44dc20)
    }
}

#undef public_44dc82
#undef public_44dc8c
#undef public_44dcd3
#undef public_44dd4a
#undef public_44dd62
#undef public_44dd64
#undef public_44dd67
