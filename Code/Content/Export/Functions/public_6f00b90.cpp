#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6eac990);
CLANG_FORWARD_PROC_SYMBOL(public_6eacae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f00b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f00b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f011f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f015e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f01600);
CLANG_FORWARD_PROC_SYMBOL(public_6f01ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f020c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f48c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_JUMP_SYMBOL(public_6facb4d);

#define public_6f00c57 _public_6f00c57
#define public_6f00c5c _public_6f00c5c
#define public_6f00d16 _public_6f00d16
#define public_6f00de2 _public_6f00de2
#define public_6f00e05 _public_6f00e05
#define public_6f00e2e _public_6f00e2e
#define public_6f00efe _public_6f00efe
#define public_6f00f21 _public_6f00f21
#define public_6f00f61 _public_6f00f61
#define public_6f00f63 _public_6f00f63
#define public_6f00f68 _public_6f00f68
#define public_6f00f70 _public_6f00f70
#define public_6f00f76 _public_6f00f76
#define public_6f00f7a _public_6f00f7a
#define public_6f00fac _public_6f00fac
#define public_6f00fcb _public_6f00fcb
#define public_6f01050 _public_6f01050
#define public_6f01080 _public_6f01080
#define public_6f010f6 _public_6f010f6
#define public_6f0111d _public_6f0111d
#define public_6f0114c _public_6f0114c
#define public_6f01165 _public_6f01165
#define public_6f01189 _public_6f01189
#define public_6f011a3 _public_6f011a3
#define public_6f011ac _public_6f011ac

PROC_DECLARE(0x6f00b90, internal_6f00b90, public_6f00b90);
extern "C" NAKED register_t __cdecl internal_6f00b90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facb4d @0x6f00b92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facb4d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x27C
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x254]
        call public_6eac680
        xor edi, edi
        lea ecx, ss:[esp+0x26C]
        mov dword ptr ss : [esp+0x294], edi
        call public_6eac680
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x294], 1
        call public_6eac990
        mov esi, dword ptr ss : [esp+0x29C]
        mov eax, dword ptr ds : [esi+0x10]
        mov ebx, dword ptr ds : [public_6fb3294]
        lea ebp, ds:[esi+0x20]
        push ebp
