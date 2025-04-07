#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414640);
CLANG_FORWARD_PROC_SYMBOL(public_4159a0);

#define public_4159d0 _public_4159d0
#define public_4159e4 _public_4159e4
#define public_4159f0 _public_4159f0
#define public_4159fb _public_4159fb
#define public_415a02 _public_415a02
#define public_415a0f _public_415a0f
#define public_415a30 _public_415a30
#define public_415a5e _public_415a5e
#define public_415a6d _public_415a6d

PROC_DECLARE(0x4159a0, internal_4159a0, public_4159a0);
extern "C" NAKED register_t __cdecl internal_4159a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        je public_415a0f
        cmp word ptr ds : [eax], bx
        je public_415a0f
        push eax
        call dword ptr ds : [public_5c71d8]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov ecx, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, ecx
        add esp, 4
        cmp eax, ecx
        je public_4159e4
        public_4159d0 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        add eax, 8
        add edi, 8
        cmp eax, ecx
        jne public_4159d0
        public_4159e4 : nop
        push ebp
        mov ebp, dword ptr ds : [esi+0x14]
        cmp edi, ebp
        mov ebx, edi
        je public_415a02
        mov edi, edi
        public_4159f0 : nop
        mov ecx, dword ptr ds : [ebx]
        test ecx, ecx
        je public_4159fb
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_4159fb : nop
        add ebx, 8
        cmp ebx, ebp
        jne public_4159f0
        public_415a02 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x28], 0
        xor ebx, ebx
        pop ebp
        public_415a0f : nop
        push 1
        push ebx
        mov ecx, esi
        call public_414640
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        add esp, 8
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        xor edi, edi
        nop 
        public_415a30 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        je public_415a6d
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jae public_415a6d
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+edi*8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x20]
        jbe public_415a5e
        mov dword ptr ds : [esi+0x20], eax
        public_415a5e : nop
        mov edx, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        add edx, ecx
        mov dword ptr ds : [esi+0x24], edx
        inc edi
        jmp public_415a30
        public_415a6d : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x4159a0)
    }
}

#undef public_4159d0
#undef public_4159e4
#undef public_4159f0
#undef public_4159fb
#undef public_415a02
#undef public_415a0f
#undef public_415a30
#undef public_415a5e
#undef public_415a6d
