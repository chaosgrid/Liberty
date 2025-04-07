#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf65b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0bbc0);

#define public_6d0bbd0 _public_6d0bbd0
#define public_6d0bbd9 _public_6d0bbd9
#define public_6d0bbdb _public_6d0bbdb
#define public_6d0bc03 _public_6d0bc03
#define public_6d0bc05 _public_6d0bc05
#define public_6d0bc82 _public_6d0bc82
#define public_6d0bc94 _public_6d0bc94
#define public_6d0bc9b _public_6d0bc9b

PROC_DECLARE(0x6d0bbc0, internal_6d0bbc0, public_6d0bbc0);
extern "C" NAKED register_t __cdecl internal_6d0bbc0()
{
    __asm
    {
        sub esp, 0x2C
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x3C]
        mov ebp, ecx
        xor ecx, ecx
        mov edi, edi
        public_6d0bbd0 : nop
        test ecx, ecx
        jne public_6d0bbd9
        mov ecx, dword ptr ss : [ebp+0x38]
        jmp public_6d0bbdb
        public_6d0bbd9 : nop
        mov ecx, dword ptr ds : [ecx]
        public_6d0bbdb : nop
        test ecx, ecx
        je public_6d0bc9b
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_6d0bc03
        add eax, 0xC
        test eax, eax
        je public_6d0bc03
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d0bc03
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d0bc05
        public_6d0bc03 : nop
        xor eax, eax
        public_6d0bc05 : nop
        mov edx, dword ptr ds : [eax+0xB0]
        cmp edx, dword ptr ds : [edi]
        jne public_6d0bbd0
        mov ecx, dword ptr ds : [edi+0x24]
        mov edx, dword ptr ds : [edi+0x20]
        push ebx
        push ecx
        push edx
        lea esi, ds:[edi+4]
        push esi
        lea ebx, ds:[edi+0x14]
        push ebx
        push eax
        call dword ptr ds : [public_6d646c8]
        fld qword ptr ds : [edi+0x20]
        mov al, byte ptr ds : [edi+0x2C]
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi]
        mov byte ptr ss : [esp+0x4C], al
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        mov esi, dword ptr ds : [eax]
        add esp, 0x14
        cmp esi, eax
        pop ebx
        je public_6d0bc9b
        mov edi, dword ptr ss : [esp+0x40]
        public_6d0bc82 : nop
        cmp dword ptr ds : [esi+0x40], edi
        je public_6d0bc94
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ds:[esi+8]
        call public_6cf65b0
        public_6d0bc94 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0xC]
        jne public_6d0bc82
        public_6d0bc9b : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x2C
        ret 8
        UNREACHABLE_TRAP(0x6d0bbc0)
    }
}

#undef public_6d0bbd0
#undef public_6d0bbd9
#undef public_6d0bbdb
#undef public_6d0bc03
#undef public_6d0bc05
#undef public_6d0bc82
#undef public_6d0bc94
#undef public_6d0bc9b
