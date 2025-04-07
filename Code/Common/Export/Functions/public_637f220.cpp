#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6372a10);
CLANG_FORWARD_PROC_SYMBOL(public_637ed40);
CLANG_FORWARD_PROC_SYMBOL(public_637ef60);
CLANG_FORWARD_PROC_SYMBOL(public_637f220);

#define public_637f25b _public_637f25b
#define public_637f278 _public_637f278
#define public_637f296 _public_637f296
#define public_637f29f _public_637f29f
#define public_637f2bf _public_637f2bf
#define public_637f2c5 _public_637f2c5
#define public_637f2c9 _public_637f2c9
#define public_637f2cf _public_637f2cf
#define public_637f2fb _public_637f2fb
#define public_637f30e _public_637f30e
#define public_637f351 _public_637f351
#define public_637f365 _public_637f365
#define public_637f371 _public_637f371
#define public_637f37a _public_637f37a
#define public_637f385 _public_637f385
#define public_637f39a _public_637f39a
#define public_637f3bb _public_637f3bb
#define public_637f3cd _public_637f3cd
#define public_637f3d6 _public_637f3d6
#define public_637f3fd _public_637f3fd

PROC_DECLARE(0x637f220, internal_637f220, public_637f220);
extern "C" NAKED register_t __cdecl internal_637f220()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b0dc]
        test eax, eax
        mov dword ptr ss : [esp], 0
        je public_637f25b
        fld qword ptr ds : [public_658b020]
        fcomp qword ptr ds : [public_658b890]
        fnstsw ax
        test ah, 1
        je public_637f25b
        mov eax, dword ptr ds : [public_658b890]
        mov ecx, dword ptr ds : [public_658b894]
        mov dword ptr ds : [public_658b020], eax
        mov dword ptr ds : [public_658b024], ecx
        public_637f25b : nop
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp], 0
        mov ebx, dword ptr ds : [public_658b820]
        test ebx, ebx
        push esi
        push edi
        je public_637f385
        public_637f278 : nop
        mov eax, dword ptr ds : [ebx+0x50]
        test ah, 4
        je public_637f385
        mov eax, dword ptr ds : [ebx+0x40]
        test eax, eax
        jne public_637f296
        mov eax, dword ptr ds : [ebx+0x44]
        test eax, eax
        je public_637f37a
        public_637f296 : nop
        mov edi, dword ptr ds : [ebx+0x20]
        xor esi, esi
        test edi, edi
        je public_637f2c9
        public_637f29f : nop
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 4
        je public_637f2c5
        mov eax, dword ptr ds : [public_658b854]
        mov edi, dword ptr ds : [edi+0x20]
        mov edx, esi
        inc esi
        cmp edx, eax
        jbe public_637f2bf
        push ebx
        call public_6372a10
        add esp, 4
        public_637f2bf : nop
        test edi, edi
        jne public_637f29f
        jmp public_637f2c9
        public_637f2c5 : nop
        test edi, edi
        jne public_637f2cf
        public_637f2c9 : nop
        mov edi, dword ptr ds : [public_658b81c]
        public_637f2cf : nop
        mov eax, dword ptr ds : [ebx+0x40]
        test eax, eax
        je public_637f30e
        push eax
        call public_636ec10
        add dword ptr ss : [ebp], eax
        sub dword ptr ds : [public_658b84c], eax
        mov eax, dword ptr ds : [ebx+0x40]
        add esp, 4
        test eax, eax
        je public_637f30e
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_637f30e
        public_637f2fb : nop
        push edi
        push eax
        call public_637ef60
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, 4
        test eax, eax
        jne public_637f2fb
        public_637f30e : nop
        mov eax, dword ptr ds : [ebx+0x44]
        test eax, eax
        je public_637f37a
        mov ecx, dword ptr ds : [public_658b084]
        mov edx, dword ptr ds : [public_658b248]
        add edx, ecx
        add edx, dword ptr ds : [public_658b080]
        je public_637f37a
        push eax
        call public_636ec10
        mov edx, dword ptr ss : [esp+0x14]
        add edx, eax
        mov eax, dword ptr ds : [ebx+0x44]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], edx
        je public_637f37a
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_637f37a
        public_637f351 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_637f365
        push edi
        push eax
        call public_637ef60
        add esp, 8
        jmp public_637f371
        public_637f365 : nop
        push 0
        push edi
        push eax
        call public_637ed40
        add esp, 0xC
        public_637f371 : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_637f351
        public_637f37a : nop
        mov ebx, dword ptr ds : [ebx+0x30]
        test ebx, ebx
        jne public_637f278
        public_637f385 : nop
        mov eax, dword ptr ds : [public_658b900]
        test eax, eax
        je public_637f3d6
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_637f3d6
        public_637f39a : nop
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_637f3cd
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_637f3bb
        mov ecx, dword ptr ds : [public_658b81c]
        push ecx
        push eax
        call public_637ef60
        add esp, 8
        jmp public_637f3cd
        public_637f3bb : nop
        mov edx, dword ptr ds : [public_658b81c]
        push 0
        push edx
        push eax
        call public_637ed40
        add esp, 0xC
        public_637f3cd : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_637f39a
        public_637f3d6 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_637f3fd
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63f5bdc @0x637f3ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5bdc
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_637f3fd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x637f220)
    }
}

#undef public_637f25b
#undef public_637f278
#undef public_637f296
#undef public_637f29f
#undef public_637f2bf
#undef public_637f2c5
#undef public_637f2c9
#undef public_637f2cf
#undef public_637f2fb
#undef public_637f30e
#undef public_637f351
#undef public_637f365
#undef public_637f371
#undef public_637f37a
#undef public_637f385
#undef public_637f39a
#undef public_637f3bb
#undef public_637f3cd
#undef public_637f3d6
#undef public_637f3fd
