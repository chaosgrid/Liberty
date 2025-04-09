#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_487550);
CLANG_FORWARD_PROC_SYMBOL(public_4877f0);
CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_487cb0);
CLANG_FORWARD_PROC_SYMBOL(public_489780);
CLANG_FORWARD_PROC_SYMBOL(public_57c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_57c7d0);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_487583 _public_487583
#define public_48759d _public_48759d
#define public_4875a6 _public_4875a6
#define public_4875b7 _public_4875b7
#define public_4875d3 _public_4875d3
#define public_4875f2 _public_4875f2
#define public_48761a _public_48761a
#define public_48766a _public_48766a
#define public_487700 _public_487700
#define public_487720 _public_487720
#define public_487732 _public_487732
#define public_487740 _public_487740
#define public_48774e _public_48774e
#define public_4877b0 _public_4877b0
#define public_4877d5 _public_4877d5
#define public_4877e3 _public_4877e3

PROC_DECLARE(0x487550, internal_487550, public_487550);
extern "C" NAKED register_t __cdecl internal_487550()
{
    __asm
    {
        sub esp, 0xA14
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xE88]
        push esi
        xor esi, esi
        cmp eax, 0xFFFFFFFF
        je public_487583
        mov ecx, dword ptr ss : [ebp+0x344]
        lea eax, ds:[eax+eax*8]
        mov edx, dword ptr ds : [ecx+eax*4]
        lea esi, ds:[ecx+eax*4]
        push edx
        lea ecx, ss:[ebp+0x368]
        call dword ptr ds : [public_5c63cc]
        public_487583 : nop
        mov ecx, dword ptr ss : [ebp+0x1764]
        test ecx, ecx
        je public_48759d
        lea eax, ss:[ebp+0x568]
        push 0x1F
        push eax
        call public_57c2c0
        jmp public_4875a6
        public_48759d : nop
        mov word ptr ss : [ebp+0x568], 0
        public_4875a6 : nop
        test esi, esi
        je public_4875d3
        mov esi, dword ptr ds : [esi+0x18]
        test esi, esi
        jne public_4875b7
        mov esi, dword ptr ds : [public_5c700c]
        public_4875b7 : nop
        lea eax, ss:[ebp+0x568]
        push eax
        push esi
        call dword ptr ds : [public_5c71d4]
        add esp, 8
        test eax, eax
        je public_4875d3
        mov byte ptr ss : [ebp+0x368], 0
        public_4875d3 : nop
        cmp word ptr ss : [ebp+0x568], 0
        lea ecx, ss:[ebp+0x568]
        jne public_48761a
        mov eax, dword ptr ss : [ebp+0x354]
        test eax, eax
        jne public_4875f2
        mov eax, dword ptr ds : [public_5c700c]
        public_4875f2 : nop
        push eax
        push ecx
        call dword ptr ds : [public_5c70b4]
        mov eax, dword ptr ss : [ebp+0x360]
        mov edx, dword ptr ss : [ebp+0x364]
        push 0xA
        lea ecx, ss:[ebp+eax*2+0x568]
        push ecx
        push edx
        call dword ptr ds : [public_5c7100]
        add esp, 0x14
        public_48761a : nop
        mov al, byte ptr ss : [ebp+0x368]
        test al, al
        lea esi, ss:[ebp+0x368]
        je public_487700
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x400
        lea eax, ss:[esp+0x220]
        push eax
        push 0x706
        push ecx
        call public_4347e0
        mov ecx, dword ptr ss : [ebp+0x1764]
        add esp, 0x10
        test ecx, ecx
        mov dword ptr ss : [ebp+0x338], 4
        je public_48766a
        push 0
        call public_57c7d0
        public_48766a : nop
        lea edx, ss:[esp+0x21C]
/*FIXUP push offset public_5d2260 @0x487671*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2260
        mov byte ptr ss : [ebp+0xE7E], 0
        mov byte ptr ss : [ebp+0x173A], 0
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], offset public_5d2254
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_4877e3
        lea eax, ss:[esp+8]
        push eax
        push ebp
/*FIXUP push offset public_5d2260 @0x4876a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2260
/*FIXUP push offset public_5d2260 @0x4876ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2260
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_4877e3
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        pop esi
        pop ebp
        add esp, 0xA14
        ret 
        public_487700 : nop
        push ebx
        mov ebx, dword ptr ss : [ebp+0x348]
        push edi
        mov ecx, 0x80
        lea edi, ss:[esp+0x24]
        rep movsd
        mov edi, dword ptr ss : [ebp+0x344]
        mov esi, ebx
        cmp esi, ebx
        je public_487732
        nop 
        public_487720 : nop
        push esi
        mov ecx, edi
        call public_489780
        add esi, 0x24
        add edi, 0x24
        cmp esi, ebx
        jne public_487720
        public_487732 : nop
        mov ebx, dword ptr ss : [ebp+0x348]
        cmp edi, ebx
        mov esi, edi
        je public_48774e
        mov edi, edi
        public_487740 : nop
        mov ecx, esi
        call public_487c30
        add esi, 0x24
        cmp esi, ebx
        jne public_487740
        public_48774e : nop
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x348], edi
        xor esi, esi
        push eax
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xE80], esi
        mov dword ptr ss : [ebp+0xE88], eax
        mov dword ptr ss : [ebp+0x173C], esi
        mov dword ptr ss : [ebp+0x1744], eax
        call public_487cb0
        mov byte ptr ss : [ebp+0x33D], 0
        mov byte ptr ss : [ebp+0x33E], 0
        mov ecx, dword ptr ds : [public_67ecd0]
        cmp ecx, esi
        pop edi
        pop ebx
        je public_4877b0
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[ebp+0x568]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [edx+0xE8]
        jmp public_4877d5
        nop 
        public_4877b0 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5d2210 @0x4877b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2210
        push 0x366
/*FIXUP push offset public_5d1e40 @0x4877c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1e40
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x4877ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4877d5 : nop
        mov ecx, ebp
        call public_4877f0
        mov byte ptr ss : [ebp+0x33E], 1
        public_4877e3 : nop
        pop esi
        pop ebp
        add esp, 0xA14
        ret 
        UNREACHABLE_TRAP(0x487550)
    }
}

#undef public_487583
#undef public_48759d
#undef public_4875a6
#undef public_4875b7
#undef public_4875d3
#undef public_4875f2
#undef public_48761a
#undef public_48766a
#undef public_487700
#undef public_487720
#undef public_487732
#undef public_487740
#undef public_48774e
#undef public_4877b0
#undef public_4877d5
#undef public_4877e3
