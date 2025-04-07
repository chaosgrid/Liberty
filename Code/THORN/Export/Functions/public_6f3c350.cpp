#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c350);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fcc0);

#define public_6f3c364 _public_6f3c364
#define public_6f3c37a _public_6f3c37a
#define public_6f3c37e _public_6f3c37e
#define public_6f3c383 _public_6f3c383
#define public_6f3c39b _public_6f3c39b
#define public_6f3c3aa _public_6f3c3aa
#define public_6f3c3c8 _public_6f3c3c8
#define public_6f3c3de _public_6f3c3de

PROC_DECLARE(0x6f3c350, internal_6f3c350, public_6f3c350);
extern "C" NAKED register_t __cdecl internal_6f3c350()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, eax
        je public_6f3c383
        public_6f3c364 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_6f3fcc0
        test eax, eax
        jge public_6f3c37a
        mov esi, dword ptr ds : [esi+8]
        jmp public_6f3c37e
        public_6f3c37a : nop
        mov edi, esi
        mov esi, dword ptr ds : [esi]
        public_6f3c37e : nop
        cmp esi, dword ptr ss : [ebp+8]
        jne public_6f3c364
        public_6f3c383 : nop
        cmp edi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x10], edi
        je public_6f3c3de
        mov ebx, dword ptr ds : [edi+0x14]
        mov edi, dword ptr ds : [edi+0x10]
        test edi, edi
        jne public_6f3c39b
        mov edi, offset public_6f5af04
        public_6f3c39b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+8]
        cmp esi, ebx
        mov ecx, esi
        jb public_6f3c3aa
        mov ecx, ebx
        public_6f3c3aa : nop
        mov eax, dword ptr ds : [eax+4]
        push ecx
        push edi
        push eax
        call dword ptr ds : [public_6f5a08c]
        add esp, 0xC
        test eax, eax
        jne public_6f3c3c8
        cmp esi, ebx
        jb public_6f3c3de
        cmp esi, ebx
        setne al
        test eax, eax
        public_6f3c3c8 : nop
        jl public_6f3c3de
        pop edi
        lea eax, ss:[esp+0xC]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6f3c3de : nop
        mov ecx, dword ptr ss : [ebp+4]
        pop edi
        lea eax, ss:[esp+0x18]
        pop esi
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3c350)
    }
}

#undef public_6f3c364
#undef public_6f3c37a
#undef public_6f3c37e
#undef public_6f3c383
#undef public_6f3c39b
#undef public_6f3c3aa
#undef public_6f3c3c8
#undef public_6f3c3de
