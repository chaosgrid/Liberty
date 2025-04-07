#include "RP8-PCH.h"


#define public_6d49a3c _public_6d49a3c
#define public_6d49a3f _public_6d49a3f
#define public_6d49a86 _public_6d49a86
#define public_6d49a9f _public_6d49a9f
#define public_6d49ad8 _public_6d49ad8
#define public_6d49afa _public_6d49afa
#define public_6d49b0c _public_6d49b0c
#define public_6d49b16 _public_6d49b16
#define public_6d49b2e _public_6d49b2e

PROC_DECLARE(0x6d49a00, internal_6d49a00, public_6d49a00);
extern "C" NAKED register_t __cdecl internal_6d49a00()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        mov eax, dword ptr ds : [edi+0x114]
        and dword ptr ss : [ebp-0xC], 0
        cmp dword ptr ds : [edi+0x20], 0
        push ebx
        mov ebx, dword ptr ds : [edi+0x180]
        mov dword ptr ss : [ebp-0x1C], eax
        mov eax, dword ptr ds : [edi+0xC4]
        mov dword ptr ss : [ebp-0x28], ebx
        jle public_6d49b2e
        lea ecx, ds:[eax+0xC]
        lea eax, ds:[ebx+8]
        push esi
        mov dword ptr ss : [ebp-0x18], ecx
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_6d49a3f
        public_6d49a3c : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        public_6d49a3f : nop
        mov eax, dword ptr ds : [ecx+0x18]
        imul eax, dword ptr ds : [ecx]
        cdq 
        idiv dword ptr ds : [edi+0x114]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ebx+0x38]
        shl ecx, 2
        mov edx, dword ptr ds : [ecx+edx]
        mov dword ptr ss : [ebp-0x24], edx
        mov edx, dword ptr ds : [ebx+0x3C]
        mov edx, dword ptr ds : [ecx+edx]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov esi, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 2
        imul ecx, eax
        test ecx, ecx
        mov dword ptr ss : [ebp-0x20], eax
        jle public_6d49a9f
        mov ebx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-4], esi
        sub dword ptr ss : [ebp-4], edx
        mov eax, edx
        sub ebx, edx
        mov dword ptr ss : [ebp-0x10], ecx
        public_6d49a86 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ebx+eax], ecx
        add eax, 4
        dec dword ptr ss : [ebp-0x10]
        jne public_6d49a86
        mov ebx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ss : [ebp-0x20]
        public_6d49a9f : nop
        lea ecx, ds:[eax+eax]
        test ecx, ecx
        jle public_6d49afa
        mov ecx, eax
        mov eax, dword ptr ss : [ebp-0x1C]
        imul ecx, eax
        lea ecx, ds:[edx+ecx*4]
        mov dword ptr ss : [ebp-8], ecx
        lea ecx, ds:[eax-2]
        mov eax, dword ptr ss : [ebp-0x20]
        imul ecx, eax
        lea ecx, ds:[esi+ecx*4]
        mov dword ptr ss : [ebp-0x2C], ecx
        lea ecx, ds:[eax+eax]
        mov dword ptr ss : [ebp-4], esi
        sub dword ptr ss : [ebp-4], edx
        mov dword ptr ss : [ebp-0x10], edx
        sub dword ptr ss : [ebp-0x10], esi
        mov dword ptr ss : [ebp-0x20], ecx
        mov ecx, dword ptr ss : [ebp-0x2C]
        public_6d49ad8 : nop
        mov esi, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [esi+edx]
        mov esi, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [esi+ecx], edx
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ss : [ebp-8]
        add dword ptr ss : [ebp-8], 4
        add ecx, 4
        dec dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [esi], edx
        jne public_6d49ad8
        public_6d49afa : nop
        test eax, eax
        jle public_6d49b16
        mov edx, dword ptr ss : [ebp-0x24]
        mov ecx, eax
        shl ecx, 2
        mov esi, ecx
        mov ecx, edx
        sub ecx, esi
        public_6d49b0c : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], esi
        add ecx, 4
        dec eax
        jne public_6d49b0c
        public_6d49b16 : nop
        inc dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-0xC]
        add dword ptr ss : [ebp-0x14], 4
        add dword ptr ss : [ebp-0x18], 0x54
        cmp eax, dword ptr ds : [edi+0x20]
        jl public_6d49a3c
        pop esi
        public_6d49b2e : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d49a00)
    }
}

#undef public_6d49a3c
#undef public_6d49a3f
#undef public_6d49a86
#undef public_6d49a9f
#undef public_6d49ad8
#undef public_6d49afa
#undef public_6d49b0c
#undef public_6d49b16
#undef public_6d49b2e
