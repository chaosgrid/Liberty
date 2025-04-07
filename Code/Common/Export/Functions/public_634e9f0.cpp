#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_634e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_634f320);
CLANG_FORWARD_PROC_SYMBOL(public_6352cf0);

#define public_634ea1d _public_634ea1d
#define public_634ea35 _public_634ea35
#define public_634ea4e _public_634ea4e
#define public_634ea81 _public_634ea81
#define public_634ea95 _public_634ea95
#define public_634eaa5 _public_634eaa5
#define public_634eae5 _public_634eae5

PROC_DECLARE(0x634e9f0, internal_634e9f0, public_634e9f0);
extern "C" NAKED register_t __cdecl internal_634e9f0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x14]
        and eax, 0xFFCFFFFF
        or eax, 0xC0000
        mov ebp, ecx
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+0x74], ecx
        mov eax, dword ptr ds : [esi+0x74]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ds : [esi+0x78], ecx
        je public_634ea1d
        mov dword ptr ds : [eax+0x78], esi
        public_634ea1d : nop
        mov edx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [edx+0x20]
        cmp eax, ecx
        push ebx
        push edi
        lea edi, ds:[esi+0x18]
        lea ebx, ds:[esi+0x34]
        mov dword ptr ds : [edi+8], eax
        je public_634ea35
        mov dword ptr ds : [eax+0xC], edi
        public_634ea35 : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [edi+0xC], ecx
        mov dword ptr ds : [eax+0x20], edi
        mov edx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [edx+0x20]
        cmp eax, ecx
        mov dword ptr ds : [ebx+8], eax
        je public_634ea4e
        mov dword ptr ds : [eax+0xC], ebx
        public_634ea4e : nop
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [eax+0x20], ebx
        mov ecx, esi
        mov dword ptr ss : [ebp+8], esi
        call public_6352cf0
        mov ecx, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [ecx+0x98]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        jne public_634ea81
        mov eax, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [eax+0x98]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_634eaa5
        public_634ea81 : nop
        mov dx, word ptr ss : [ebp+0xE]
        cmp dx, word ptr ss : [ebp+0xC]
        lea edi, ss:[ebp+0xC]
        jb public_634ea95
        mov ecx, edi
        call public_63441a0
        public_634ea95 : nop
        mov ecx, dword ptr ds : [edi+4]
        xor eax, eax
        mov ax, word ptr ds : [edi+2]
        mov dword ptr ds : [ecx+eax*4], esi
        inc word ptr ds : [edi+2]
        public_634eaa5 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test ah, 0xC0
        pop edi
        pop ebx
        jne public_634eae5
        mov edx, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [edx+0x98]
        mov edx, dword ptr ds : [ecx+0x98]
        mov eax, dword ptr ds : [eax+0x60]
        or eax, dword ptr ds : [edx+0x60]
        xor ecx, ecx
        shl eax, 0x18
        cmp eax, 0x21000000
        setl cl
        push 0
        mov eax, ecx
        push eax
        mov ecx, esi
        call public_634f320
        pop esi
        pop ebp
        ret 4
        public_634eae5 : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x634e9f0)
    }
}

#undef public_634ea1d
#undef public_634ea35
#undef public_634ea4e
#undef public_634ea81
#undef public_634ea95
#undef public_634eaa5
#undef public_634eae5
