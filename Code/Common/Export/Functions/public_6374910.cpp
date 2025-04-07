#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_636ed30);
CLANG_FORWARD_PROC_SYMBOL(public_636ee40);
CLANG_FORWARD_PROC_SYMBOL(public_636f3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6371fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6372240);
CLANG_FORWARD_PROC_SYMBOL(public_6374910);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);

#define public_637492d _public_637492d
#define public_6374944 _public_6374944
#define public_6374960 _public_6374960
#define public_637496f _public_637496f
#define public_6374986 _public_6374986
#define public_6374991 _public_6374991
#define public_63749a3 _public_63749a3
#define public_63749b9 _public_63749b9
#define public_63749dc _public_63749dc
#define public_63749f4 _public_63749f4
#define public_6374a00 _public_6374a00
#define public_6374a07 _public_6374a07
#define public_6374a16 _public_6374a16
#define public_6374a33 _public_6374a33
#define public_6374a3d _public_6374a3d
#define public_6374a49 _public_6374a49
#define public_6374a52 _public_6374a52
#define public_6374a59 _public_6374a59
#define public_6374a67 _public_6374a67
#define public_6374a7e _public_6374a7e
#define public_6374a9b _public_6374a9b
#define public_6374aa3 _public_6374aa3
#define public_6374aac _public_6374aac
#define public_6374aed _public_6374aed
#define public_6374b0a _public_6374b0a
#define public_6374b1c _public_6374b1c
#define public_6374b2b _public_6374b2b
#define public_6374b6a _public_6374b6a
#define public_6374b71 _public_6374b71
#define public_6374bad _public_6374bad
#define public_6374bc1 _public_6374bc1

