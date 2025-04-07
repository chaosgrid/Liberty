#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4a331);

#define public_6d4a34f _public_6d4a34f
#define public_6d4a36c _public_6d4a36c
#define public_6d4a37a _public_6d4a37a
#define public_6d4a37e _public_6d4a37e
#define public_6d4a39c _public_6d4a39c
#define public_6d4a3d8 _public_6d4a3d8
#define public_6d4a3ec _public_6d4a3ec
#define public_6d4a415 _public_6d4a415
#define public_6d4a427 _public_6d4a427
#define public_6d4a44b _public_6d4a44b
#define public_6d4a466 _public_6d4a466
#define public_6d4a47c _public_6d4a47c

PROC_DECLARE(0x6d4a331, internal_6d4a331, public_6d4a331);
extern "C" NAKED register_t __cdecl internal_6d4a331()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x24
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [esi+0x118]
        mov eax, dword ptr ds : [esi+0x184]
        dec ebx
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp-0x24], ebx
        public_6d4a34f : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov ecx, dword ptr ds : [esi+0x84]
        cmp eax, ecx
        jl public_6d4a36c
        jne public_6d4a37e
        mov eax, dword ptr ds : [esi+0x80]
        cmp eax, dword ptr ds : [esi+0x88]
        ja public_6d4a37e
        public_6d4a36c : nop
        mov eax, dword ptr ds : [esi+0x18C]
        push esi
        call dword ptr ds : [eax]
        test eax, eax
        pop ecx
        jne public_6d4a34f
        public_6d4a37a : nop
        pop esi
        pop ebx
        leave 
        ret 
        public_6d4a37e : nop
        and dword ptr ss : [ebp-4], 0
        cmp dword ptr ds : [esi+0x20], 0
        push edi
        mov edi, dword ptr ds : [esi+0xC4]
        jle public_6d4a47c
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x48
        mov dword ptr ss : [ebp-0x14], eax
        public_6d4a39c : nop
        cmp byte ptr ds : [edi+0x30], 0
        je public_6d4a466
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [esi+0x88]
        mov ecx, dword ptr ds : [esi+4]
        imul edx, eax
        push 0
        push eax
        mov eax, dword ptr ss : [ebp-0x14]
        push edx
        push dword ptr ds : [eax]
        push esi
        call dword ptr ds : [ecx+0x20]
        add esp, 0x14
        cmp dword ptr ds : [esi+0x88], ebx
        mov dword ptr ss : [ebp-0x1C], eax
        jae public_6d4a3d8
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+8], eax
        jmp public_6d4a3ec
        public_6d4a3d8 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edi+0x20]
        xor edx, edx
        div ecx
        test edx, edx
        mov dword ptr ss : [ebp+8], edx
        jne public_6d4a3ec
        mov dword ptr ss : [ebp+8], ecx
        public_6d4a3ec : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [esi+0x198]
        shl eax, 2
        mov ecx, dword ptr ds : [ecx+eax+4]
        mov dword ptr ss : [ebp-0x20], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [eax+ecx]
        xor ecx, ecx
        cmp dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp-0x10], eax
        mov dword ptr ss : [ebp-0x18], ecx
        jle public_6d4a466
        mov eax, dword ptr ds : [edi+0x1C]
        public_6d4a415 : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [edx+ecx*4]
        xor ebx, ebx
        and dword ptr ss : [ebp-0xC], ebx
        test eax, eax
        mov dword ptr ss : [ebp-8], ecx
        jbe public_6d4a44b
        public_6d4a427 : nop
        push ebx
        push dword ptr ss : [ebp-0x10]
        push dword ptr ss : [ebp-8]
        push edi
        push esi
        call dword ptr ss : [ebp-0x20]
        add dword ptr ss : [ebp-8], 0x80
        add ebx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [edi+0x1C]
        add esp, 0x14
        inc dword ptr ss : [ebp-0xC]
        cmp dword ptr ss : [ebp-0xC], eax
        jb public_6d4a427
        public_6d4a44b : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [edi+0x24]
        lea ecx, ds:[edx+ecx*4]
        mov dword ptr ss : [ebp-0x10], ecx
        mov ecx, dword ptr ss : [ebp-0x18]
        inc ecx
        cmp ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x18], ecx
        jl public_6d4a415
        mov ebx, dword ptr ss : [ebp-0x24]
        public_6d4a466 : nop
        inc dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-0x14], 4
        add edi, 0x54
        cmp eax, dword ptr ds : [esi+0x20]
        jl public_6d4a39c
        public_6d4a47c : nop
        lea eax, ds:[esi+0x88]
        inc dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x118]
        pop edi
        sbb eax, eax
        add eax, 4
        jmp public_6d4a37a
        UNREACHABLE_TRAP(0x6d4a331)
    }
}

#undef public_6d4a34f
#undef public_6d4a36c
#undef public_6d4a37a
#undef public_6d4a37e
#undef public_6d4a39c
#undef public_6d4a3d8
#undef public_6d4a3ec
#undef public_6d4a415
#undef public_6d4a427
#undef public_6d4a44b
#undef public_6d4a466
#undef public_6d4a47c
