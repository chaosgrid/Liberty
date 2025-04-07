#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409800);
CLANG_FORWARD_PROC_SYMBOL(public_40abe0);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_418954);
CLANG_FORWARD_PROC_SYMBOL(public_41898a);
CLANG_FORWARD_PROC_SYMBOL(public_419460);

#define public_413487 _public_413487
#define public_4134b9 _public_4134b9
#define public_4134cc _public_4134cc
#define public_4134db _public_4134db
#define public_4134e8 _public_4134e8
#define public_4134f9 _public_4134f9
#define public_413504 _public_413504
#define public_413519 _public_413519
#define public_413525 _public_413525

PROC_DECLARE(0x413440, internal_413440, public_413440);
extern "C" NAKED register_t __cdecl internal_413440()
{
    __asm
    {
        mov eax, 0x2800
        call public_419460
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x80]
        push 0x1400
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        call public_409800
        call public_40cdc0
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [public_41b8f4]
        mov esi, eax
        add esp, 0x10
        cmp esi, 0x7FFFFFFD
        jbe public_413487
        call dword ptr ds : [public_41b8a0]
        public_413487 : nop
        mov eax, dword ptr ds : [public_4277f0]
        test eax, eax
        je public_4134b9
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_4134b9
        cmp cl, 0xFF
        je public_4134b9
        test esi, esi
        jne public_4134e8
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [public_4277f0], esi
        mov dword ptr ds : [public_4277f4], esi
        mov dword ptr ds : [public_4277f8], esi
        jmp public_413525
        public_4134b9 : nop
        test esi, esi
        jne public_4134cc
        push 1
        mov ecx, offset public_4277ec
        call dword ptr ds : [public_41b86c]
        jmp public_413525
        public_4134cc : nop
        mov ecx, dword ptr ds : [public_4277f8]
        cmp ecx, 0x1F
        ja public_4134db
        cmp ecx, esi
        jae public_4134f9
        public_4134db : nop
        push 1
        mov ecx, offset public_4277ec
        call dword ptr ds : [public_41b86c]
        public_4134e8 : nop
        mov ecx, offset public_4277ec
        push esi
        call dword ptr ds : [public_41b8a4]
        mov eax, dword ptr ds : [public_4277f0]
        public_4134f9 : nop
        test esi, esi
        lea ecx, ss:[esp+8]
        jbe public_413519
        mov edx, esi
        push ebp
        public_413504 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_413504
        mov eax, dword ptr ds : [public_4277f0]
        pop ebp
        public_413519 : nop
        mov dword ptr ds : [public_4277f4], esi
        mov word ptr ds : [eax+esi*2], 0
        public_413525 : nop
        call public_40abe0
        mov ecx, dword ptr ds : [public_41baf8]
/*FIXUP push offset public_4277ec @0x413530*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4277ec
        call public_418954
        call public_40ce70
        mov ecx, edi
        call public_41898a
        pop edi
        pop esi
        add esp, 0x2800
        ret 
        UNREACHABLE_TRAP(0x413440)
    }
}

#undef public_413487
#undef public_4134b9
#undef public_4134cc
#undef public_4134db
#undef public_4134e8
#undef public_4134f9
#undef public_413504
#undef public_413519
#undef public_413525