PROC_DECLARE(0x6374910, internal_6374910, public_6374910);
extern "C" NAKED register_t __cdecl internal_6374910()
{
    __asm
    {
        cmp dword ptr ds : [public_658b078], 1
        jl public_637492d
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f1228 @0x637491e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1228
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_637492d : nop
        mov eax, dword ptr ds : [public_658b900]
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        push esi
        je public_6374944
        push ebp
        push eax
        call public_636ee40
        add esp, 8
        public_6374944 : nop
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, ebp
        je public_6374991
        push ebp
        call public_6371fe0
        mov eax, dword ptr ds : [public_658b838]
        add esp, 4
        cmp eax, ebp
        je public_63749b9
        public_6374960 : nop
        cmp dword ptr ds : [eax], ebp
        je public_637496f
        push eax
        call public_6372240
        add esp, 4
        jmp public_6374986
        public_637496f : nop
        push 0x18
        push eax
        call public_6377fe0
        add esp, 8
        mov dword ptr ds : [public_658b838], ebp
        mov dword ptr ds : [public_658b840], ebp
        public_6374986 : nop
        mov eax, dword ptr ds : [public_658b838]
        cmp eax, ebp
        jne public_6374960
        jmp public_63749b9
        public_6374991 : nop
        cmp dword ptr ds : [public_658b670], ebp
        je public_63749b9
        mov esi, dword ptr ds : [public_658b838]
        cmp esi, ebp
        je public_63749b9
        public_63749a3 : nop
        cmp dword ptr ds : [esi], ebp
        je public_63749b9
        lea ecx, ds:[esi+0xC]
        push ecx
        call public_636e7a0
        mov esi, dword ptr ds : [esi]
        add esp, 4
        cmp esi, ebp
        jne public_63749a3
        public_63749b9 : nop
        cmp edi, ebp
        mov dword ptr ds : [public_658b670], ebp
        mov dword ptr ds : [public_658b874], ebp
        je public_6374b1c
        mov edx, dword ptr ds : [public_658b810]
        cmp edx, ebp
        je public_6374a07
        mov esi, 0xFEFFFFFF
        public_63749dc : nop
        cmp dword ptr ds : [edx+0x30], ebp
        je public_6374a07
        mov eax, dword ptr ds : [edx+0x38]
        cmp eax, ebp
        je public_6374a00
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, ebp
        je public_6374a00
        public_63749f4 : nop
        and dword ptr ds : [eax+0xC], esi
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, ebp
        jne public_63749f4
        public_6374a00 : nop
        mov edx, dword ptr ds : [edx+0x30]
        cmp edx, ebp
        jne public_63749dc
        public_6374a07 : nop
        mov esi, dword ptr ds : [public_658b810]
        cmp esi, ebp
        je public_6374a59
        mov edi, 0x400
        public_6374a16 : nop
        cmp dword ptr ds : [esi+0x30], ebp
        je public_6374a59
        test dword ptr ds : [esi+0x50], edi
        je public_6374a52
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, ebp
        je public_6374a52
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, ebp
        je public_6374a52
        public_6374a33 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp edx, esi
        jne public_6374a3d
        mov edx, dword ptr ds : [eax+8]
        public_6374a3d : nop
        test dword ptr ds : [edx+0x50], edi
        jne public_6374a49
        or dword ptr ds : [eax+0xC], 0x1000000
        public_6374a49 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, ebp
        jne public_6374a33
        public_6374a52 : nop
        mov esi, dword ptr ds : [esi+0x30]
        cmp esi, ebp
        jne public_6374a16
        public_6374a59 : nop
        mov ebx, dword ptr ds : [public_658b810]
        cmp ebx, ebp
        je public_6374b71
        public_6374a67 : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        lea ebp, ds:[ebx+0x38]
        je public_6374aac
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6374aac
        public_6374a7e : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, 0x1000000
        je public_6374a9b
        push esi
        call public_636e740
        push 0x10
        push esi
        call public_6377fe0
        add esp, 0xC
        jmp public_6374aa3
        public_6374a9b : nop
        or eax, 0x1000000
        mov dword ptr ds : [esi+0xC], eax
        public_6374aa3 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6374a7e
        public_6374aac : nop
        lea edx, ds:[ebx+0x40]
        push edx
        call public_636e740
        lea eax, ds:[ebx+0x44]
        push eax
        call public_636e740
        lea ecx, ds:[ebx+0x3C]
        push ecx
        call public_636e740
        push ebp
        call public_636e740
        lea edx, ds:[ebx+0x34]
        push edx
        call public_636e740
        mov eax, dword ptr ds : [ebx+0x30]
        xor esi, esi
        add esp, 0x14
        cmp eax, esi
        je public_6374aed
        push ebx
        call public_636f3a0
        add esp, 4
        jmp public_6374b0a
        public_6374aed : nop
        push 0x58
        push ebx
        call public_6377fe0
        add esp, 8
        mov dword ptr ds : [public_658b810], esi
        mov dword ptr ds : [public_658b81c], esi
        mov dword ptr ds : [public_658b820], esi
        public_6374b0a : nop
        mov ebx, dword ptr ds : [public_658b810]
        cmp ebx, esi
        jne public_6374a67
        xor ebp, ebp
        jmp public_6374b71
        public_6374b1c : nop
        mov esi, dword ptr ds : [public_658b810]
        cmp esi, ebp
        je public_6374b71
        mov edi, 0x1000
        public_6374b2b : nop
        cmp dword ptr ds : [esi+0x30], ebp
        je public_6374b71
        lea eax, ds:[esi+0x40]
        push eax
        call public_636e7a0
        lea ecx, ds:[esi+0x44]
        push ecx
        call public_636e7a0
        mov eax, dword ptr ds : [esi+0x50]
        add esp, 8
        test edi, eax
        jne public_6374b6a
        lea edx, ds:[esi+0x3C]
        push edx
        call public_636e7a0
        lea eax, ds:[esi+0x38]
        push eax
        call public_636e7a0
        lea ecx, ds:[esi+0x34]
        push ecx
        call public_636e7a0
        add esp, 0xC
        public_6374b6a : nop
        mov esi, dword ptr ds : [esi+0x30]
        cmp esi, ebp
        jne public_6374b2b
/*FIXUP public_6374b71 : nop
        push offset public_658b8f8 @0x6374b71*/
  FIXUP public_6374b71 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8f8
        call public_636e740
        mov edx, dword ptr ds : [public_658b804]
        mov eax, dword ptr ds : [public_658b800]
        push edx
        push eax
        call public_6377fe0
        mov eax, dword ptr ds : [public_658b8f0]
        add esp, 0xC
        cmp eax, ebp
        pop edi
        mov dword ptr ds : [public_658b800], ebp
        pop ebx
        je public_6374bc1
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        cmp eax, ebp
        je public_6374bc1
        public_6374bad : nop
        push 0x18
        push eax
        call public_6377fe0
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, 4
        cmp eax, ebp
        jne public_6374bad
        public_6374bc1 : nop
        mov dword ptr ds : [public_658b8f0], ebp
        mov dword ptr ds : [public_658b8f4], ebp
        call public_636ed30
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6374910)
    }
}

#undef public_637492d
#undef public_6374944
#undef public_6374960
#undef public_637496f
#undef public_6374986
#undef public_6374991
#undef public_63749a3
#undef public_63749b9
#undef public_63749dc
#undef public_63749f4
#undef public_6374a00
#undef public_6374a07
#undef public_6374a16
#undef public_6374a33
#undef public_6374a3d
#undef public_6374a49
#undef public_6374a52
#undef public_6374a59
#undef public_6374a67
#undef public_6374a7e
#undef public_6374a9b
#undef public_6374aa3
#undef public_6374aac
#undef public_6374aed
#undef public_6374b0a
#undef public_6374b1c
#undef public_6374b2b
#undef public_6374b6a
#undef public_6374b71
#undef public_6374bad
#undef public_6374bc1
