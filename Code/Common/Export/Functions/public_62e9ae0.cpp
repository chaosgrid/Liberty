#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e9ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62e9b00 _public_62e9b00
#define public_62e9b02 _public_62e9b02
#define public_62e9b1b _public_62e9b1b
#define public_62e9b3b _public_62e9b3b
#define public_62e9b3d _public_62e9b3d
#define public_62e9b4a _public_62e9b4a
#define public_62e9b55 _public_62e9b55
#define public_62e9b57 _public_62e9b57
#define public_62e9b68 _public_62e9b68
#define public_62e9b6a _public_62e9b6a
#define public_62e9b90 _public_62e9b90
#define public_62e9b92 _public_62e9b92
#define public_62e9bb0 _public_62e9bb0
#define public_62e9bc1 _public_62e9bc1
#define public_62e9bc3 _public_62e9bc3
#define public_62e9be8 _public_62e9be8
#define public_62e9bf0 _public_62e9bf0

PROC_DECLARE(0x62e9ae0, internal_62e9ae0, public_62e9ae0);
extern "C" NAKED register_t __cdecl internal_62e9ae0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        test ebp, ebp
        push esi
        mov esi, ecx
        je public_62e9bf0
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        push edi
        lea edi, ds:[esi+8]
        je public_62e9b00
        add eax, 0xFFFFFFF8
        jmp public_62e9b02
        public_62e9b00 : nop
        xor eax, eax
        public_62e9b02 : nop
        cmp ebp, eax
        je public_62e9be8
        mov ecx, dword ptr ds : [edi]
        lea eax, ss:[ebp+8]
        cmp eax, ecx
        je public_62e9b1b
        push eax
        mov ecx, edi
        call public_6341610
        public_62e9b1b : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62e9b4a
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62e9b4a
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_62e9b3b
        lea ecx, ds:[eax-8]
        jmp public_62e9b3d
        public_62e9b3b : nop
        xor ecx, ecx
        public_62e9b3d : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x88]
        public_62e9b4a : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        je public_62e9b55
        lea edx, ds:[edi-8]
        jmp public_62e9b57
        public_62e9b55 : nop
        xor edx, edx
        public_62e9b57 : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9b68
        add eax, 0xFFFFFFF8
        jmp public_62e9b6a
        public_62e9b68 : nop
        xor eax, eax
        public_62e9b6a : nop
        xor edi, edi
        mov di, word ptr ds : [public_63a4aa4]
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edi
        push edx
        call dword ptr ds : [eax+0x48]
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9b90
        lea ecx, ds:[eax-8]
        jmp public_62e9b92
        public_62e9b90 : nop
        xor ecx, ecx
        public_62e9b92 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62e9be8
        mov eax, dword ptr ds : [esi+0x830]
        xor edi, edi
        test eax, eax
        jbe public_62e9be8
        push ebx
        lea ebx, ds:[esi+0x30]
        mov edi, edi
        public_62e9bb0 : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9bc1
        add eax, 0xFFFFFFF8
        jmp public_62e9bc3
        public_62e9bc1 : nop
        xor eax, eax
        public_62e9bc3 : nop
        xor edx, edx
        mov dx, word ptr ds : [public_63a4aa4]
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebp
        push ebx
        call dword ptr ds : [eax+0x44]
        mov eax, dword ptr ds : [esi+0x830]
        inc edi
        add ebx, 0x20
        cmp edi, eax
        jb public_62e9bb0
        pop ebx
        public_62e9be8 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 4
        public_62e9bf0 : nop
        pop esi
        xor al, al
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x62e9ae0)
    }
}

#undef public_62e9b00
#undef public_62e9b02
#undef public_62e9b1b
#undef public_62e9b3b
#undef public_62e9b3d
#undef public_62e9b4a
#undef public_62e9b55
#undef public_62e9b57
#undef public_62e9b68
#undef public_62e9b6a
#undef public_62e9b90
#undef public_62e9b92
#undef public_62e9bb0
#undef public_62e9bc1
#undef public_62e9bc3
#undef public_62e9be8
#undef public_62e9bf0
