#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41aa50);
CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_443b60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_443b9f _public_443b9f
#define public_443ba8 _public_443ba8
#define public_443be0 _public_443be0
#define public_443c03 _public_443c03
#define public_443c10 _public_443c10
#define public_443c22 _public_443c22
#define public_443c4e _public_443c4e
#define public_443c52 _public_443c52
#define public_443c71 _public_443c71
#define public_443cb0 _public_443cb0
#define public_443cc9 _public_443cc9
#define public_443cd9 _public_443cd9
#define public_443d10 _public_443d10
#define public_443d29 _public_443d29
#define public_443d56 _public_443d56
#define public_443d82 _public_443d82
#define public_443dd7 _public_443dd7
#define public_443df5 _public_443df5
#define public_443dfe _public_443dfe
#define public_443e06 _public_443e06

PROC_DECLARE(0x443b60, internal_443b60, public_443b60);
extern "C" NAKED register_t __cdecl internal_443b60()
{
    __asm
    {
        mov eax, 0x1394
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        mov esi, 2
        xor ebp, ebp
/*FIXUP push offset public_5cb918 @0x443b75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb918
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x14], ebp
        call dword ptr ds : [public_5c61a8]
        add esp, 4
        test al, al
        je public_443b9f
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x1C], 3
        public_443b9f : nop
        lea eax, ss:[esp+0x4C]
        mov ecx, 4
        public_443ba8 : nop
        mov dword ptr ds : [eax-8], ebp
        mov dword ptr ds : [eax-4], ebp
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax+0xC], 0xFFFFFFFF
        add eax, 0x18
        dec ecx
        jne public_443ba8
        xor ecx, ecx
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x14], ecx
        lea ebx, ss:[esp+0x3A4]
        lea esi, ss:[esp+0x48]
        lea edi, ss:[esp+0xA4]
        nop 
        public_443be0 : nop
        mov eax, dword ptr ss : [esp+0x13A8]
        mov eax, dword ptr ds : [eax+ecx*4]
        cmp eax, ebp
        je public_443c71
        cmp dword ptr ds : [eax+0xC], ebp
        je public_443c71
        mov eax, dword ptr ds : [eax+8]
        cmp eax, ebp
        jne public_443c03
        mov eax, dword ptr ds : [public_5c7078]
        public_443c03 : nop
        push eax
        call dword ptr ds : [public_5c61a4]
        add esp, 4
        mov edx, ebx
        nop 
        public_443c10 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_443c10
        lea eax, ds:[edi+4]
        mov ecx, 0x10
        public_443c22 : nop
        mov dword ptr ds : [eax-4], ebp
        mov dword ptr ds : [eax], ebp
        add eax, 0xC
        dec ecx
        jne public_443c22
        cmp dword ptr ss : [esp+0x14], ebp
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi-4], 0x10
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ecx
        jne public_443c4e
        or eax, 0xFFFFFFFF
        jmp public_443c52
        public_443c4e : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_443c52 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        inc eax
        add edi, 0xC0
        add ebx, 0x400
        mov dword ptr ss : [esp+0x18], eax
        add esi, 0x18
        public_443c71 : nop
        inc ecx
        cmp ecx, 4
        mov dword ptr ss : [esp+0x14], ecx
        jl public_443be0
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [public_5c60f8]
        lea edx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x28], eax
        call edi
        mov esi, dword ptr ss : [esp+0x13A8]
        lea ebp, ss:[esp+0x34]
        mov ebx, esi
        sub ebp, ebx
        mov dword ptr ss : [esp+0x10], 4
        mov edi, edi
        public_443cb0 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_443cd9
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_443cd9
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_443cc9
        mov eax, dword ptr ds : [public_5c7078]
        public_443cc9 : nop
        push 0xFFFFFFFF
        push 1
        push eax
        call public_41aa50
        add esp, 0xC
        mov dword ptr ds : [esi+ebp], eax
        public_443cd9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 4
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_443cb0
        call edi
        mov ecx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        call edi
        mov esi, ebx
        mov ebx, 4
        public_443d10 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_443d29
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_443d29
        lea edx, ds:[esi+ebp]
        push edx
        call public_41b030
        add esp, 4
        public_443d29 : nop
        add esi, 4
        dec ebx
        jne public_443d10
        call edi
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x13A8]
        xor ebp, ebp
        xor ebx, ebx
        lea esi, ds:[eax+4]
        add eax, 0x14
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x1C], eax
        public_443d56 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        je public_443dfe
        cmp dword ptr ds : [eax+0xC], ebp
        je public_443dfe
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+eax]
        cmp eax, ebp
        mov dword ptr ds : [esi], eax
        jle public_443dd7
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], ebp
        public_443d82 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+edx+4]
        mov edx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx+edx+8]
        mov eax, dword ptr ds : [edi]
        mov edi, dword ptr ds : [eax+0x18]
        fmul qword ptr ds : [public_5ca320]
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_5c61a0]
        mov ecx, dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [ebx]
        mov eax, dword ptr ds : [esi]
        inc ebp
        add ecx, 0xC
        add ebx, 4
        cmp ebp, eax
        mov dword ptr ds : [esi+0x110], edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        jl public_443d82
        mov ebx, dword ptr ss : [esp+0x24]
        public_443dd7 : nop
        cmp dword ptr ds : [esi], 0
        jle public_443df5
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edx+0x18]
        push 0
        call dword ptr ds : [public_5c61a0]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, ebx
        fstp dword ptr ds : [ecx+eax*4+0x10]
        public_443df5 : nop
        add dword ptr ss : [esp+0x14], 0x18
        xor ebp, ebp
        jmp public_443e06
        public_443dfe : nop
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+0x110], ebp
        public_443e06 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add ebx, 0x10
        add ecx, 0x40
        add edi, 4
        add esi, 4
        cmp ebx, 0x40
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x24], ebx
        jl public_443d56
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1394
        ret 4
        UNREACHABLE_TRAP(0x443b60)
    }
}

#undef public_443b9f
#undef public_443ba8
#undef public_443be0
#undef public_443c03
#undef public_443c10
#undef public_443c22
#undef public_443c4e
#undef public_443c52
#undef public_443c71
#undef public_443cb0
#undef public_443cc9
#undef public_443cd9
#undef public_443d10
#undef public_443d29
#undef public_443d56
#undef public_443d82
#undef public_443dd7
#undef public_443df5
#undef public_443dfe
#undef public_443e06