/*FIXUP push offset public_6fb7d98 @0x6f00bf5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d98
        mov dword ptr ss : [esp+0x29C], 2
        mov dword ptr ss : [esp+0x34], eax
        mov byte ptr ss : [esp+0x39], 0
        mov byte ptr ss : [esp+0x3A], 1
        mov byte ptr ss : [esp+0x44], 1
        mov byte ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x148], edi
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x40], edi
        call ebx
        add esp, 8
        test eax, eax
        je public_6f00c57
        push ebp
/*FIXUP push offset public_6fb7da0 @0x6f00c36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7da0
        call ebx
        add esp, 8
        test eax, eax
        je public_6f00c57
        push ebp
/*FIXUP push offset public_6fb7dac @0x6f00c45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7dac
        call ebx
        add esp, 8
        test eax, eax
        je public_6f00c57
        xor eax, eax
        jmp public_6f00c5c
        public_6f00c57 : nop
        mov eax, 1
        public_6f00c5c : nop
        neg al
        mov dword ptr ss : [esp+0x250], 1
        sbb eax, eax
        and eax, 2
        mov dword ptr ss : [esp+0x248], eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x24C], eax
        mov eax, dword ptr ds : [esi+0x40]
        mov dword ptr ss : [esp+0x288], eax
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_6f49b00
        mov ecx, dword ptr ds : [esi+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x18]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        push ecx
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_6fb35f8]
        mov eax, dword ptr ds : [esi+0x4C]
        add esp, 0x10
        push eax
        mov ecx, edi
        call public_6f47980
        mov ecx, dword ptr ds : [eax+0x48]
        push ecx
        mov ecx, edi
        call public_6f48c60
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x18], eax
        call public_6f33f80
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x24], eax
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call dword ptr ds : [public_6fb35e8]
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_6fb444c]
        add esp, 0xC
        mov byte ptr ss : [esp+0x13], 1
        fnstsw ax
        test ah, 1
        je public_6f00d16
        mov byte ptr ss : [esp+0x13], 0
        public_6f00d16 : nop
        test edi, edi
        mov edx, dword ptr ds : [esi+0x54]
        mov dword ptr ss : [esp+0x18], edx
        jne public_6f00f7a
        mov edi, dword ptr ss : [esp+0x14]
        push ebp
/*FIXUP push offset public_6fb7d8c @0x6f00d2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d8c
        call ebx
        add esp, 8
        test eax, eax
        jne public_6f00e2e
        push eax
        push edi
        push esi
        lea eax, ss:[esp+0x38]
        push 0x3D
        push eax
        call public_6f00b10
        push 0
        push edi
        push esi
        lea ecx, ss:[esp+0x4C]
        push 0x3F
        push ecx
        call public_6f00b10
        push 0
        push edi
        push esi
        lea edx, ss:[esp+0x60]
        push 0x40
        push edx
        call public_6f00b10
        add esp, 0x3C
        call dword ptr ds : [public_6fb3370]
        imul eax, 0x65
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        cmp eax, 0x19
        setb byte ptr ss : [esp+0x12]
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f00de2
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_6f00de2
        push 0
        push edi
        push esi
        lea eax, ss:[esp+0x38]
        push 9
        push eax
        call public_6f00b10
        push 0
        push edi
        push esi
        lea ecx, ss:[esp+0x4C]
        push 0x12
        push ecx
        call public_6f00b10
        push 0
        push edi
        push esi
        lea edx, ss:[esp+0x60]
        push 0x19
        push edx
        call public_6f00b10
        push 0
        push edi
        push esi
        lea eax, ss:[esp+0x74]
        push 0x1A
        push eax
        call public_6f00b10
        add esp, 0x50
        jmp public_6f00e05
        public_6f00de2 : nop
        push 0
        push edi
        push esi
        lea ecx, ss:[esp+0x38]
        push 9
        push ecx
        call public_6f00b10
        push 0
        push edi
        push esi
        lea edx, ss:[esp+0x4C]
        push 0x13
        push edx
        call public_6f00b10
        add esp, 0x28
        public_6f00e05 : nop
        call dword ptr ds : [public_6fb3370]
        imul eax, 0x65
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        cmp eax, 0x14
        jae public_6f00f70
        push 0
        push edi
        push esi
        push 0x3E
        jmp public_6f00f63
        public_6f00e2e : nop
        push ebp
/*FIXUP push offset public_6fb7d98 @0x6f00e2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d98
        call ebx
        add esp, 8
        test eax, eax
        je public_6f00f76
        push ebp
/*FIXUP push offset public_6fb7da0 @0x6f00e42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7da0
        call ebx
        add esp, 8
        test eax, eax
        je public_6f00f76
        push ebp
/*FIXUP push offset public_6fb7dac @0x6f00e55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7dac
        call ebx
        add esp, 8
        test eax, eax
        je public_6f00f76
        push 0
        push edi
        push esi
        lea ecx, ss:[esp+0x38]
        push 0x3C
        push ecx
        call public_6f00b10
        push 0
        push edi
        push esi
        lea edx, ss:[esp+0x4C]
        push 0x41
        push edx
        call public_6f00b10
        add esp, 0x28
        call dword ptr ds : [public_6fb3370]
        imul eax, 0x65
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        cmp eax, 0x19
        setb byte ptr ss : [esp+0x12]
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f00efe
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_6f00efe
        push 0
        push edi
        push esi
        lea eax, ss:[esp+0x38]
        push 9
        push eax
        call public_6f00b10
        push 0
        push edi
        push esi
        lea ecx, ss:[esp+0x4C]
        push 0x12
        push ecx
        call public_6f00b10
        push 0
        push edi
        push esi
        lea edx, ss:[esp+0x60]
        push 0x18
        push edx
        call public_6f00b10
        push 0
        push edi
        push esi
        lea eax, ss:[esp+0x74]
        push 0x1A
        push eax
        call public_6f00b10
        add esp, 0x50
        jmp public_6f00f21
        public_6f00efe : nop
        push 0
        push edi
        push esi
        lea ecx, ss:[esp+0x38]
        push 9
        push ecx
        call public_6f00b10
        push 0
        push edi
        push esi
        lea edx, ss:[esp+0x4C]
        push 0x13
        push edx
        call public_6f00b10
        add esp, 0x28
        public_6f00f21 : nop
        push 0
        push edi
        push esi
        lea eax, ss:[esp+0x38]
        push 0x1C
        push eax
        call public_6f00b10
        mov eax, dword ptr ds : [esi+0x40]
        lea ecx, ss:[esp+0x38]
        push ecx
        mov dword ptr ss : [esp+0x3C], eax
        call public_6f49b00
        add esp, 0x18
        mov ecx, eax
        call public_6f47980
        mov eax, dword ptr ds : [eax+0x54]
        cmp eax, dword ptr ds : [esi+0x14]
        push 0
        push edi
        push esi
        jne public_6f00f61
        push 0x1D
        lea edx, ss:[esp+0x3C]
        push edx
        jmp public_6f00f68
        public_6f00f61 : nop
        push 0x1E
        public_6f00f63 : nop
        lea eax, ss:[esp+0x3C]
        push eax
        public_6f00f68 : nop
        call public_6f00b10
        add esp, 0x14
        public_6f00f70 : nop
        mov ebx, dword ptr ds : [public_6fb3294]
        public_6f00f76 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        public_6f00f7a : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6f01080
        test edi, edi
        je public_6f00fcb
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        push ecx
        lea edx, ss:[esp+0x34]
        push esi
        push edx
        call public_6f011f0
        add esp, 0x10
        neg al
        sbb al, al
        inc al
        test al, al
        jne public_6f011ac
        public_6f00fac : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x20]
        test edi, edi
        setne cl
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        jmp public_6f011a3
        public_6f00fcb : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_6f00fac
        call dword ptr ds : [public_6fb3370]
        imul eax, 0x65
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        cmp eax, 0x14
        jae public_6f00fac
        push ebp
/*FIXUP push offset public_6fb7d98 @0x6f00fee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d98
        call ebx
        add esp, 8
        test eax, eax
        je public_6f00fac
        push ebp
/*FIXUP push offset public_6fb7da0 @0x6f00ffd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7da0
        call ebx
        add esp, 8
        test eax, eax
        je public_6f00fac
        push ebp
/*FIXUP push offset public_6fb7dac @0x6f0100c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7dac
        call ebx
        add esp, 8
        test eax, eax
        je public_6f00fac
        push ebp
/*FIXUP push offset public_6fb7d8c @0x6f0101b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d8c
        call ebx
        add esp, 8
        test eax, eax
        je public_6f00fac
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        push 1
        call public_6f020c0
        add esp, 0x10
        test eax, eax
        je public_6f01050
        push 0
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6f01ab0
        public_6f01050 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        push edx
        push ecx
        push 4
        call public_6f020c0
        add esp, 0x10
        test eax, eax
        je public_6f00fac
        push 0
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6f01ab0
        jmp public_6f00fac
        public_6f01080 : nop
        push ebp
/*FIXUP push offset public_6fb7d98 @0x6f01081*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d98
        call ebx
        add esp, 8
        test eax, eax
        je public_6f01165
        push ebp
/*FIXUP push offset public_6fb7da0 @0x6f01094*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7da0
        call ebx
        add esp, 8
        test eax, eax
        je public_6f01165
        push ebp
/*FIXUP push offset public_6fb7dac @0x6f010a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7dac
        call ebx
        add esp, 8
        test eax, eax
        je public_6f01165
        push ebp
/*FIXUP push offset public_6fb7d8c @0x6f010ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d8c
        call ebx
        add esp, 8
        test eax, eax
        je public_6f01165
        test edi, edi
        jne public_6f010f6
        mov eax, dword ptr ds : [esi+0x48]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        push edx
        push ecx
        push 1
        call public_6f020c0
        add esp, 0x10
        test eax, eax
        je public_6f010f6
        push edi
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6f01ab0
        public_6f010f6 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        push 3
        call public_6f020c0
        add esp, 0x10
        test eax, eax
        je public_6f0111d
        push 0
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6f01ab0
        public_6f0111d : nop
        test edi, edi
        je public_6f011ac
        mov eax, dword ptr ds : [esi+0x48]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x44]
        push eax
        push edx
        push ecx
        push 6
        call public_6f020c0
        add esp, 0x10
        test eax, eax
        je public_6f0114c
        push 0
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6f01ab0
        public_6f0114c : nop
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        push esi
        lea ecx, ss:[esp+0x38]
        push 7
        push ecx
        call public_6f00b10
        add esp, 0x14
        jmp public_6f011ac
        public_6f01165 : nop
        test edi, edi
        je public_6f01189
        mov edx, dword ptr ss : [esp+0x14]
        push edi
        push edx
        lea eax, ss:[esp+0x34]
        push esi
        push eax
        call public_6f011f0
        add esp, 0x10
        neg al
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x12], al
        jne public_6f011ac
        public_6f01189 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        test edi, edi
        setne dl
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        public_6f011a3 : nop
        push esi
        call public_6f01600
        add esp, 0x18
        public_6f011ac : nop
        lea eax, ss:[esp+0x2C]
        push eax
        push esi
        call public_6f015e0
        add esp, 8
        lea ecx, ss:[esp+0x2C]
        mov esi, eax
        mov dword ptr ss : [esp+0x294], 0xFFFFFFFF
        call public_6eacae0
        mov ecx, dword ptr ss : [esp+0x28C]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x288
        ret 
        UNREACHABLE_TRAP(0x6f00b90)
    }
}

#undef public_6f00c57
#undef public_6f00c5c
#undef public_6f00d16
#undef public_6f00de2
#undef public_6f00e05
#undef public_6f00e2e
#undef public_6f00efe
#undef public_6f00f21
#undef public_6f00f61
#undef public_6f00f63
#undef public_6f00f68
#undef public_6f00f70
#undef public_6f00f76
#undef public_6f00f7a
#undef public_6f00fac
#undef public_6f00fcb
#undef public_6f01050
#undef public_6f01080
#undef public_6f010f6
#undef public_6f0111d
#undef public_6f0114c
#undef public_6f01165
#undef public_6f01189
#undef public_6f011a3
#undef public_6f011ac
