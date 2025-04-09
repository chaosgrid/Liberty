#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b0220);

#define public_5b0294 _public_5b0294
#define public_5b02ba _public_5b02ba
#define public_5b02bc _public_5b02bc
#define public_5b02e7 _public_5b02e7
#define public_5b0311 _public_5b0311
#define public_5b0313 _public_5b0313
#define public_5b0340 _public_5b0340
#define public_5b0380 _public_5b0380
#define public_5b03a6 _public_5b03a6
#define public_5b03a8 _public_5b03a8
#define public_5b03d9 _public_5b03d9
#define public_5b03fd _public_5b03fd
#define public_5b03ff _public_5b03ff
#define public_5b0427 _public_5b0427
#define public_5b042a _public_5b042a
#define public_5b04ae _public_5b04ae
#define public_5b04d6 _public_5b04d6
#define public_5b04d8 _public_5b04d8
#define public_5b0503 _public_5b0503
#define public_5b052b _public_5b052b
#define public_5b052d _public_5b052d
#define public_5b0558 _public_5b0558
#define public_5b057c _public_5b057c

PROC_DECLARE(0x5b0220, internal_5b0220, public_5b0220);
extern "C" NAKED register_t __cdecl internal_5b0220()
{
    __asm
    {
        sub esp, 0x234
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_5c6f54]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x40]
        mov esi, dword ptr ss : [esp+0x248]
        shr ecx, 0x14
        shr eax, 0x14
        cmp ecx, 0x78
        jge public_5b0340
        mov al, byte ptr ds : [public_67a439]
        test al, al
        jne public_5b0558
        mov eax, dword ptr ds : [public_67eca8]
        push 0x100
        lea edx, ss:[esp+0x48]
        push edx
        push 0xCB
        push eax
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_5b0294
        lea ecx, ss:[esp+0x44]
/*FIXUP push offset public_5c8ce0 @0x5b0285*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push ecx
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        public_5b0294 : nop
        mov edi, dword ptr ds : [public_5c71c8]
        lea edx, ss:[esp+0x44]
        push edx
        call edi
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        jle public_5b02e7
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_5b02ba
        push eax
        call edi
        add esp, 4
        mov ebx, eax
        jmp public_5b02bc
        public_5b02ba : nop
        xor ebx, ebx
        public_5b02bc : nop
        lea edi, ds:[ebx+ebp]
        lea eax, ds:[edi+1]
        push eax
        mov ecx, esi
        call public_4142a0
        mov edx, dword ptr ds : [esi]
        push ebp
        lea ecx, ss:[esp+0x48]
        push ecx
        lea eax, ds:[edx+ebx*2]
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [esi]
        add esp, 0xC
        mov word ptr ds : [ecx+edi*2], 0
        public_5b02e7 : nop
        mov edi, dword ptr ds : [public_5c71c8]
/*FIXUP push offset public_5d0a08 @0x5b02ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
        call edi
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        jle public_5b042a
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_5b0311
        push eax
        call edi
        add esp, 4
        mov ebp, eax
        jmp public_5b0313
        public_5b0311 : nop
        xor ebp, ebp
        public_5b0313 : nop
        lea edi, ds:[ebx+ebp]
        lea edx, ds:[edi+1]
        push edx
        mov ecx, esi
        call public_4142a0
        mov eax, dword ptr ds : [esi]
        push ebx
        lea ecx, ds:[eax+ebp*2]
/*FIXUP push offset public_5d0a08 @0x5b0327*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ds : [esi]
        mov word ptr ds : [edx+edi*2], 0
        jmp public_5b0427
        public_5b0340 : nop
        cmp eax, 0x190
        jge public_5b042a
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x100
        lea eax, ss:[esp+0x48]
        push eax
        push 0xD6
        push ecx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_5b0380
        lea edx, ss:[esp+0x44]
/*FIXUP push offset public_5c8ce0 @0x5b0371*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push edx
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        public_5b0380 : nop
        mov edi, dword ptr ds : [public_5c71c8]
        lea eax, ss:[esp+0x44]
        push eax
        call edi
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        jle public_5b03d9
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_5b03a6
        push eax
        call edi
        add esp, 4
        mov ebx, eax
        jmp public_5b03a8
        public_5b03a6 : nop
        xor ebx, ebx
        public_5b03a8 : nop
        lea edi, ds:[ebx+ebp]
        lea ecx, ds:[edi+1]
        push ecx
        mov ecx, esi
        call public_4142a0
        mov eax, dword ptr ds : [esi]
        push ebp
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ds:[eax+ebx*2]
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ds : [esi]
        mov word ptr ds : [edx+edi*2], 0
        mov edi, dword ptr ds : [public_5c71c8]
        add esp, 0xC
/*FIXUP public_5b03d9 : nop
        push offset public_5d0a08 @0x5b03d9*/
  FIXUP public_5b03d9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
        call edi
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        jle public_5b042a
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_5b03fd
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov ebp, eax
        jmp public_5b03ff
        public_5b03fd : nop
        xor ebp, ebp
        public_5b03ff : nop
        lea edi, ds:[ebx+ebp]
        lea eax, ds:[edi+1]
        push eax
        mov ecx, esi
        call public_4142a0
        mov ecx, dword ptr ds : [esi]
        push ebx
        lea edx, ds:[ecx+ebp*2]
