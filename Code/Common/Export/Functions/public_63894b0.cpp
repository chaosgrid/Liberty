#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6372280);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6381270);
CLANG_FORWARD_PROC_SYMBOL(public_63894b0);

#define public_63894e5 _public_63894e5
#define public_638951a _public_638951a
#define public_6389561 _public_6389561
#define public_6389564 _public_6389564
#define public_638958e _public_638958e
#define public_638959a _public_638959a
#define public_63895ac _public_63895ac
#define public_63895e2 _public_63895e2
#define public_63895f2 _public_63895f2
#define public_638960b _public_638960b
#define public_638960e _public_638960e
#define public_6389634 _public_6389634

PROC_DECLARE(0x63894b0, internal_63894b0, public_63894b0);
extern "C" NAKED register_t __cdecl internal_63894b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        push edi
        mov dword ptr ss : [esp+0x10], 1
        je public_6389634
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_63894e5
/*FIXUP push offset public_63f8340 @0x63894d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8340
        push esi
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_63894e5 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        push ebx
        call public_6372280
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_636ec10
        push eax
        call public_636ec70
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        test eax, eax
        je public_6389564
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6389561
        public_638951a : nop
        mov edx, dword ptr ds : [public_658bb70]
        lea eax, ss:[esp+0x18]
        inc edx
        push eax
        mov dword ptr ds : [public_658bb70], edx
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        push ecx
        call public_637fd60
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        push eax
        push ebx
        push ecx
        call public_6381270
        push eax
        lea edx, ss:[esp+0x2C]
        push edx
        call public_636e1b0
        mov esi, dword ptr ds : [edi]
        add esp, 0x24
        add edi, 4
        test esi, esi
        jne public_638951a
        public_6389561 : nop
        mov esi, dword ptr ss : [ebp+8]
/*FIXUP public_6389564 : nop
        push offset public_63f8334 @0x6389564*/
  FIXUP public_6389564 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8334
        push esi
        call dword ptr ds : [public_63991e8]
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 8
        test eax, eax
        je public_638960e
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        xor ebx, ebx
        add edi, 4
        cmp esi, ebx
        je public_63895e2
        public_638958e : nop
        cmp dword ptr ss : [esp+0x10], ebx
        je public_638959a
        mov dword ptr ss : [esp+0x10], ebx
        jmp public_63895ac
        public_638959a : nop
        mov eax, dword ptr ss : [ebp+8]
/*FIXUP push offset public_63f8340 @0x638959d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8340
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_63895ac : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        push edx
        push eax
/*FIXUP push offset public_63f8318 @0x63895c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8318
        push ecx
        call dword ptr ds : [public_63991e8]
        mov esi, dword ptr ds : [edi]
        add esp, 0x20
        add edi, 4
        cmp esi, ebx
        jne public_638958e
        mov eax, dword ptr ss : [esp+0xC]
        public_63895e2 : nop
        cmp eax, ebx
        je public_638960b
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        cmp eax, ebx
        je public_638960b
        public_63895f2 : nop
        mov edx, dword ptr ds : [public_658b804]
        push edx
        push eax
        call public_6377fe0
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, 4
        cmp eax, ebx
        jne public_63895f2
        public_638960b : nop
        mov esi, dword ptr ss : [ebp+8]
        public_638960e : nop
        lea eax, ss:[esp+0xC]
        push eax
        call public_636ecc0
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_636ecc0
        add esp, 8
/*FIXUP push offset public_63f8314 @0x6389625*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f8314
        push esi
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_6389634 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63894b0)
    }
}

#undef public_63894e5
#undef public_638951a
#undef public_6389561
#undef public_6389564
#undef public_638958e
#undef public_638959a
#undef public_63895ac
#undef public_63895e2
#undef public_63895f2
#undef public_638960b
#undef public_638960e
#undef public_6389634
