#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecaa00);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc4e0);

#define public_6eccf9e _public_6eccf9e
#define public_6eccfe0 _public_6eccfe0
#define public_6ecd000 _public_6ecd000
#define public_6ecd010 _public_6ecd010
#define public_6ecd021 _public_6ecd021
#define public_6ecd040 _public_6ecd040
#define public_6ecd04d _public_6ecd04d
#define public_6ecd055 _public_6ecd055
#define public_6ecd05f _public_6ecd05f
#define public_6ecd066 _public_6ecd066
#define public_6ecd06a _public_6ecd06a

PROC_DECLARE(0x6eccf90, internal_6eccf90, public_6eccf90);
extern "C" NAKED register_t __cdecl internal_6eccf90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        jne public_6eccf9e
        or eax, eax
        ret 0xC
        public_6eccf9e : nop
        test eax, eax
        push ebx
        push esi
        push edi
        je public_6ecd010
        mov ebx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[ebx+0x28]
        call public_6ecaa00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0x2C]
        je public_6ecd06a
        mov edi, dword ptr ds : [eax+0x1C]
        mov esi, dword ptr ds : [eax+0x18]
        cmp esi, edi
        je public_6ecd06a
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        nop 
        lea esp, ss:[esp]
        public_6eccfe0 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], edx
        call public_6ecc4e0
        test eax, eax
        je public_6ecd000
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_6ecd000 : nop
        add esi, 4
        cmp esi, edi
        jne public_6eccfe0
        pop ebp
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        public_6ecd010 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edx+0x18]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6ecd06a
        mov edi, dword ptr ss : [esp+0x18]
        public_6ecd021 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x19]
        test cl, cl
        jne public_6ecd04d
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x19]
        test cl, cl
        jne public_6ecd066
        public_6ecd040 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x19]
        test cl, cl
        je public_6ecd040
        jmp public_6ecd066
        public_6ecd04d : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ecd05f
        public_6ecd055 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6ecd055
        public_6ecd05f : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6ecd066
        mov esi, eax
        public_6ecd066 : nop
        cmp esi, ebx
        jne public_6ecd021
        public_6ecd06a : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eccf90)
    }
}

#undef public_6eccf9e
#undef public_6eccfe0
#undef public_6ecd000
#undef public_6ecd010
#undef public_6ecd021
#undef public_6ecd040
#undef public_6ecd04d
#undef public_6ecd055
#undef public_6ecd05f
#undef public_6ecd066
#undef public_6ecd06a