/*FIXUP push offset public_5d0a08 @0x5b0413*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
        push edx
        call dword ptr ds : [public_5c71c0]
        mov eax, dword ptr ds : [esi]
        mov word ptr ds : [eax+edi*2], 0
        public_5b0427 : nop
        add esp, 0xC
        public_5b042a : nop
        mov al, byte ptr ds : [public_67a439]
        test al, al
        jne public_5b0558
        mov ecx, dword ptr ds : [public_5c6de0]
        xor edi, edi
        mov dword ptr ss : [esp+0x10], edi
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0xF
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        je public_5b0558
        push 0x100
        lea edx, ss:[esp+0x48]
        push edx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], 0xCD
        mov dword ptr ss : [esp+0x24], 0xCE
        mov dword ptr ss : [esp+0x28], 0xCF
        mov eax, dword ptr ss : [esp+eax*4+0x1C]
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push eax
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_5b04ae
        lea ecx, ss:[esp+0x44]
/*FIXUP push offset public_5c8ce0 @0x5b049f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        push ecx
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        public_5b04ae : nop
        lea edx, ss:[esp+0x44]
        push edx
        call dword ptr ds : [public_5c71c8]
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        jle public_5b0503
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_5b04d6
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov ebx, eax
        jmp public_5b04d8
        public_5b04d6 : nop
        xor ebx, ebx
        public_5b04d8 : nop
        lea edi, ds:[ebx+ebp]
        lea eax, ds:[edi+1]
        push eax
        mov ecx, esi
        call public_4142a0
        mov edx, dword ptr ds : [esi]
        push ebp
        lea ecx, ss:[esp+0x48]
        push ecx
        lea eax, ds:[edx+ebx*2]
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [esi]
        add esp, 0xC
        mov word ptr ds : [ecx+edi*2], 0
/*FIXUP public_5b0503 : nop
        push offset public_5d0a08 @0x5b0503*/
  FIXUP public_5b0503 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
        call dword ptr ds : [public_5c71c8]
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        jle public_5b0558
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_5b052b
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov ebp, eax
        jmp public_5b052d
        public_5b052b : nop
        xor ebp, ebp
        public_5b052d : nop
        lea edi, ds:[ebx+ebp]
        lea edx, ds:[edi+1]
        push edx
        mov ecx, esi
        call public_4142a0
        mov eax, dword ptr ds : [esi]
        push ebx
        lea ecx, ds:[eax+ebp*2]
/*FIXUP push offset public_5d0a08 @0x5b0541*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov word ptr ds : [edx+edi*2], 0
        public_5b0558 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_5b057c
        push esi
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        pop edi
        xor ecx, ecx
        test eax, eax
        pop esi
        setne cl
        pop ebp
        mov al, cl
        pop ebx
        add esp, 0x234
        ret 
        public_5b057c : nop
        pop edi
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        pop esi
        setne cl
        pop ebp
        mov al, cl
        pop ebx
        add esp, 0x234
        ret 
        UNREACHABLE_TRAP(0x5b0220)
    }
}

#undef public_5b0294
#undef public_5b02ba
#undef public_5b02bc
#undef public_5b02e7
#undef public_5b0311
#undef public_5b0313
#undef public_5b0340
#undef public_5b0380
#undef public_5b03a6
#undef public_5b03a8
#undef public_5b03d9
#undef public_5b03fd
#undef public_5b03ff
#undef public_5b0427
#undef public_5b042a
#undef public_5b04ae
#undef public_5b04d6
#undef public_5b04d8
#undef public_5b0503
#undef public_5b052b
#undef public_5b052d
#undef public_5b0558
#undef public_5b057c
