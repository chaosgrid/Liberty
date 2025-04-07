#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40120);

#define public_6f40137 _public_6f40137
#define public_6f40153 _public_6f40153
#define public_6f40157 _public_6f40157
#define public_6f40177 _public_6f40177
#define public_6f4017f _public_6f4017f
#define public_6f40185 _public_6f40185
#define public_6f40192 _public_6f40192
#define public_6f40195 _public_6f40195
#define public_6f4019e _public_6f4019e

PROC_DECLARE(0x6f40120, internal_6f40120, public_6f40120);
extern "C" NAKED register_t __cdecl internal_6f40120()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        cmp ebp, ecx
        je public_6f4019e
        lea ebx, ss:[ebp+4]
        cmp ebx, ecx
        je public_6f4019e
        push esi
        push edi
        public_6f40137 : nop
        mov esi, dword ptr ds : [ebx]
        test esi, esi
        je public_6f40153
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_6f40153
        mov edi, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi+8]
        cmp edx, edi
        setb al
        test al, al
        jne public_6f4017f
        public_6f40153 : nop
        mov edi, ebx
        mov ecx, ebx
        public_6f40157 : nop
        sub ecx, 4
        test esi, esi
        je public_6f40177
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_6f40177
        mov edx, dword ptr ds : [esi+8]
        cmp edx, dword ptr ds : [eax+8]
        setb dl
        test dl, dl
        je public_6f40177
        mov dword ptr ds : [edi], eax
        mov edi, ecx
        jmp public_6f40157
        public_6f40177 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi], esi
        jmp public_6f40195
        public_6f4017f : nop
        cmp ebp, ebx
        mov eax, ebx
        je public_6f40192
        public_6f40185 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ebp
        mov dword ptr ds : [eax+4], edx
        jne public_6f40185
        public_6f40192 : nop
        mov dword ptr ss : [ebp], esi
        public_6f40195 : nop
        add ebx, 4
        cmp ebx, ecx
        jne public_6f40137
        pop edi
        pop esi
        public_6f4019e : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f40120)
    }
}

#undef public_6f40137
#undef public_6f40153
#undef public_6f40157
#undef public_6f40177
#undef public_6f4017f
#undef public_6f40185
#undef public_6f40192
#undef public_6f40195
#undef public_6f4019e
