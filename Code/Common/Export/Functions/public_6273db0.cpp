#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6273db0);
CLANG_FORWARD_PROC_SYMBOL(public_6274100);
CLANG_FORWARD_PROC_SYMBOL(public_6307b40);
CLANG_FORWARD_PROC_SYMBOL(public_6334770);
CLANG_FORWARD_PROC_SYMBOL(public_63347c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6273de9 _public_6273de9
#define public_6273df0 _public_6273df0
#define public_6273e6a _public_6273e6a
#define public_6273ec0 _public_6273ec0
#define public_6273ee0 _public_6273ee0
#define public_6273ef4 _public_6273ef4
#define public_6273f09 _public_6273f09
#define public_6273f14 _public_6273f14
#define public_6273f3f _public_6273f3f
#define public_6273f42 _public_6273f42
#define public_6273fa2 _public_6273fa2
#define public_6273fcf _public_6273fcf
#define public_6273ff0 _public_6273ff0
#define public_6274034 _public_6274034
#define public_6274047 _public_6274047
#define public_6274064 _public_6274064
#define public_62740ea _public_62740ea

PROC_DECLARE(0x6273db0, internal_6273db0, public_6273db0);
extern "C" NAKED register_t __cdecl internal_6273db0()
{
    __asm
    {
        sub esp, 0xA0
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0xE20]
        push ebp
        xor eax, eax
        cmp ecx, eax
        push esi
        push edi
        mov dword ptr ds : [ebx+0xE28], eax
        mov dword ptr ss : [esp+0x10], eax
        jle public_6273fcf
        lea eax, ds:[ebx+0x220]
        lea edi, ds:[ebx+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], edi
        jmp public_6273df0
        public_6273de9 : nop
        mov edi, dword ptr ss : [esp+0x14]
        lea ecx, ds:[ecx]
        public_6273df0 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6273ee0
        mov esi, dword ptr ss : [esp+0xB8]
        push eax
        mov ecx, esi
        call public_63347c0
        mov ecx, dword ptr ds : [edi]
        mov ebp, eax
        test ebp, ebp
        push ecx
        je public_6273ec0
        mov ecx, esi
        call public_6334770
        lea esi, ss:[ebp+0x10]
        add ebp, 4
        mov edx, dword ptr ss : [ebp]
        mov ecx, 9
        lea edi, ss:[esp+0x20]
        rep movsd
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ds : [public_6399040]
        mov dword ptr ss : [esp+0x4C], edx
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fbbc0]
        test eax, eax
        jne public_6273e6a
        call public_6391cf0
        mov dword ptr ds : [public_63fbbc0], eax
        public_6273e6a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        push esi
        lea edx, ss:[esp+0x88]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x80]
        push eax
        lea ecx, ss:[esp+0x54]
        call public_6274100
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x74]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x78]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x7C]
        mov dword ptr ds : [ecx+8], edx
        lea edi, ds:[eax+0xC]
        mov ecx, 9
        lea esi, ss:[esp+0x50]
        rep movsd
        mov edi, dword ptr ss : [esp+0x14]
        jmp public_6273ee0
        lea ecx, ds:[ecx]
        public_6273ec0 : nop
        mov edx, dword ptr ds : [public_6399028]
        push 0x187
