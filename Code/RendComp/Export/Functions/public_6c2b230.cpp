#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2b230);
CLANG_FORWARD_PROC_SYMBOL(public_6c2b3c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2c640);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2b2bb _public_6c2b2bb
#define public_6c2b2c0 _public_6c2b2c0
#define public_6c2b2d9 _public_6c2b2d9
#define public_6c2b2db _public_6c2b2db
#define public_6c2b2f4 _public_6c2b2f4
#define public_6c2b30c _public_6c2b30c
#define public_6c2b320 _public_6c2b320
#define public_6c2b347 _public_6c2b347

PROC_DECLARE(0x6c2b230, internal_6c2b230, public_6c2b230);
extern "C" NAKED register_t __cdecl internal_6c2b230()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_6c2b3c0
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        xor ebp, ebp
        mov dword ptr ds : [esi+0x10], eax
        lea edx, ds:[esi+0x44]
        mov dword ptr ds : [esi+0x14], ecx
        xor eax, eax
        mov ecx, 0x1C
        mov edi, edx
        mov byte ptr ds : [esi+0xB8], 0
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0x18], 0x3FC00000
        mov dword ptr ds : [esi+0x28], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x24], ebp
        mov dword ptr ds : [esi+0x1C], 3
        mov dword ptr ds : [esi+0x20], 9
        mov dword ptr ds : [esi+0xB4], ebp
        rep stosd
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebp
        mov dword ptr ds : [esi+0xAC], 0x112
        mov dword ptr ds : [edx], ebp
        mov dword ptr ds : [esi+0xC], 0x3F800000
        je public_6c2b347
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0xC], edx
        cmp dword ptr ds : [eax+8], ebp
        mov dword ptr ss : [esp+0x10], ebp
        jbe public_6c2b347
        push ebx
        jmp public_6c2b2c0
        public_6c2b2bb : nop
        xor ebp, ebp
        lea ecx, ds:[ecx]
        public_6c2b2c0 : nop
        push 0x14
        call public_6c34eac
        add esp, 4
        cmp eax, ebp
        je public_6c2b2d9
        mov ecx, eax
        call public_6c2c640
        mov ebx, eax
        jmp public_6c2b2db
        public_6c2b2d9 : nop
        xor ebx, ebx
        public_6c2b2db : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+edx*4]
        cmp eax, ebp
        mov dword ptr ds : [ebx], eax
        je public_6c2b2f4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6c2b2f4 : nop
        mov edi, dword ptr ds : [esi+0x30]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6c34eac
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6c2b30c
        mov ebp, eax
        public_6c2b30c : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6c2b320
        mov dword ptr ds : [eax], ebx
        public_6c2b320 : nop
        mov ebx, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ss : [esp+0x14]
        inc ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ecx+8]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], eax
        jb public_6c2b2bb
        cmp eax, 6
        pop ebx
        jbe public_6c2b347
        mov byte ptr ds : [esi+0xB8], 1
        public_6c2b347 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6c2b230)
    }
}

#undef public_6c2b2bb
#undef public_6c2b2c0
#undef public_6c2b2d9
#undef public_6c2b2db
#undef public_6c2b2f4
#undef public_6c2b30c
#undef public_6c2b320
#undef public_6c2b347