/*FIXUP push offset public_639a188 @0x6273ecb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100001
/*FIXUP push offset public_639a140 @0x6273ed5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a140
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6273ee0 : nop
        mov edi, dword ptr ds : [edi+0x100]
        xor ebp, ebp
        cmp edi, ebp
        je public_6273fa2
        mov dword ptr ss : [esp+0x1C], ebp
        public_6273ef4 : nop
        mov esi, dword ptr ss : [esp+0xBC]
        mov ecx, dword ptr ds : [esi+0x168]
        test ecx, ecx
        jne public_6273f09
        xor eax, eax
        jmp public_6273f14
        public_6273f09 : nop
        mov eax, dword ptr ds : [esi+0x16C]
        sub eax, ecx
        sar eax, 2
        public_6273f14 : nop
        cmp ebp, eax
        jge public_6273f42
        mov eax, dword ptr ds : [esi+0x168]
        mov eax, dword ptr ds : [eax+ebp*4]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_6273f3f
        mov edx, dword ptr ds : [esi+0x168]
        mov eax, dword ptr ds : [edx+ebp*4]
        mov dword ptr ss : [esp+0x1C], eax
        public_6273f3f : nop
        inc ebp
        jmp public_6273ef4
        public_6273f42 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jne public_6274034
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push edi
/*FIXUP push offset public_63997b0 @0x6273f59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997b0
        push 0x5A8
/*FIXUP push offset public_639a188 @0x6273f63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100001
/*FIXUP push offset public_639a0e0 @0x6273f6d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a0e0
        push eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [ecx+0x100]
        add esp, 0x1C
        push edx
        push 0x194
/*FIXUP push offset public_639a188 @0x6273f88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100001
/*FIXUP push offset public_639a0ac @0x6273f92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a0ac
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6273fa2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+0xE20]
        inc eax
        add esi, 4
        add edx, 0x30
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], edx
        jl public_6273de9
        public_6273fcf : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, 1
        jne public_6274047
        mov eax, dword ptr ds : [ebx+0xE20]
        xor edx, edx
        test eax, eax
        jle public_62740ea
        lea ebp, ds:[ebx+0x220]
        lea ecx, ds:[ecx]
        public_6273ff0 : nop
        mov eax, dword ptr ds : [ebx+0xE28]
        lea ecx, ds:[eax+eax*2]
        shl ecx, 4
        lea edi, ds:[ecx+ebx+0xE2C]
        mov esi, ebp
        mov ecx, 0xC
        rep movsd
        mov edi, dword ptr ds : [ebx+0xE28]
        mov eax, dword ptr ds : [ebx+0xE20]
        inc edi
        inc edx
        add ebp, 0x30
        cmp edx, eax
        mov dword ptr ds : [ebx+0xE28], edi
        jl public_6273ff0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA0
        ret 0xC
        public_6274034 : nop
        mov edi, dword ptr ss : [esp+0x18]
        lea esi, ds:[eax+4]
        mov ecx, 0xC
        rep movsd
        jmp public_6273fa2
        public_6274047 : nop
        cmp eax, 2
        jne public_62740ea
        mov eax, dword ptr ds : [ebx+0xE24]
        xor ebp, ebp
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        jle public_62740ea
        public_6274064 : nop
        fild dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, 0xC
        fidiv dword ptr ss : [esp+0x10]
        lea esi, ds:[ebx+0x250]
        lea eax, ss:[esp+0x80]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        sub esp, 0x30
        mov edi, esp
        rep movsd
        sub esp, 0x30
        mov edi, esp
        mov ecx, 0xC
        lea esi, ds:[ebx+0x220]
        push eax
        rep movsd
        call public_6307b40
        mov ecx, dword ptr ds : [ebx+0xE28]
        lea ecx, ds:[ecx+ecx*2]
        shl ecx, 4
        lea edi, ds:[ecx+ebx+0xE2C]
        mov esi, eax
        mov ecx, 0xC
        rep movsd
        mov esi, dword ptr ds : [ebx+0xE28]
        mov eax, dword ptr ds : [ebx+0xE24]
        add esp, 0x68
        inc esi
        inc ebp
        cmp ebp, eax
        mov dword ptr ds : [ebx+0xE28], esi
        mov dword ptr ss : [esp+0x10], ebp
        jl public_6274064
        public_62740ea : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA0
        ret 0xC
        UNREACHABLE_TRAP(0x6273db0)
    }
}

#undef public_6273de9
#undef public_6273df0
#undef public_6273e6a
#undef public_6273ec0
#undef public_6273ee0
#undef public_6273ef4
#undef public_6273f09
#undef public_6273f14
#undef public_6273f3f
#undef public_6273f42
#undef public_6273fa2
#undef public_6273fcf
#undef public_6273ff0
#undef public_6274034
#undef public_6274047
#undef public_6274064
#undef public_62740ea
